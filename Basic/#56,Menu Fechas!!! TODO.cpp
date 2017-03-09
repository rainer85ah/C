// Validar una fecha Gregoriana


#include <stdio.h>

void main()
{
	int dd=0,mm=0,aaaa=0,TablaMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   //char Correcta;

   printf("\n Introducir fecha Gregoriana(dd/mm/aaaa): ");
   scanf("%d/%d/%d",dd,mm,aaaa);

   if((aaaa%4==0 && aaaa%100!=0) || aaaa%400==0)
   {
   	TablaMes[1]=29;
      printf("\n Es Bsiesto");
   }
   else
      printf("\n NO Es Bsiesto");

   if(mm<1 || mm>12)
   {
   	//Correcta='n';
      printf("\n Fecha NO CORRECTA ");
   }
   else
   	if(dd<1 || dd>TablaMes[mm-1])
      {
   	  //	Correcta='n';
         printf("\n Fecha NO CORRECTA ");
      }
      else
      {
      	//Correctar='s';
         printf("\n Fecha CORRECTA ");
      }

 fflush(stdin);
 getchar();

}//fin main
