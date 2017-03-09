/*Realizar 5 veces lo siguiente: Introducir un numero y si es múltiplo de 3 pero no de 2 visualizarle al cuadrado, y si es múltiplo de 3 y de 2 visualizarle dividido entre 3*/

#include <stdio.h>
void main()
{
	int num, cont=0;
   while (cont<5)
   {
   	printf ("\n Numero:");
      scanf ("%d",&num);
      if (num%3==0)
      	if (num%2==0)
         	printf("\n %d/3=%d",num,num/3);
            else
            	printf("\n %d al cuadrado =%d", num, num*num);
      cont++;
   }//fin while
   fflush(stdin);
   getchar();
}// fin main