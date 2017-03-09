
/* Introducir un numero mayor o igual que cero asegurando esto, y si es impar visualizar
su tabla de multiplicar sino lo es, visualizar la tabla de multiplicar de su mitad,
hacer esto 20 veces como maximo */


#include <stdio.h>
#include <conio.h>


void main()
{
	int num,cont,contVeces;

 for(contVeces=1;contVeces<=20;contVeces++)
 {
   do
   {
   	printf("\n\n\t Introducir un Numero: ");
      scanf("%d",&num);
    }while(num<0);

    if((num%2)==0)
    	num=(num/2);
   
    	printf("\n\n\t La tabla de multiplicar es: ");
    	for(cont=1;cont<=10;cont++)
      {
      	printf("\n %d*%d=%d",num,cont,num*cont);
      }//fin for
  }//fin for

  clrscr();
  
fflush(stdin);
getchar();

}// fin main












































