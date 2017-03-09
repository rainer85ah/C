//  Introducir 2 numeros y visualizar la tabla del mayor, crear una funcion para la tabla de multiplicar


#include <stdio.h>

//*******prototipo********

int tablaMultiplicar(int);

//*******MAIN*************

void main()
{
	int num1,num2,mayor;

   printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);

   do
   {
   	printf("\n Introducir Numero 2:  ");
   	scanf("%d",&num2);
   }while(num1==num2);

   if(num1>num2)
   {
   	mayor=num1;
   	printf("\n El Numero Mayor es: %d",mayor);
   	tablaMultiplicar(mayor);       //*******LLAMADA*************
   }
   else
   {
   	mayor=num2;
   	printf("\n El Numero Mayor es: %d",mayor);
      tablaMultiplicar(mayor);       //*******LLAMADA*************
   }

   printf("\n\t\a ***Presione ENTER para Salir*** ");
fflush(stdin);
getchar();

}// fin main

////*******DEFINICION*************////*******DEFINICION************

int tablaMultiplicar(int mayor)
{
   int cont;
   
   printf("\n\n La Tabla de Multiplicar Del Mayor es: ");
   for(cont=1;cont<=10;cont++)
   	printf("\n %d*%d=%d ",mayor,cont,mayor*cont);
return(mayor);
}// fin tabla Multiplicar




