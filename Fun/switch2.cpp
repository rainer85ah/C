/*Introducir 2 numeros enteros y un caracter.
Si el caracter es una 'M? mayuscula, visualizar el mayor de los dos numeros.
si es una 'm' el menor,
si es una 'd' o 'D', visualizar la media.
Si es una 'p' o'P' visualizar el producto.
Si es cualquier otro caracter salvo 'r' y 'R', visualizar la suma.
(repetir 5 veces)*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int num1, num2, cont=0;
char letra;
void main ()
{
   do
   {
		printf("\n Dime una letritaaaa: ");
   	fflush (stdin);
   	letra=getchar();
   	clrscr;
   	printf("\n dime un numero ahora: ");
   	scanf("%d",&num1);
   	printf("\n telmi anoder number: ");
   	scanf("%d",&num2);
   	switch(letra)
   	{
   		case 'M':
   			if(num1<num2)
 	   			printf("\n El mayor es %d",num2);
       		else
       			printf("\n El mayor es %d",num1);
   	  	break;
   		case 'm':
   			if(num1<num2)
 	   			printf("\n El menor es %d",num1);
       		else
       			printf("\n El menor es %d",num2);
         break;
   		case 'd': case'D':
   				printf("\n La media es: %.2f", (num1+num2)/2.0);
   		break;
         case 'p': case'P':
   				printf("\n El producto es: %d", num1*num2);
   		break;
   		default:
         if(tolower(letra)!='r')
           printf("\n Su suma es: %d", num1+num2);
      }
      cont++;
   }
   while(cont<=5);
   fflush(stdin);
   getchar();
}
