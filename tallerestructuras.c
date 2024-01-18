#include <stdio.h>

struct alumno// creamos la estructura alumno
{
  int matricula;
  char nombre[50];
  char direccion[50];
  float promedio;
};
void ingresarDatos(struct alumno *alumno)//Define una función ingresarDatos que recibe un puntero a una estructura alumno 
{
  printf("Ingrese la matricula: ");//Pediemos ingresar cada dato
  scanf("%d", &alumno->matricula);// scanf para leer un entero 
  fflush(stdin); // Limpiar memoeria

  printf("Ingrese el nombre: ");
  gets(alumno->nombre);
  fflush(stdin);

 printf("Ingrese la direccion: ");
 gets(alumno->direccion);
 fflush(stdin);


  printf("Ingrese el promedio: ");
  scanf("%f", &alumno->promedio);
  fflush(stdin);
}

void mostrarDatos(struct alumno *alumno)//lamamos a la funcion struc alumno para que se pueda reemplazar
{
  printf("\nMatricula: %d\n", alumno->matricula);// Pedimos el ingreso de la estructura para poder pasar los datos
  printf("Nombre: %s\n", alumno->nombre);
  printf("Direccion: %s\n", alumno->direccion);
  printf("Promedio: %.2f\n", alumno->promedio);
}

int main()
{
  int n;

  printf("Ingrese el numero de alumnos: ");
  scanf("%d", &n);
  fflush(stdin);//liberamos espacio de memoeria
  struct alumno alumnos[n];

  for (int i = 0; i < n; i++) //vericamos con la cantidad total de alumnos y se elgira cualquier cantidad 
  {
    printf("\nIngreso de datos para el alumno %d:\n", i + 1);
   ingresarDatos(&alumnos[i]);
  }

  printf("\nDatos ingresados:\n");
  for (int i = 0; i < n; i++)
  {
    printf("\nDatos del alumno %d:\n", i + 1);
    mostrarDatos(&alumnos[i]);
  }
  return 0;
}
