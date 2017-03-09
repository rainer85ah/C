
#include <stdio.h>
#include <conio.h>

int Menu();
int CargarValores();
void VisualizarValores(int,int);
void MediaEntre2Valores(int,int);
void Mayor(int,int);
void Menor(int,int);


void main()
{
	int opc,num1,num2;
   char paso='n';

   do
   {
   	clrscr();
   	opc=Menu();

      switch(opc)
      {
      	case 1:
         	clrscr();
            num1=CargarValores();
            num2=CargarValores();
            paso='s';
         break;

         case 2:
         	clrscr;
            if(paso=='s')
            	VisualizarValores(num1,num2);
            else
            	printf("\n Pasar por EL Paso 1 Primero");
         break;

         case 3:
         	clrscr;
            if(paso=='s')
            	MediaEntre2Valores(num1,num2);
            else
            	printf("\n Pasar por EL Paso 1 Primero");
         break;

         case 4:
         	clrscr;
            if(paso=='s')
            	Mayor(num1,num2);
            else
            	printf("\n Pasar por EL Paso 1 Primero");
         break;

         case 5:
         	clrscr;
            if(paso=='s')
            	Menor(num1,num2);
            else
            	printf("\n Pasar por EL Paso 1 Primero");
         break;

         case 6:
         	clrscr();
            printf("\n Presione 2 veces ENTER para SALIR");
         break;

         default:
         	printf("\n ERROR!!!!Numero NO EXISTE!!!");
         break;
      }//fin switch

   	fflush(stdin);
      getchar();

   }while(opc!=6);

 fflush(stdin);
 getchar();

}//fin main

int Menu()
{
	int opc;

   printf("\n\n\t\t\a ****Menu de Opciones de Rainer*****");
   printf("\n\n\t 1.- Cargar Valores");
   printf("\n\n\t 2.- Visualizar Valores");
   printf("\n\n\t 3.- Media de los Valores");
   printf("\n\n\t 4.- Mayor Valores");
   printf("\n\n\t 5.- Menor Valores");
   printf("\n\n\t 6.- ****Salir****");

   printf("\n\n\t\t Introducir Opcion a Realizar: ");
   scanf("%d",&opc);
   return(opc);

}//fin menu

int CargarValores()
{
	int num;

   printf("\n Introducir Numero: ");
   scanf("%d",&num);
   return(num);

}//fin cargar

void VisualizarValores(int num1,int num2)
{
		printf("\n Los numeros son NUM1: %d y NUM2: %d", num1,num2);

}//fin visualizar

void MediaEntre2Valores(int num1,int num2)
{
	int media;

   media=(num1+num2)/2;
	printf("\n La Media de los 2 Numeros es: %d",media);

}//fin media

void Mayor(int num1,int num2)
{
	int mayor;

	if(num1!=num2)
   	if(num1>num2)
      	mayor=num1;
      else
      	mayor=num2;

   printf("\n El numero mayor es: %d", mayor);

}//fin mayor

void Menor(int num1,int num2)
{
	int menor;

	if(num1!=num2)
   	if(num1>num2)
      	menor=num2;
      else
      	menor=num1;

   printf("\n El numero menor es: %d", menor);

}//fin menor
























