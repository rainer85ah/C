                             
// Introudicr un numero entero cualquiera y visualizar cuantas cifras pares tiene?

#include <stdio.h>

void main()
{
	int num,num1,contCifras=0,contPares=0;
   
   	printf("\n\t\a  Introducir Numero: ");
      scanf("%d",&num);

      num1=num;
    do
    {
    	if((num1/10)%2==0)
       contPares++;

     	 num1=(num1/10);
       contCifras++;
    }while(num1);
    
   printf("\n El Numero %d tiene %d Cifras Pares",num,contPares);
   printf("\n El Numero %d tiene %d Cifras",num,contCifras);
   
fflush(stdin);
getchar();

}// fin main