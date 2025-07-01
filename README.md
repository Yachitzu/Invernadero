# 🌱 Invernadero Inteligente

**Invernadero** es un sistema integral diseñado para monitorear las condiciones climáticas dentro de un invernadero. Proporciona una solución eficiente y accesible para visualizar datos de temperatura ambiental y humedad del suelo en tiempo real, facilitando decisiones informadas para el cuidado de cultivos.

---

## 🎯 Objetivo del Proyecto

Desarrollar una plataforma que:

- Reciba datos desde sensores físicos ubicados en un invernadero.
- Muestre visualizaciones en tiempo real de temperatura y humedad.
- Envíe alertas por correo electrónico ante valores críticos.
- Genere reportes en formato PDF.
- Ofrezca una aplicación de escritorio con roles diferenciados (Administrador, Supervisor, Técnico).

---

## 🧠 Componentes del Proyecto

🔹 `arduino/` → Código para microcontroladores (Arduino UNO y NodeMCU 1.0)  
🔹 `web/` → Aplicación web desarrollada con HTML, CSS y PHP  
🔹 `desktop-app/` → Aplicación de escritorio en Java (GUI + iReport)

---

## 🖥 Capturas de Pantalla (Aplicación Web)

<table>
  <tr>
    <td align="center"><b>Inicio de sesión</b></td>
    <td align="center"><b>Panel Administrador</b></td>
  </tr>
  <tr>
    <td><img src="./web/screenshots/login.png" width="300"/></td>
    <td><img src="./web/screenshots/admin.png" width="300"/></td>
  </tr>
  <tr>
    <td align="center"><b>Vista de datos</b></td>
    <td align="center"><b>Alertas Correo</b></td>
  </tr>
  <tr>
    <td><img src="./web/screenshots/estado.png" width="300"/></td>
    <td><img src="./web/screenshots/correo.png" width="300"/></td>
  </tr>
</table>

> 📌 Las capturas se encuentran en la carpeta `screenshots/`.

---

## 👥 Roles en la Aplicación de Escritorio

- **Administrador**: Accede a Estado, Gestión de Usuarios y Reportes.
- **Supervisor**: Accede a Estado y Reportes.
- **Técnico**: Solo puede visualizar el Estado del invernadero.

---

## 🔍 Funcionalidades Destacadas

- **Visualización en tiempo real** de registros de temperatura y humedad.
- **Tabla dinámica** actualizada cada 30 segundos.
- **Gestión de usuarios** desde la interfaz Java.
- **Notificaciones por correo electrónico** ante valores críticos.
- **Generación de reportes PDF** con iReport.
- **Diferenciación de vistas** según el rol del usuario.

---

## ⚙️ Tecnologías Usadas

| Componente       | Tecnología / Herramienta            |
|------------------|--------------------------------------|
| Web Frontend     | HTML, CSS                           |
| Web Backend      | PHP, MySQL (phpMyAdmin)             |
| Hosting Web      | 000webhost (actualmente inactivo)   |
| App Escritorio   | Java + iReport                      |
| Microcontrolador | Arduino UNO, NodeMCU 1.0            |
| Sensores         | FC-28 (Humedad), LM35 (Temperatura) |

---



## 🧑‍💻 Autores

**Estefanía Mora**  
Estudiante de Ingeniería en Software – Universidad Técnica de Ambato  
Facultad de Ingeniería en Sistemas, Electrónica e Industrial  
[GitHub](https://github.com/yachitzu)

**Patricio Salazar**  
Estudiante de Ingeniería en Software – Universidad Técnica de Ambato  
Facultad de Ingeniería en Sistemas, Electrónica e Industrial  


**Gerson Zunta**  
Estudiante de Ingeniería en Software – Universidad Técnica de Ambato  
Facultad de Ingeniería en Sistemas, Electrónica e Industrial  


**Marco Montesdeoca**  
Estudiante de Ingeniería en Software – Universidad Técnica de Ambato  
Facultad de Ingeniería en Sistemas, Electrónica e Industrial  


---


