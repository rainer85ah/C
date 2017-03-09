
/*  crear base de datos, añadir y visualizar   */


//*****************************libreria****************

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <limits.h>
                                                 

//*******************************estructura****************


typedef struct
{
	char nombre[30];
    char apellido[30];
    int movil;

}TAmigos;

//*******************************prototipos****************

int menu();
void crearAñadir();
void visualizar(char *);

//************************main*****************************

void main()
{
   int opc;

   do
   {
      clrscr();
   	  opc=menu();

      switch(opc)
      {
      	case 1:
         	clrscr();
         	cargar();      //*****************llamada********
         break;

         case 2:
         	clrscr();
            visualizar("Fichero");    //*****************llamada********
         break;

         case 3:
         	clrscr();
            gotoxy(25,6);
            printf("Presione 2 Veces ENTER para Salir!!");
         break;

         default:
         	clrscr();
            gotoxy(25,6);
            printf("Opcion No Disponible");
            gotoxy(25,7);
            printf("Por favor Intentar de Nuevo entre(1-6)");
         break;

      }//end switch

      fflush(stdin);
      getchar();

   }while(opc!=3);

	fflush(stdin);
    getchar();

}//end main



//*************************definiciones******************
                                

int menu()
{
	int opc;

   clrscr();
   gotoxy(30,3);
   printf("Menu de Opciones");
   gotoxy(25,6);
   printf("1.-Cargar Datos De Los Alumnos");
   gotoxy(25,8);
   printf("2.-Visualizar Datos De Los Alumnos");
   gotoxy(25,10);
   printf("3.-Clasificar Alumnos por la Nota Media");
   gotoxy(25,12);
   printf("4.-Visualizar Los Aprovados");
   gotoxy(25,14);
   printf("5.-Visualizar Los Suspensos");
   gotoxy(25,16);
   printf("6.-Salir");

   gotoxy(30,18);
   printf("Introducir Opcion: ");
   scanf("%d",&opc);
   return(opc);

}//end menu



void cargar()
{
	FILE *pf;
   Alumnos registro;
   char correcto,corr,seguir;

   pf=fopen("Fichero","wb");

   if(pf)
  {
    do
    {
      clrscr();
   	gotoxy(30,3);
   	printf("Introducir Datos del Alumno: ");

   	gotoxy(25,9);
   	printf("Nombre del Alumno: ");
      gotoxy(43,9);
      clreol();
      fflush(stdin);
      gets(registro.nombre);

   	gotoxy(25,12);
   	printf("Curso: ");
   	gotoxy(31,12);
      clreol();
      fflush(stdin);
      gets(registro.curso);

   	gotoxy(25,15);
   	printf("Nota Media del Alumno: ");
   	gotoxy(47,15);
      clreol();
      scanf("%f",&registro.notaMed);

      gotoxy(25,17);
   	printf("Informacion Correcta?(s/n): ");
      gotoxy(53,17);
      clreol();
      fflush(stdin);
   	scanf("%c",&correcto);

        while(correcto=='n')
        {
            gotoxy(25,19);
            clreol();
            printf ("Nombre Correcto?(s/n):  ");
            fflush(stdin);
   			scanf("%c",&corr);

            if(corr=='n')
            {
            	gotoxy(43,9);
         		clreol();
      			fflush(stdin);
   				gets(registro.nombre);
             }//end if

   			gotoxy(25,19);
            clreol();
            printf ("Curso Correcto?(s/n):  ");
            fflush(stdin);
   			scanf("%c",&corr);

            if(corr=='n')
            {
            	gotoxy(31,12);
         		clreol();
      			fflush(stdin);
   				gets(registro.curso);
             }//end if

        		gotoxy(25,19);
            clreol();
            printf ("Nota Media Correcta?(s/n):  ");
            fflush(stdin);
   			scanf("%c",&corr);

            if(corr=='n')
            {
   				gotoxy(47,15);
            	clreol();
   				scanf("%f",&registro.notaMed);
             }//end if

            gotoxy(25,19);
            clreol();
            printf ("Todo Correcto?(s/n):  ");
            fflush(stdin);
   			scanf("%c",&correcto);

      }//end while

      fwrite(&registro,sizeof(registro),1,pf);

      gotoxy(25,21);
      clreol();
      printf("Mas Alumnos?(s/n): ");
      fflush(stdin);
      scanf("%c",&seguir);

   }while(seguir=='s');

   fclose(pf);

  }// end if fopen
  else
  		printf("\n ERROR AL ABRIR!!!");

}//end cargar




void visualizar(char nomF[])
{
	FILE *pf;
   int cont=0;
   Alumnos registro;

   pf=fopen(nomF,"rb");

   if(pf)
   {
      clrscr();
   	fread(&registro,sizeof(registro),1,pf);

      while(!feof(pf))
      {
        	cont++;
         clrscr();
			gotoxy(30,3);
   		printf("Datos del Alumno: %d",cont);

         gotoxy(25,9);
   		printf("Nombre del Alumno: %s",registro.nombre);

         gotoxy(25,12);
   		printf("Curso: %s",registro.curso);

         gotoxy(25,15);
   		printf("Nota Media del Alumno: %.2f",registro.notaMed);

      	fread(&registro,sizeof(registro),1,pf);

         fflush(stdin);
         getchar();

      }//end while

      fclose(pf);

   }//end if
   else
   {
   	clrscr();
      gotoxy(25,6);
   	printf("Error al Abrir el Fichero");
    }

}//end visualizar


void notas()
{
   Alumnos registro;
   FILE *pf,*pfa,*pfs;

   pf=fopen("Fichero","rb");
	pfa=fopen("FApro","wb");
   pfs=fopen("FSusp","wb");

   if(pf && pfa && pfs)
   {
   	fread(&registro,sizeof(registro),1,pf);

   	while(!feof(pf))
   	{
   		if(registro.notaMed >= 5)
         	fwrite(&registro,sizeof(registro),1,pfa);
         else
         	fwrite(&registro,sizeof(registro),1,pfs);

      	fread(&registro,sizeof(registro),1,pf);

   	}//end while

      fcloseall();
      
      gotoxy(25,6);
   	printf("Ya Estan Clasificados Por Notas!!");

    }//end if pf,pfa,pfs
    else
    {
      clrscr();
    	gotoxy(25,6);
      printf("Error Al Abrir los Ficheros!!");
     }   
}//end funcion notas
