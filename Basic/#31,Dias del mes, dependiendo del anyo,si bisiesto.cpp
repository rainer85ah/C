
/* Introducir una fecha de mes y anyo y visualizar cuantos dias tiene ese mes,
suponiendo que los anyos son numero de 4 cifras y cada 4 anyos hay uno bisiesto
IMPORTANTE*******CONDICION****IF((ANYO%4==0 && ANYO%100!=0) || ANYO%400==0) */

#include <stdio.h>


void main()
{
	int dias=0,mes,anyo;

   printf("\n Introducir Fecha (mm/aaaa):  ");
   scanf("%d/%d",&mes,&anyo);

   switch(mes)
   {
   	case 1: case 3:  case 5:  case 7:  case 8:  case 10:  case 12:
      dias=31;
      break;

      case 4: case 6:  case 9:  case 11:
      dias=30;
      break;

      case 2:
      	if((anyo%4==0 && anyo%100!=0) || anyo%400==0)
      		dias=29;
     		else
      		dias=28;
      break;

      default:
      	printf("\n\a\a FECHA INCORRECTA");
      break;

   }// fin switch

   printf("\n\n\t Los Dias del Mes %d son: %d",mes,dias);

 fflush(stdin);
 getchar();

}// fin main