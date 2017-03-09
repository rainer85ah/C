 /*
// Muestra el alfa-beto desde la A hasta la Z.


#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	char var;

   textcolor(11);
   textbackground(1);
   clrscr();

   gotoxy(10,3);
   cprintf("ALFABETO ES: ");
   for(var='a';var<='z';var++)
      cprintf("%c ",toupper(var));

 fflush(stdin);
 getchar();

}// fin main

*/

// Muestra el alfa-beto desde la Z hasta la A.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	char var;

   textcolor(11);
   textbackground(1);
   clrscr();

   gotoxy(10,3);
   cprintf("ALFABETO ES: ");
   for(var='z';var>='a';var--)
      cprintf("%c ",toupper(var));

 fflush(stdin);
 getchar();

}// fin main


