
/* FUNCIONES, HASTA HORA REALIZAMOS UN SOLO EJERCICIO, CON ESTAS FUNCIONES SE PUEDEN REALIZAR
MAS PRGRAMAS PEQUENOS DENTRO DE UN MAS GRANDE QUE LOS BUSQUE  Y LOS CARGUE.  */


// Ejemplo de LOli en la Pizarra, Intercambio de 2 numeros.

#include <stdio.h>


//********PROTOTIPO****

void CambioVariable(int,int);


//********MAIN*********
void main()
{
   int num1,num2;

   printf("\n Introducir Numero 1:  ");
   scanf("%d",&num1);
   printf("\n Introducir Numero 2:  ");
   scanf("%d",&num2);

   printf("\n Los Numeros son N1=%d y N2=%d ", num1,num2);

   CambioVariable(num1,num2);       // funcion <llamada dentro del main

fflush(stdin);
getchar();

}// fin main


//********DEFINICION***

void CambioVariable(int num1,int num2)
{
 	int aux;

   aux=num1;
   num1=num2;
   num2=aux;

   printf("\n Los Numeros son N1=%d y N2=%d ", num1,num2);
   
}// fin funcion de Intercambio
