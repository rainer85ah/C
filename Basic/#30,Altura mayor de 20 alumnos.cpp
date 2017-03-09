
// Introducir la altura de los 20 alunos de un clase y visualizar la altura mayor


#include <stdio.h>


void main()
{
	int alt,altMax=1,contAlum;

   for(contAlum=1;contAlum<=3;contAlum++)
   {
      printf("\n Introducir Altura del Alumno(cm):  ");
      scanf("%d",&alt);

      if(alt>altMax)
      {
      	altMax=alt;
      }
   }//fin for

   	printf("\n La altura Mayor de la Clase es: %.d cm",altMax);

      printf("\n\n\t\t Presione ENTER Para Salir");

fflush(stdin);
getchar();                            
}// fin main