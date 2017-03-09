
/* Crea un menu de opcion sobre tablas, con las opciones de: cagr,visualizar,
mayor valor y menor, salir. */


#include <stdio.h>
#include <conio.h>       
#define nElem 5

//********PROTOTIPO********

int Menu();
void CargarValores();
void Visualizar(int Tabla[]);
void Mayor(int Tabla[]);
void Menor(int Tabla[]);


//**********main********************

void main()
{
	int opc,Tabla[nElem];
   char paso='n';

   do
   {
   	clrscr();
   	opc=Menu();

      switch(opc)
      {
      	case 1:
         	clrscr();
            CargarValores();
            paso='s';
         break;

         case 2:
         	if(paso=='s')
            {
         		clrscr();
            	Visualizar(Tabla);
            }
            else
            	printf("\n Pasa Por el Paso 1");
         break;

         case 3:
         	if(paso=='s')
            {
         		clrscr();
               Mayor(Tabla);
            }
            else
               printf("\n Pasa Por el Paso 1");
         break;

         case 4:
         	if(paso=='s')
            {
         		clrscr();
               Menor(Tabla);
            }
            else
               printf("\n Pasa Por el Paso 1");
         break;

         case 5:
         	printf("\n Presione ENTER 2 veces para SALIR");
         break;

         default:
         	printf("\n\a ERROR !!!!! Numero no esta dentro de (1-5)");
         break;

      }//fin switch

      fflush(stdin);
      getchar();

   }while(opc!=5);

 fflush(stdin);
 getchar();

}//fin main


//******definiciones************

int Menu()
{
	int opc;

	printf("\n\n\t ***Menu de Opciones para Tablas*** ");
   printf("\n\n\t 1.- Cargar Tabla ");
   printf("\n\t 2.- Visualizar Tabla ");
   printf("\n\t 3.- Visualizar el Mayor de la Tabla ");
   printf("\n\t 4.- Visualizar el Menor de la Tabla ");
   printf("\n\n\t 5.- ****SALIR****** ");

   printf("\n\n\t  Introduce Opcion(1-5): ");
   scanf("%d",&opc);
   return(opc);

}// FIN menu

void CargarValores()
{
	int i,Tabla[nElem];

   for(i=0;i<nElem;i++)
   	Tabla[i]=0;

   for(i=0;i<nElem;i++)
   {
   	for(i=0;i<nElem;i++)
   	Tabla[i]=0;
      
   	printf("\n Introduce Numero Tabla[%d]: ",i+1);
      scanf("%d",&Tabla[i]);

   }//fin for

}//fin cargar

void Visualizar(int Tabla[])
{
	int i;
      
   for(i=0;i<nElem;i++)
   	printf("\n %d .",Tabla[i]);

}//fin visualizar

void Mayor(int Tabla[])
{
	int i,mayor=-1;

	for(i=0;i<nElem;i++)
   {
      if(Tabla[i]>mayor)
      {
      	mayor=Tabla[i];
         printf("\n El numero Mayor es : %d ",mayor);
      }// fin si
   }//fin for

}//fin mayor

void Menor(int Tabla[])
{
	int i,menor=999999;
   
	for(i=0;i<nElem;i++)
   {
    	if(Tabla[i]<menor)
      {
      	menor=Tabla[i];
         printf("\n El numero Menor es : %d ",menor);
      }
    }//fin for

}//fin menor


