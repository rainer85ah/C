/*Introducir por teclado dos n�meros y realizar mediante un men� las siguientes opciones:
1. Suma
2. Producto
3. Mayor
4. Factorial mayor
5. Salir
Todas las opciones se realizar�n mediante funciones:
 - FUNCI�N SUMA: Recibir� los dos n�meros y devolver� la suma.
 - FUNCI�N PRODUCTO: Recibir� los dos n�meros y visualizar� el producto, no devolviendo nada.
 - FUNCI�N MAYOR: Recibir� los dos n�meros y devolver� el mayor.
 - FACTORIAL MAYOR: Recibir� un valor y devolver� su factorial. Antes de realizar esta funci�n se comprobar� que se ha
   realizado previamente la funci�n mayor.*/

#include <conio.h>
#include <stdio.h>
//prototipos
int Suma(int,int);
int Menu();
int Mayor (int,int);
void Producto(int,int);
double factorial(int);
void main()
{
	int n1,n2,opcion,S,M;
   char paso='n';
   double F;
   printf("\n numero1: ");
   scanf("%d", &n1);
   printf("\n numero2: ");
   scanf("%d", &n2);
   do
   {
   clrscr();
   opcion=Menu();
   switch (opcion)
   {
   	case 1:
      	S=Suma(n1,n2);
         printf("\n La suma es : %d",S);
         break;
      case 2:
      	Producto(n1,n2);
         break;
      case 3:
      	M=Mayor (n1,n2);
         printf("\n El mayor es: %d",M);
         paso='s';
         break;
      case 4:
      	if (paso=='s')
         {
         	F=factorial(M);
            printf("\n El factorial de %d es: %.0lf",M,F);
         }
         else
         	printf("\n Para esta opcion debe realizar antes el paso 3");
         break;
      default:
         	if(opcion!=5)
            	printf("\n opcion erronea");
            break;
   }//fin switch
   fflush(stdin);
   getchar();
   }while(opcion!=5);
}//fin main

//DEFINIMOS FUNCIONES:

//Funci�n Menu
int Menu()
{
	int opc;
   printf("\n \t\t Menu Opciones");
   printf("\n \t =======================");
   printf("\n \t 1. Sumar");
   printf("\n \t 2. Producto");
   printf("\n \t 3. Mayor");
   printf("\n \t 4. Factorial del mayor");
   printf("\n \t 5. Fin");
   printf("\n \t \t teclee opcion: ");
   scanf("%d", &opc);
   return(opc);
}

// Funci�n mayor:
int Mayor (int n1, int n2)
{
	if (n1>n2)
   	return (n1);
   else
   	return (n2);
}

// Funci�n Producto:
void Producto (int n1,int n2)
{
	int Prod;
  	Prod=n1*n2;
   printf("\n El producto de %d por %d es: %d", n1,n2,Prod);
}

//Funci�n Suma
int Suma (int n1,int n2)
{
	int Sum;
   Sum=n1+n2;
   return(Sum);
}

//Funci�n Factorial del mayor:
double factorial(int M)
{
	int contador=M;
   double Fac=1;
   clrscr();
   for(;contador>=1;contador--)
   {
   	Fac=Fac*contador;
      printf("\n fact= %.0lf", Fac);
   }
   fflush(stdin);
   getchar();
   return(Fac);
}
