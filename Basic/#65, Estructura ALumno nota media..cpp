/*
Una funicon que devuelva el nombre,la fehca de nacimiento y la nota media del alumno con
nombre del mes del alumno con nota media mas alta, 8.73 , 8.74.   ***NOTA: **Siempre que se quieran devolver varias cosas diferentes en
un programa te haces una plantilla o estructura especial con esos contenidos ,para devolverlos y visualizarlos en este caso en el main();
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
  	int dd;
   char mes[11];
   int anyo;

}Tnomes;


typedef struct
{
	char nombre[30];
   Tfecha fechaNac;
   float notaMedia;

}TAlumno;

typedef struct
{
	char nombre[30];
   Tnomes fechaNac;

}TAux;            

//*****************************prototipos**************************

TAux mediaAlta(TAlumno alum1[]);


//*****************************main**************************

void main()
{
	int i;
   TAlumno alum[nElem];
   TAux aux;

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
      scanf("%d",&alum[i].notaMedia);

   }//end for

   aux=mediaAlta(alum);

   clrscr();
   printf("\n\t Alumno con Nota Media Mas Alta");
   printf("\n\t Nombre y Apellido:%s ",aux.nombre);
   printf("\n\t Fecha de Nacimiento:%d/%s/%d ",aux.fechaNac.dd,aux.fechaNac.mes,aux.fechaNac.anyo);

	fflush(stdin);
   getchar();

}//end main


//*****************************definiciones*************************


TAux mediaAlta(TAlumno alum[nElem])
{
	int i;
   float Aux=0;
   char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
   TAux aux;

   for(i=0;i<nElem;i++)
   {
   	if(alum[i].notaMedia>Aux)
      {
         strcpy(aux.nombre,alum[i].nombre);
         aux.fechaNac.dd=alum[i].fechaNac.dd;
         strcpy(aux.fechaNac.mes,alum[i].fechaNac.mm[mes-1]);
         aux.fechaNac.anyo=alum[i].fechaNac.anyo;

      }//end if
      
   }//end for

   return(aux);

}//end media alta





