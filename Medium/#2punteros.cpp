
//Ejercicio de punteros

#include <stdio.h>

void main()
{
	int datos[8],i,*pa,*pb,aux;

   printf("\n\t ***Punteros***");
   for(i=0;i<4;i++)
   {
   	datos[i]=i+1;
      datos[8-(i+1)]=i*2;
   }// fin for

   for(i=0;i<8;i++)
     printf("\n\n\t tb[%d]: %d,  posicion: %x", i+1,datos[i],&datos[i]);
     
	pa=datos;
   pb=pa;
   *pb=111;
   pb+=7;
   *pb=111;
   pa=&datos[1];
   pb=&datos[6];

   printf("\n\n\t pa: %x, pb: %x", pa,pb);

   for(i=0;i<8;i++)
     printf("\n\n\t tb[%d]: %d,  posicion: %x", i+1,datos[i],&datos[i]);

   while(pb>pa)
   {
   	aux=*pa;
      *pa=*pb;
      *pb=aux;

      pa++;
      pb--;
   }// fin while
     printf("\n\n\t pa: %x, pb: %x", pa,pb);

     for(i=0;i<8;i++)
     printf("\n\n\t tb[%d]: %d,  posicion: %x", i+1,datos[i],&datos[i]);

fflush(stdin);
getchar();
}// fin main