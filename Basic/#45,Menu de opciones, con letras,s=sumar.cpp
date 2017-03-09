
/* Crea un menu de opciones qu te permita sumar,restar,multiplicar y dividir
 escribiendo solo las iniciales, ayudate con la libreria ctype.h */


#include <stdio.h>
#include <ctype.h>
#include <conio.h>

//******prototipo*************

int Menu();
int CargarNumeros();
void Sumar(int,int);
void Restar(int,int);
void Multiplicar(int,int);
void Dividir(int,int);

//******main***********8*************
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
         paso='s';
      	num1=CargarNumeros();       //llamada
         num2=CargarNumeros();       //llamada
      break;

      case 2:
      	clrscr();
         if(paso=='s')
         	Sumar(num1,num2);      //llamada
         else
         	printf("\n Pasar antes por el Paso 1");
      break;

      case 3:
      	clrscr();
         if(paso=='s')                       //llamada
         	Restar(num1,num2);
         else
         	printf("\n Pasar antes por el Paso 1");
      break;

      case 4:
      	clrscr();
         if(paso=='s')
         	Multiplicar(num1,num2);         //llamada
         else
         	printf("\n Pasar antes por el Paso 1");
      break;

      case 5:
      	clrscr();
         if(paso=='s')
         	Dividir(num1,num2);                  //llamada
      	else
         	printf("\n Pasar antes por el Paso 1");
      break;

		case 6:
      	printf("\n\t\a Presione 2 veces ENTER para Salir!!!!!");
      break;

      default:
      	printf("\n ERROR !!!!!!");
      break;

   }//fin switch

   fflush(stdin);
   getchar();

 }while(opc!=6);

 fflush(stdin);
 getchar();

}// fin main

//******DEFINICIONES*************

int Menu()
{
	int opc;

	printf("\n\n\t\t ****Menu de Opciones****");
   printf("\n\n\t 1.- Cargar valores");
   printf("\n\n\t 2.- Sumar valores");
   printf("\n\n\t 3.- Restar valores");
   printf("\n\n\t 4.- Multiplicar valores");
   printf("\n\n\t 5.- Dividir valores");
   printf("\n\n\t 6.- ******Salir****");

   printf("\n\n\n\t\t Teclea una Opcion:  ");
   scanf("%d",&opc);
   return(opc);

}//fin menu

int CargarNumeros()
{
	int num;

   printf("\n Introducir Numero: ");
   scanf("%d",&num);
	return(num);

}//fin cargar


void Sumar(int num1,int num2)
{
   if(tolower('S')=='s')
		printf("\n La Suma es igual a %d+%d=%d", num1,num2,num1+num2);

}//fin sumar

void Restar(int num1,int num2)
{
   if(tolower('R')=='r')
		printf("\n La Resta es igual a %d+%d=%d", num1,num2,num1-num2);

}//fin restar

void Multiplicar(int num1,int num2)
{
   if(tolower('M')=='m')
		printf("\n La Multiplicacion es igual a %d*%d=%d", num1,num2,num1*num2);

}//fin multiplicar

void Dividir(int num1,int num2)
{
   if(tolower('D')=='d')
		printf("\n La Division es igual a %d/%d=%d", num1,num2,num1/num2);

}//fin division


























