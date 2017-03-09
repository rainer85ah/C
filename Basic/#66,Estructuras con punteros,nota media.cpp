/*
Una funicon que devuelva el nombre,la fehca de nacimiento y la nota media del alumno con
nombre del mes del alumno con nota media mas alta,Con punteros.


 ***NOTA: **Siempre que se quieran devolver varias cosas diferentes en
un programa te haces una plantilla o estructura especial con esos contenidos ,para devolverlos y visualizarlos en este caso en el main();
Suponiendo que no hay 2 alumnos con la nota media igual.
*/
                                                

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define nElem 2


//*****************************estructuras**************************

typedef struct
{
  	int dd,mm,anyo;

}Tfecha;

typedef struct
{
	char nombre[30];
   Tfecha fechaNac;
   float notaMedia;

}TAlumno;

//*****************************prototipos**************************

void mediaAlta(TAlumno *pepito);


//*****************************main**************************

void main()
{
	int i;
   TAlumno alum[nElem];

   for(i=0;i<nElem;i++)
   {
      clrscr();
   	printf("\n\t Introducir los Datos del Alumno %d \n",i+1);

      printf("\n\t Nombre y Apellido:");
      fflush(stdin);
      gets(alum[i].nombre);
      printf("\n\t Fecha de Nacimiento:");
      scanf("%d/%d/%d",&alum[i].fechaNac.dd,&alum[i].fechaNac.mm,&alum[i].fechaNac.anyo);
      printf("\n\t Nota Media:");
      scanf("%f",&alum[i].notaMedia);

   }//end for

   mediaAlta(alum);

	fflush(stdin);
   getchar();

}//end main


//*****************************definiciones*************************


void mediaAlta(TAlumno *punteroalum)
{
	int i;
   char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
   float nota=0;

   printf("\n Introducir nota: ");
   scanf("%f",&nota);

   for(i=0;i<nElem;i++)
   {
   	if(nota<=(punteroalum+i)->notaMedia)
      {
      	clrscr();
   		printf("\n\t DATOS DEL ALUMNO: ");
   		printf("\n El Nombre:%s",(punteroalum+i)->nombre);
   		printf("\n La fecha de Nacimiento:%d/%s/%d",(punteroalum+i)->fechaNac.dd,mes[(punteroalum+i)->fechaNac.mm-1],(punteroalum+i)->fechaNac.anyo);
   		printf("\n NOTA MEDIA:%.2f",(punteroalum+i)->notaMedia);
         fflush(stdin);
         getchar();
      }//fin-if
      else
      	printf ("\n El alumno %s tiene una nota \n media mas baja",(punteroalum+i)->nombre);

   }//end for

}//end media alta

