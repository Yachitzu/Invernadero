#include <Wire.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>

WiFiClient client;

const char* ssid = "Red Marco";
const char* pass = "Pepebotellas12";

int humidity = 0;
int SensorPinHumedad = A0;
int temperature = 0;
String nombre = "Invernadero 1";

void setup() {
  Serial.begin(115200);
  Wire.begin();

  WiFi.begin(ssid, pass);
  // Mientras no se conecte al Wifi, muestre '.', sino salir del ciclo.
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Mostrar que está conectado.
  Serial.println("");
  Serial.println("WiFi conectado");
}

void loop() {

  leerdatos();
  envioDatos();
}

void leerdatos() {
  Wire.requestFrom(8, 1);
  while (Wire.available()) {

    humidity = leerHumedad();
    temperature = Wire.read();
  }
  Serial.print("Humedad enviada: ");
  Serial.println(humidity);

  Serial.print("Temperatura enviada: ");
  Serial.println(temperature);
  delay(1000);
}

int leerHumedad() {
  int humedad = analogRead(SensorPinHumedad);
  int porcentaje = map(humedad, 0, 1023, 100, 0);
  return porcentaje;
}

void envioDatos() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;  // creo el objeto http
    String datos_a_enviar = "disp=" + nombre + "&tempe=" + String(temperature) + "&hume=" + String(humidity);

    http.begin(client, "http://invernaderorosagirasol.000webhostapp.com/admin.php");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");  // defino texto plano..

    int codigo_respuesta = http.POST(datos_a_enviar);

    if (codigo_respuesta > 0) {
      Serial.println("Código HTTP: " + String(codigo_respuesta));
      if (codigo_respuesta == 200) {
        String cuerpo_respuesta = http.getString();
        Serial.println("El servidor respondió: ");
        Serial.println(cuerpo_respuesta);
      }
    } else {
      Serial.print("Error enviado POST, código: ");
      Serial.println(codigo_respuesta);
    }

    http.end();

  } else {
    Serial.println("Error en la conexion WIFI");
  }
  delay(60000);  //espera 60s
}