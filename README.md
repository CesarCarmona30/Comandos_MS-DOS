miniDOS

Este programa en C consiste en comprender y experimentar con los comandos básicos del MSDOS/Windows. A través de un menú interactivo, se pueden ejecutar diversos comandos para ver su funcionamiento.

Descripción

El código fuente, contenido en miniDOS.c, implementa un menú que permite ejecutar los siguientes comandos:

ver: Muestra la versión del sistema.

cls: Limpia la pantalla de la terminal.

dir: Lista los directorios y archivos.

date /t: Muestra la fecha actual.

time /t: Muestra la hora actual.

type: Muestra el contenido de un archivo.

del: Elimina un archivo.

copy: Copia un archivo.

mkdir: Crea un directorio.

rd: Elimina un directorio.

tree: Muestra la estructura de directorios en forma de árbol.

ren: Renombra un archivo.

help: Muestra ayuda del sistema.

attrib: Muestra los atributos de los archivos.

cd: Cambia el directorio actual.

mv (o move): Mueve archivos.

shutdown: Apaga el equipo (con opción de cancelar).

Cada uno de estos comandos se encapsula en funciones individuales, lo que facilita la comprensión del código.

Compilación

Para compilar el programa, abre la terminal y ejecuta el siguiente comando (asegurándote de tener instalado un compilador de C, como GCC):

gcc miniDOS.c -o miniDOS.exe

Nota: Este código está diseñado para entornos Windows, ya que utiliza comandos propios de MSDOS/Windows.

Ejecución

Una vez compilado, ejecuta el programa desde la terminal con:

miniDOS.exe

Al iniciarse, el programa desplegará un menú interactivo que te permitirá seleccionar y probar cada uno de los comandos.

Consideraciones

Este código utiliza la función system() para ejecutar comandos directamente en la terminal.

Algunas funciones, como la que muestra un mensaje en pantalla, requieren un manejo cuidadoso del buffer de entrada para evitar problemas con los saltos de línea.
