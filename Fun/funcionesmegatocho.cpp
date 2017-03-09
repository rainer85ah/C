/**********************************************************************************
Introducir tres numeros por teclado. Los tres numeros deben ser positivos y
distintos, asegurando esto, la introduccion de cada uno se realizara mediante
una función. Realizamos mediante un menu de opciones las siguientes acciones:

a.- La media de los tres numeros (recibe los 3 num y devuelve la media)
b.- Tabla de multiplicar de la media (tras asegurarse de que se ha pasado
         por la opción 1, recibe la media y visualiza la tabla de multiplicar)
c.- El numero menor (la funcion calcula el, menor de los 3 y lo devuelve)
d.- ¿El menor es primo? (recibe el valor del menor y devuelve un caracter 'n' o
        's' indicativo de si es o no primo, a la vuelta se consultara este caracter
         y se visualizara el mensaje correspondiente. Para esto hay que asegurarse
         pasar por la opcion c).
e.- Visualiza la tabla de multiplicar de los 10 primeros numeros naturales,
			y hasta que no pulse una tecla no sale otra tabla de multiplicar.
f.- Fin.
***********************************************************************************/

#include <ctype.h>
#include <stdio.h>
#include <conio.h>

// PROTOTIPOS:

float Media (int, int, int);
int Menu ();
void TablaMult (float);
int Menor (int, int, int);
char Primo (int);
int Positivo ();
void TablaMult10 (int);
void barto ();

// CUERPO DEL PROGRAMA

void main ()
{
	int n1,n2,n3,men,cont;
   float med;
   char prim, opc, pasoA, pasoC;
   n1=Positivo();
   do
      n2=Positivo();
   while(n2==n1);
   do
      n3=Positivo();
   while(n3==n1 || n3==n2);
   printf("\n He guardado los Números en las siguientes direcciones de memoria");
   printf("\n \n direccion de memoria: %X y contiene: %d",&n1, n1);
   printf("\n direccion de memoria: %X y contiene: %d",&n2, n2);
   printf("\n direccion de memoria: %X y contiene: %d",&n3, n3);
   printf("\n \n Pulsa intro para empezar.");
   fflush(stdin);
   getchar();
   do
   {
	clrscr();
   opc=Menu();
   opc=tolower(opc);
   switch (opc)
   {
   	case 'a':
      	med=Media(n1,n2,n3);
         printf("\n La media de %d,%d y %d, es: %.2f",n1,n2,n3,med);
         pasoA='s';
      break;
      case 'b':
          if(pasoA=='s')
         	TablaMult(med);
         else
         	printf("\n Para esta opcion debe realizar antes el paso 'a'");
         break;
      case 'c':
         men=Menor(n1,n2,n3);
         printf("\n El numero menor es %d", men);
         pasoC='s';
         break;
      case 'd':
      	if(pasoC=='s')
         {
         	prim=Primo(men);
            if(prim=='c')
            	barto();
            else
         		if(prim=='s')
              		printf("\n %d es un numero primo",men);
               else
             	  printf("\n %d NO es un numero primo",men);
         }
      	else
         	printf("\n Para esta opcion debe realizar antes el paso 'c'");
         break;
      case 'e':
      	for(cont=1;cont<=10;cont++)
             TablaMult10(cont);
         break;
      default:
      	if(opc!='f')
         	printf("\n Opcion erronea");
      break;
   }//fin switch
   fflush(stdin);
   getchar();
   }while(opc!='f');
}
//fin main

// DEFINIMOS FUNCIONES:

//Funcion Menu:

int Menu()
{
	int opc;
   printf("\n \t\t Menu Opciones");
   printf("\n \t\t===============");
   printf("\n \n \t a. Hallar la Media");
   printf("\n \t b. Ver la tabla de multiplicar de la Media");
   printf("\n \t c. Ver el numero menor de los 3 introducidos");
   printf("\n \t d. ¿Es el menor de los tres un numero primo?");
   printf("\n \t e. Tabla de multiplicar de los 10 primeros numeros naturales");
   printf("\n \t f. Fin del programa");
   printf("\n \n \t \t Teclee opcion: ");
   fflush(stdin);
   opc=getchar();
   return(opc);
}


// Funcion de hallar la Media:

float Media (int n1, int n2, int n3)
{
   float medi;
   medi=(n1+n2+n3)/float(3);
   return(medi);
}


// Función Tabla Multiplicar de la media

void TablaMult (float med)
{
	int cont=1;
   for(;cont<=10;cont++)
   	printf("\n %d multiplicado por %.2f = %.2f", cont, med, cont*med);
}


// Funcion Tabla de multiplicar de los 10 primeros numeros naturales

void TablaMult10 (int cont)
{
	int cont2=1;
   clrscr();
   printf("\n La tabla del %d \n", cont);
   for (;cont2<=10;cont2++)
     	printf("\n %d * %d = %d", cont, cont2, cont2*cont);
   printf("\n\n\t Pulse una tecla para continuar");
   fflush(stdin);
   getchar();
}


// Funcion el menor de los tres:

int Menor (int n1, int n2, int n3)
{
	if (n1<n2&&n1<n3)
   	return (n1);
   else
     	if (n2<n1 && n2<n3)
        	return (n2);
      else
        	return (n3);
}


// Funcion saber si es primo o no

char Primo (int men)
{
   int contNum;

   if(men==1)
   	return ('c');
   else
   {
  		for(contNum=2; men%contNum!=0 && contNum<men/2; contNum++);
  		if(men%contNum==0 && men>2)
   		return('n');
   	else
   		return('s');
   }
}


// Funcion saber si es positivo

int Positivo ()
{
	int num;
   do
   {
   printf("\n Dime un numero: ");
   scanf("%d", &num);
   }while(num<=0);
   return(num);
}

// Funcion Bart

void barto ()
{
	int col,i,fila;
   clrscr();
   	for(col=5;col<15;col++)
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
			printf("    ,-'            `-,------'       el 1 no esta en el catalogo");
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
            gotoxy(col+4,19);
            	clreol();
               printf("    ,-'            `-,------'       multiplicate por cero");
            }//fin if
         for(i=0;i<999999999;i++);
      	clrscr();
   	}//fin for
}//fin barto

