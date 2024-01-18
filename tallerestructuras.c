#include <stdio.h>

struct alumno// creamos la estructura alumno
{
  int matricula;
  char nombre[50];//declaramos la función nombre como caracter
  char direccion[50];//declaramosla funcion direccion com carcter
  char carrera[50];
  float promedio;//declaramos como decimal
};
void ingresarDatos(struct alumno *alumno)//Define una función ingresarDatos que recibe un puntero a una estructura alumno 
{
  printf("Ingrese la matricula: ");//Pediemos ingresar cada dato
  scanf("%d", &alumno->matricula);// scanf para leer un entero 
  fflush(stdin); // Limpiar memoeria

  printf("Ingrese el nombre: ");// pedimos el ingreso de datos revisando la struct alumno
  gets(alumno->nombre);
  fflush(stdin);

 printf("Ingrese la direccion: ");
 gets(alumno->direccion);
 fflush(stdin);
 
  printf("Ingrese la carrera: ");
  gets(alumno->carrera);
  fflush(stdin);
  
  printf("Ingrese el promedio: ");
  scanf("%f", &alumno->promedio);
  fflush(stdin);
}

void mostrarDatos(struct alumno *alumno)//definimos los principales cambio del struct
{
  printf("\nMatricula: %d\n", alumno->matricula);// Pedimos el ingreso de la estructura para poder pasar los datos
  printf("Nombre: %s\n", alumno->nombre);
  printf("Direccion: %s\n", alumno->direccion);
  printf("Carrera: %s\n", alumno->carrera);
  printf("Promedio: %.2f\n", alumno->promedio);
}

int main()
{
  int n;

  printf("Ingrese el numero de alumnos: ");
  scanf("%d", &n);//decalramos n para almancenar la cantidad de alumnos
  fflush(stdin);//liberamos espacio de memoria
  struct alumno alumnos[n];//arreglo llamado alumnos para saber us cantidad

  for (int i = 0; i < n; i++) //realiamos un bucle depende de la cantidad de alumnos
  {
    printf("\nIngreso de datos para el alumno %d:\n", i + 1);
   ingresarDatos(&alumnos[i]);//llamamos a la funcion Ingresar datos para recopilar los datos 
  }

  printf("\nDatos ingresados:\n");
  for (int i = 0; i < n; i++) //Realizamos un bucel para cada uno de los alumnos 
  {
    printf("\nDatos del alumno %d:\n", i + 1);//Imprimimos  los datos del alumno
    mostrarDatos(&alumnos[i]);// se llama a la funcion para imprimir los datos
  }
  return 0;
}
