
//***Introducir 2 numeros enteros y visualizar la tabla de multiplicar del mayor;

#include <stdio.h>

int Mayor(int,int);
void TablaMultiplicar(int);

void main()
{
	int num1,num2,mayor;        

   printf("\n Introducir Numero 1: ");
   scanf("%d",num1);

   printf("\n Introducir Numero 2: ");
   scanf("%d",num2);

   Mayor(num1,num2);
   TablaMultiplicar(mayor)

fflsuh();
getchar();
}// fin main

int Mayor(int num1,int num2)
{
	int mayor;

   if(num1!=num2)
   	if(num1>num2)
         return(mayor);
      else
         return(mayor);

}// fin mayor

void TablaMultiplicar(int mayor)
{
	int cont;

   printf("\n\a La Tabla de Multiplicar es: ");
   
   for(cont=1;cont<=10;con++)
   	printf("\n %d%*d=%d", mayor,cont,mayor*cont);

}//fin Tabla de Multiplicar
