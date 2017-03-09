/*	Solcitar los datos de un alumno y si es mayor de edad, visualizar sus datos con el nombre del mes en lugar del numero,
mediante una funcion.El proceso finalizara cuando la pregunta desea continuar sea no.Si es mayor de edad hay que enviar la variable aluno a una
funcion para visualizar los datos de alumno y pasar el mes de numero a palabra. no recibe nada.     */


#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Fecha
{
	int dd,mm,anyo;
};
struct Alumno
{
	char nombre[30];
   int telefono;
   struct Fecha fechaNac;
}alum;


//**********************prototipo******************

void visAlumno(struct Alumno alum);


//**********************main***********************

void main()
{
	char seguir[3]="si";

  while(strcmp(seguir,"si")==0)
  {
      clrscr();
      do
      {
   		printf("\n Anyo De Nacimiento: ");
   		scanf("%d",&alum.fechaNac.anyo);

       }while(alum.fechaNac.anyo>1991);

   clrscr();
   visAlumno(alum);

   printf("\n\n\n\t\a Desea Continuar(si/no): ");
   fflush(stdin);
   gets(seguir);

  }//end while

	fflush(stdin);
   getchar();

}//end main




//**************************funciones*****************


void visAlumno(struct Alumno alum)
{
	char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

	printf("\n\n\t\a Introducir los Datos del Alumno: \n\n");

   printf("\n Nombre y Apellido: ");
   fflush(stdin);
   gets(alum.nombre);

   printf("\n Telefono: ");
   scanf("%d",&alum.telefono);

   printf("\n Fecha de Nacimiento(dd/mm/yyyy): ");
   scanf("%d/%d/%d",&alum.fechaNac.dd,&alum.fechaNac.mm,&alum.fechaNac.anyo);

   clrscr();
 	printf("\n Datos del Alumno:  \n\n");

   printf("\n Nombre: %s",alum.nombre);
   printf("\n Telefono: %d",alum.telefono);
   printf("\n Fecha de Nacimiento: %d/%s/%d",alum.fechaNac.dd,alum.fechaNac.mm[mes-1],alum.fechaNac.anyo);

}//fin cargar y visualizar




