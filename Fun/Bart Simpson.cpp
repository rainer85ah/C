/*Simulacion de movimiento*/

#include <stdio.h>
#include <conio.h>

void main ()
{
	int col,i,fila;
   for(fila=3;fila<10;fila++)
   {
   	for(col=5;col<79;col++)
		{
         gotoxy(col+4,2);
			printf("          , ,\ ,'\,'\ ,'\ ,\ ,");
         gotoxy(col+4,3);
			printf("    ,  ;\/ \' `'     `   '  /|");
			gotoxy(col+4,4);
         printf("    |\\/                     |");
         gotoxy(col+4,5);
			printf("    :                        |");
			gotoxy(col+4,6);
			printf("    :                        |");
			gotoxy(col+4,7);
			printf("    |                        |");
			gotoxy(col+4,8);
			printf("    |                        |");
			gotoxy(col+4,9);
			printf("    :               -.     _ |");
			gotoxy(col+4,10);
			printf("    :                \\     `.");
         gotoxy(col+4,11);
			printf("    |         ________:_____\\");
         gotoxy(col+4,12);
			printf("    :       ,'o       / o    ;");
			gotoxy(col+4,13);
			printf("    :        \\       ,'-----./");
			gotoxy(col+4,14);
			printf("      \\_      `--.--'        )");
			gotoxy(col+4,15);
			printf("      ,` `.              ,---'|");
			gotoxy(col+4,16);
			printf("      : `                     |");
			gotoxy(col+4,17);
			printf("       `,-'                   |");
			gotoxy(col+4,18);
			printf("       /      ,---.          ,'");
			gotoxy(col+4,19);
			printf("    ,-'            `-,------' ");
			gotoxy(col+4,20);
			printf("   '   `.        ,--' ");
			gotoxy(col+4,21);
			printf("         `-.____/");
			gotoxy(col+4,22);
			printf("                \\");
         	if(col%2)
            {
            gotoxy(col+4,12);
            	printf("    :       ,'       o/     o;");
            }//fin if
         for(i=0;i<666666666;i++);
      	clrscr();
   	}//fin for
   }//fin for
}//fin main
