#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int opcion = 0;

// Función para limpiar la terminal
void limpiar()
{
  system("cls");
}

// Función para eliminar un archivo
void borrar()
{
  char nombreArchivo[50];
  char comando[100];
  printf("Escribe el nombre del archivo: ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "del %s", nombreArchivo);
  system(comando);
}

// Función para crear un archivo
void crear_archivo()
{
  char nombreArchivo[50];
  char comando[150];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "copy con %s", nombreArchivo);
  printf("Escribe el contenido del archivo, para finalizar teclea Ctrl + Z\n");
  system(comando);
}

// Función para crear un directorio
void crear_directorio()
{
  char nombreDirectorio[50];
  char comando[100];
  printf("Escribe el nombre del directorio: ");
  scanf("%s", nombreDirectorio);
  sprintf(comando, "mkdir %s", nombreDirectorio);
  system(comando);
}

// Función para renombrar un archivo
void renombrar()
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

// Función para mostrar la fecha actual
void fecha()
{
  system("date /t");
}

// Función para copiar un archivo
void copiar()
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

// Función para mostrar la versión del sistema
void version()
{
  system("ver");
};

// Función para eliminar un directorio
void borrar_directorio()
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

// Función para mostrar la hora actual
void hora()
{
  system("time /t");
}

// Función para mover archivos
void mover()
{
  char nombreArchivo[50];
  char rutaDestino[100];
  char comando[150];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  printf("Escribe el nombre de la ruta de destino: ");
  scanf("%s", rutaDestino);
  sprintf(comando, "move %s %s", nombreArchivo, rutaDestino);
  system(comando);
}

// Función para mostrar el contenido de un archivo
void ver_archivo()
{
  char nombreArchivo[50];
  char comando[100];
  printf("Escribe el nombre del archivo (con extension): ");
  scanf("%s", nombreArchivo);
  sprintf(comando, "type %s", nombreArchivo);
  system(comando);
}

// Función para mostrar la ayuda del sistema
void ayuda()
{
  system("help");
}

// Función para mostrar los directorios
void contenido_directorio()
{
  system("dir");
}

// Función para salir de la terminal y programa
void salir()
{
  // system("exit");
  exit(0);
}

// Función para el menú
void menu()
{
  for (int i = 0; i <= 80; i++)
  {
    printf("_");
  }

  printf("\n|                                 MENU                                          |\n");
  printf("|                                                                               |\n");
  printf("|     1) Limpiar            6) Fecha               11) Hora                     |\n");
  printf("|     2) Borrar             7) Copiar              12) Mover                    |\n");
  printf("|     3) Crear archivo      8) Version             13) Ver archivo              |\n");
  printf("|     4) Crear directorio   9) Borrar directorio   14) Ayuda                    |\n");
  printf("|     5) Renombrar         10) Arbol               15) Contenido directorio     |\n");
  printf("|                                                  16) Salir                    |\n");
  printf("|                                                             OPCION?_");
  scanf("%d", &opcion);
  for (int i = 0; i <= 80; i++)
  {
    printf("_");
  }
  printf("|\n");
}

void ejecuta()
{
  switch (opcion)
  {
  case 1:
    limpiar();
    break;
  case 2:
    borrar();
    break;
  case 3:
    crear_archivo();
    break;
  case 4:
    crear_directorio();
    break;
  case 5:
    renombrar();
    break;
  case 6:
    fecha();
    break;
  case 7:
    copiar();
    break;
  case 8:
    version();
    break;
  case 9:
    borrar_directorio();
    break;
  case 10:
    arbol();
    break;
  case 11:
    hora();
    break;
  case 12:
    mover();
    break;
  case 13:
    ver_archivo();
    break;
  case 14:
    ayuda();
    break;
  case 15:
    contenido_directorio();
    break;
  case 16:
    salir();
    break;
  default:
    printf("Error. Opcion no valida");
    menu();
  }
}

int main()
{
  do
  {
    menu();
    ejecuta();
  } while (opcion >= 1 || opcion <= 15);
}
