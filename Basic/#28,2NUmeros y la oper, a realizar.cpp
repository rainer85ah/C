
/* Introducir 2 numeros por teclados asegurando esto y un caracter( * / + - ) indicando la
 operacion a realizar. Realizar esta operacion mientras en el caracter seguir sea igual a s. */


#include <stdio.h>
#include <conio.h>

void main()
{
	int num1,num2;
   char oper,seguir='n';

   seguir='s';
	while(seguir=='s')
   {
      do
      {
   		printf("\n Introducir Numero 1(10-99):  ");
      	scanf("%d",&num1);
      }while(num1<10 || num1>=100);

      do
      {
        printf("\n Introducir Numero 2(10-99):  ");
        scanf("%d",&num2);
      }while(num2<10 || num2>=100);

      do
      {
      	printf("\n Introducir Operacion: ");
      	scanf("%c",&oper);
      }while(oper!= '*' && oper!= '+' && oper!= '-' && oper!='/');


      if(oper=='+')
      	printf("\n La suma es: %d+%d=%d ",num1,num2,num1+num2);
      	else
           if(oper=='-')
      	  	printf("\n La Diferencia es: %d-%d=%d ",num1,num2,num1-num2);
              else
         		if(oper=='*')
      				printf("\n El Producto es: %d*%d=%d ",num1,num2,num1*num2);
        			  else
        				  if(oper=='/')
      					 printf("\n La Division es: %d/%d=%d ",num1,num2,num1/num2);


   printf("\n Desea Continuar(s/n):  ");
   scanf("%c",&seguir);
   }// fin while

   fflush(stdin);
   getchar();

}// fin main