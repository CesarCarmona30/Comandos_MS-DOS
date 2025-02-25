#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Función para mostrar la versión del sistema
void version()
{
  system("ver");
};

// Función para limpiar la terminal
void limpiar()
{
  system("cls");
}

// Función para mostrar los directorios
void directorios()
{
  system("dir");
}

// Función para mostrar la fecha actual
void fecha()
{
  system("date /t");
}

// Función para mostrar la hora actual
void hora()
{
  system("time /t");
}

// Función para mostrar el contenido de un archivo
void verContenido()
{
  char nombreArchivo[50];
  char comando[100];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "type %s", nombreArchivo);
  system(comando);
}

// Función para eliminar un archivo
void borrarArchivo()
{
  char nombreArchivo[50];
  char comando[100];
  printf("Escribe el nombre del archivo: ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "del %s", nombreArchivo);
  system(comando);
}

// Función para copiar un archivo
void copiarArchivo()
{
  char nombreArchivo[50];
  char rutaDestino[100];
  char comando[150];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  printf("Escribe el nombre de la ruta de destino: ");
  scanf("%s", rutaDestino);
  sprintf(comando, "copy %s %s", nombreArchivo, rutaDestino);
  system(comando);
}

// Función para crear un directorio
void crearDirectorio()
{
  char nombreDirectorio[50];
  char comando[100];
  printf("Escribe el nombre del directorio: ");
  scanf("%s", nombreDirectorio);
  sprintf(comando, "mkdir %s", nombreDirectorio);
  system(comando);
}

// Función para eliminar un directorio
void borrarDirectorio()
{
  char nombreDirectorio[50];
  char comando[100];
  printf("Escribe el nombre del directorio: ");
  scanf("%s", nombreDirectorio);
  sprintf(comando, "rd %s", nombreDirectorio);
  system(comando);
}

// Función para mostrar el arbol de directorios
void arbol()
{
  system("tree");
}

// Función para renombrar un archivo
void renombrarArchivo()
{
  char nombreArchivo[50];
  char nuevoNombre[50];
  char comando[100];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  printf("Escribe el nuevo nombre (incluye la extension): ");
  scanf("%s", nuevoNombre);
  sprintf(comando, "ren %s %s", nombreArchivo, nuevoNombre);
  system(comando);
}

// Función para mostrar la ayuda del sistema
void ayuda()
{
  system("help");
}

// Función para salir de la terminal y programa
void salir()
{
  system("exit");
}

// Función para mostrar los atributos de los archivos
void atributos()
{
  system("attrib");
}

// Función para cambiar de directorio
void cambiarDirectorio()
{
  int opcion;
  printf("1. Moverse a la ruta raíz\n2. Moverse un directorio anterior\n");
  printf("3. Indicar un directorio en especifico\n");
  printf("Introduce la opcion escogida: ");
  scanf("%d", &opcion);
  switch (opcion)
  {
  case 1:
    system("cd /");
    break;
  case 2:
    system("cd ..");
    break;
  case 3:
    char nombreRuta[100];
    char comando[150];
    printf("Escribe el nombre de la ruta de destino: ");
    scanf("%s", nombreRuta);
    sprintf(comando, "cd %s ", nombreRuta);
    system(comando);
    break;
  default:
    break;
  }
}

// Función para mover archivos
void moverArchivo()
{
  char nombreArchivo[50];
  char rutaDestino[100];
  char comando[150];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  printf("Escribe el nombre de la ruta de destino: ");
  scanf("%s", rutaDestino);
  sprintf(comando, "mv %s %s", nombreArchivo, rutaDestino);
  system(comando);
}

// Función para mostrar un mensaje en la terminal
void mostrarMensaje()
{
  char mensaje[50];
  char comando[150];
  printf("Escribe el mensaje a mostrar en la terminal: ");
  fgets(mensaje, sizeof(mensaje), stdin);
  sprintf(comando, "echo %s", mensaje);
  system(comando);
}

// Función para crear un archivo
void crearArchivo()
{
  char nombreArchivo[50];
  char comando[150];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "type nul > %s", nombreArchivo);
  system(comando);
}

// Función para apagar el equipo
void apagarEquipo()
{
  char cancelar;
  printf("El sistema se apagara en 10 segundos");
  system("shutdown -s -t 10");
  printf("\nDesea cancelar la operacion? [s/S] para Si\n>_");
  scanf(" %xc", &cancelar);
  if (cancelar == 's' || cancelar == 'S')
  {
    system("shutdown -a");
  }
}

// Función para el menú
void menu(int *seguir)
{
  int opcion;

  printf("\nLENGUAJE DE CONTRO\n(OPCIONES - MSDOS/WINDOWS)\n");
  printf("------------------------------------------------\n");
  printf("1.  Version\n");
  printf("2.  Limpiar pantalla\n");
  printf("3.  Ver directorios\n");
  printf("4.  Fecha\n");
  printf("5.  Hora\n");
  printf("6.  Ver contenido de archivo\n");
  printf("7.  Borrar archivo\n");
  printf("8.  Copiar archivo\n");
  printf("9.  Crear directorio\n");
  printf("10. Borrar directorio\n");
  printf("11. Arbol\n");
  printf("12. Renombrar archivo\n");
  printf("13. Ayuda\n");
  printf("14. Salir\n");
  printf("15. Atributos\n");
  printf("16. Cambiar directorio\n");
  printf("17. Mover archivo\n");
  printf("18. Mostrar un mensaje\n");
  printf("19. Crear archivo\n");
  printf("20. Apagar equipo\n");
  printf("------------------------------------------------\n");
  printf("Introduce la opción deseada: ");
  scanf("%d", &opcion);

  switch (opcion)
  {
  case 1:
    version();
    break;
  case 2:
    limpiar();
    break;
  case 3:
    directorios();
    break;
  case 4:
    fecha();
    break;
  case 5:
    hora();
    break;
  case 6:
    verContenido();
    break;
  case 7:
    borrarArchivo();
    break;
  case 8:
    copiarArchivo();
    break;
  case 9:
    crearDirectorio();
    break;
  case 10:
    borrarDirectorio();
    break;
  case 11:
    arbol();
    break;
  case 12:
    renombrarArchivo();
    break;
  case 13:
    ayuda();
    break;
  case 14:
    salir();
    *seguir = 0;
    break;
  case 15:
    atributos();
    break;
  case 16:
    cambiarDirectorio();
    break;
  case 17:
    moverArchivo();
    break;
  case 18:
    mostrarMensaje();
    break;
  case 19:
    crearArchivo();
    break;
  case 20:
    apagarEquipo();
    break;
  }
}

int main()
{
  int seguir = 1;
  while (seguir)
  {
    menu(&seguir);
  }
}