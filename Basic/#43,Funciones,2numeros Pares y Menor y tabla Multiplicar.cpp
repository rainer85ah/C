/* Introducir 2 numeros enteros y pares asegurando esto y visualizar la tabla
 de multiplicar del menor. Hay que asegurar que el 2 numero es diferente del  primero.
  Realizar funciones para introducir los numeros, averiguar el menor y la tabla de multiplicar. */


#include <stdio.h>

//*************PROTOTIPOS******************************************
void IntroducirNumerosPares();
int Menor(int,int);
void TablaMultiplicar(int);

//*************MAIN*****************************************
void main()
{
	int menor,n1,n2;

//*************LLAMADAS******************************************
   n1=IntroducirNumerosPares();
   n2=IntroducirNumerosPares();
   menor=Menor(n1,n2);
   TablaMultiplicar(menor);

fflush(stdin);
getchar();
}// fin main

//************DEFINICIONES*****************************************

void IntroducirNumerosPares(int num)
{

	do
   {
   	printf("\n Introducir Numero: ");
      scanf("%d",&num);
   }while(num && num%2!=0);
   return(num);

}// fin Cargar

int Menor(int n1,int n2)
{
	int menor;

   if(n1>n2)
   	return(n2);
   else
   	return(n1);

}// fin menor

void TablaMultiplicar(int menor)
{
	int cont;

   printf("\n La Tabla de Multipicar es: ");

   for(cont=1;cont<=10;cont++)
   	printf("\n %d*%d=%d",menor,cont,menor*cont);

}//fin multiplicacion
