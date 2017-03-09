//Diferentes maneras de visualizar un caracter ascii
#include <stdio.h>
void main()
{
  char caracter1, caracter2;

  //Diferentes formas de visualizar una variable entera tipo caracter
  caracter1='a';

  printf("\n Como caracter: %c",caracter1);
  printf("\n Su valor decimal: %d",caracter1);
  printf("\n Su valor hexadecimal: %x",caracter1);
  printf("\n Su valor octal: %o",caracter1);

  //Formas de asignar una valor a una variable entera tipo caracter

  caracter2='a'; //como un caracter ascii
     printf("\n caracter2: %c",caracter2);

  caracter2=97;  //su valor decimal
     printf("\n caracter2: %c",caracter2);

  caracter2=0141; //su valor en octal (anteponiendo un 0 al valor octal)
     printf("\n caracter2: %c",caracter2);

  caracter2='\x61'; //su valor en hexadecimal
     printf("\n caracter2: %c",caracter2);

  fflush(stdin);
  getchar();
}//fin main