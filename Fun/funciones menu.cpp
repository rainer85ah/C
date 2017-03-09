/*Introducir por teclado dos números y realizar mediante un menú las siguientes opciones:
1. Suma
2. Producto
3. Mayor
4. Factorial mayor
5. Salir
Todas las opciones se realizarán mediante funciones:
 - FUNCIÓN SUMA: Recibirá los dos números y devolverá la suma.
 - FUNCIÓN PRODUCTO: Recibirá los dos números y visualizará el producto, no devolviendo nada.
 - FUNCIÓN MAYOR: Recibirá los dos números y devolverá el mayor.
 - FACTORIAL MAYOR: Recibirá un valor y devolverá su factorial. Antes de realizar esta función se comprobará que se ha
   realizado previamente la función mayor.*/

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

//Función Menu
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

// Función mayor:
int Mayor (int n1, int n2)
{
	if (n1>n2)
   	return (n1);
   else
   	return (n2);
}

// Función Producto:
void Producto (int n1,int n2)
{
	int Prod;
  	Prod=n1*n2;
   printf("\n El producto de %d por %d es: %d", n1,n2,Prod);
}

//Función Suma
int Suma (int n1,int n2)
{
	int Sum;
   Sum=n1+n2;
   return(Sum);
}

//Función Factorial del mayor:
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
