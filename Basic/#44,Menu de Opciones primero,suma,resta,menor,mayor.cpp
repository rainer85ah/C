/* Realiza un menu de opciones, las 4 primeras opciones se solicitan valores y se
visualiza el resultado, para las 5 y 6 se solicita antes los valores de las variables,
 se envian a la funcion correspondiente, estas devuelven el resultado al main. */


#include <stdio.h>
#include <conio.h>

//*******prototipo********

int Menu();
int CargarNumero();
void Suma();
void Resta();
void Producto();
void Division();
int Menor(int,int);
int Mayor(int,int);


//**********main***********


void main()
{
	int menor,mayor,opc,n1,n2;
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
            do
            {
            	n1=CargarNumero();
            	n2=CargarNumero();
            }while(n1==n2);
         break;

      	case 2:
         	clrscr();
            Suma();
         break;

         case 3:
         	clrscr();
         	Resta();
         break;

         case 4:
         	clrscr();
            Producto();
      	break;

         case 5:
         	clrscr();
            Division();
         break;

         case 6:
         	clrscr();
            if(paso=='n')
            	printf("\n Pasar Primero por el Paso 1.Cargar");
            else
            {
            	menor=Menor(n1,n2);
               printf("\n El Numero Menor es: %d",menor);
            }
         break;

         case 7:
         	clrscr();
            if(paso=='n')
            	printf("\n Pasar Primero por el Paso 1.Cargar");
            else
            {
            	mayor=Mayor(n1,n2);
               printf("\n El Numero Mayor es: %d",mayor);
            }
         break;

         case 8:
         	printf("\n Presione enter 2 veces para Salir");
         break;

         default:
         	printf("\n ERROR!!!El Numero Introducido no existe!!!");
         break;
      }//fin switch

      fflush(stdin);
      getchar();

   }while(opc!=8);

 fflush(stdin);
 getchar();

}// fin main


//************DEFINICIONES**************

int Menu()
{
	int opc;

	printf("\n\n\t\t\a *****Opciones del Menu: *******");
   printf("\n\n\t 1.- Cargar Valores ");
   printf("\n\n\t 2.- Sumar Valores ");
   printf("\n\n\t 3.- Restar Valores ");
   printf("\n\n\t 4.- Multiplicar Valores ");
   printf("\n\n\t 5.- Dividir Valores ");
   printf("\n\n\t 6.- Menor de 2 Valores ");
   printf("\n\n\t 7.- Mayor de 2 Valores ");
   printf("\n\n\t 8.- ****Salir**** ");
   printf("\n\n\t Introducir Opcion(1-8): ");
   scanf("%d",&opc);
   return(opc);
}//fin menu


int CargarNumero()
{
	int num;

   printf("\n Introducir Numero:  ");
   scanf("%d",&num);
   return(num);

}// fin cargar valor

void Suma()
{
 	int num1,num2;

   printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);

   printf("\n Introducir Numero 2:  ");
   scanf("%d",&num2);

   printf("\n La Suma es igua a %d+%d=%d", num1,num2,num1+num2);

}// fin suma


void Resta()
{
   int num1,num2;

   printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);

   printf("\n Introducir Numero 2:  ");
   scanf("%d",&num2);

   if(num1!=num2)
   	if(num1>num2)
         printf("\n La Diferencia es igua a %d-%d=%d", num1,num2,num1-num2);
      else
   		printf("\n La Diferencia es igua a %d-%d=%d", num2,num1,num2-num1);

}//fin resta

void Producto()
{
	int num1,num2;

	printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);

   printf("\n Introducir Numero 2:  ");
   scanf("%d",&num2);

   printf("\n El Producto es %d*%d=%d ",num1,num2,num1*num2);

}//fin multiplicar

void Division()
{
	int num1,num2;

	printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);

   printf("\n Introducir Numero 2:  ");
   scanf("%d",&num2);

   if(num2)
   	printf("\n El Producto es %d/%d=%d ",num1,num2,num1/num2);

}//fin division

int Menor(int n1,int n2)
{
	if(n1!=n2)
   	if(n1>n2)
      	return(n2);
      else
      	return(n1);
}// fin menor

int Mayor(int n1,int n2)
{
   if(n1!=n2)
   	if(n1>n2)
      	return(n1);
      else
      	return(n2);
}//fin mayor

