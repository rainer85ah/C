/* Introducir numeros enteros y guardarlos en la varible num, e irlos acumulandos
 hasta que lleguen a 2000 euros o como maximo 15 numeros, visualizar los
 numeros introducidos y el total acumulado sin contar el numero que hizo salir del proceso. */

#include <stdio.h>

void main()
{
	int num,ContVeces,AcumNum=0;

   do
   {
   	printf("\n Introducir Numero: ");
   	scanf("%d",&num);
    }while(num);

  for(ContVeces=0;AcumNum<=2000 && ContVeces<=15;ContVeces++)
   		AcumNum+=num;

   printf("\n Los Numero Introducidos son: %d y el Total Acumulado es: %d",ContVeces-1,AcumNum-num);

fflush(stdin);
getchar();

}//fin main