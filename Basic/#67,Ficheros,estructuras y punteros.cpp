
/* Crear un menu de opciones funciones, una para crear fichero,add,visualizarlo,
consular,modificarlo y contar los registros que tienen, cada funcion abre y cierra el fichero.    */


              
#include <conio.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
	int codAlum;
	char nombre[30];
	char curso[5];
	float notaMed;
}Alumno;

//******************************prototipos****************************************

int menu();
void crearF(char tipo[]);
void visualizar();
void consultar();
void modificarRegistro();
void contarRegistro();


//*****************************main***************************************
void main()
{
   int opc;
	textbackground(1);
   textcolor(11);
   clrscr();

 do
 {

   clrscr();
   opc=menu();

   switch(opc)
   {
    case 1:
    	clrscr();
      crearF("wb");
    break;

    case 2:
    	clrscr();
      crearF("ab");
    break;

    case 3:
    	clrscr();
      visualizar();
    break;

    case 4:
    	clrscr();
      consultar();
    break;

    case 5:
    	clrscr();
      modificarRegistro();
    break;

    case 6:
    	clrscr();
      contarRegistro();
    break;

    case 7:
    	clrscr();
      gotoxy(30,3);
    	printf("Presione 2 veces ENTER para Salir");
    break;

    default:
    	clrscr();
    	gotoxy(30,3);
    	printf("Opcion No Disponible, Entre (1-7)");
    break;

	 }//end switch

    fflush(stdin);
    getchar();

  }while(opc!=7);

	fflush(stdin);
   getchar();

}// end main


//*****************************definicioines**************************************

int menu()
{
	int opc;

   gotoxy(30,3);
   printf(" Menu de Ficheros: ");
   gotoxy(25,5);
   printf(" 1.-Cargar Alumnos");
   gotoxy(25,7);
   printf(" 2.-Añadir Alumnos");
   gotoxy(25,9);
   printf(" 3.-Visualizar Alumnos");
   gotoxy(25,11);
   printf(" 4.-Consultar Registros");
   gotoxy(25,13);
   printf(" 5.-Modificar Registros");
   gotoxy(25,15);
   printf(" 6.-Contar Registros");
   gotoxy(25,17);
   printf(" 7.-Salir");

   gotoxy(30,20);
	printf("Opcion a Realizar: ");
   scanf("%d",&opc);
   return(opc);

}// end of menu   



void crearF(char tipo[])
{
   FILE *pf;
   Alumno registro;
   char correcto,corr;
   char seguir;

   pf=fopen("Falum",tipo);

  if(pf)
  {
    do
    {
      clrscr();
   	gotoxy(30,3);
   	printf("Introducir Datos del Alumno: ");

   	gotoxy(25,6);
   	printf("Codigo del Alumno: ");
      gotoxy(43,6);
      clreol();
      scanf("%d",&registro.codAlum);

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
            printf ("Codigo Correcto?(s/n):  ");
            gotoxy(48,19);
            clreol();
            fflush(stdin);
   			scanf("%c",&corr);

            if(corr=='n')
            {
            	gotoxy(43,6);
            	clreol();
   		   	scanf("%d",&registro.codAlum);
             }//end if


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

}// end crear fichero





void visualizar()
{
	FILE *pf;
   Alumno registro;
   int cont=0;

   pf=fopen("Falum","rb");

   clrscr();

   if(pf)
   {

   	fread(&registro,sizeof(registro),1,pf);

      while(!feof(pf))	//****************(feof(pf)==0)  *****************
      {
         cont++;
         clrscr();
			gotoxy(30,3);
   		printf("Datos del Alumno: %d",cont);

         gotoxy(25,6);
   		printf("Codigo del Alumno: %d",registro.codAlum);

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

   }//end if pf
   else
   	printf("\n Error Al Abrir!!");

}// end visualizar



void consultar()     // buscar un alumno y visualizarlo nada mas.
{
	int codigo;
   Alumno registro;
   FILE *pf;

   pf=fopen("Falum","rb");

   if(pf)
   {
   	gotoxy(25,6);
   	printf("Introducir Codigo Alumno: ");
   	scanf("%d",&codigo);

      fread(&registro,sizeof(registro),1,pf);

      while(codigo!=registro.codAlum && !feof(pf))
      	fread(&registro,sizeof(registro),1,pf);

   		if(registro.codAlum==codigo)
      	{
         	clrscr();
				gotoxy(30,3);
            clreol();
   			printf("Datos del Alumno: ");

         	gotoxy(25,6);
            clreol();
   			printf("Codigo del Alumno: %d",registro.codAlum);

         	gotoxy(25,9);
            clreol();
   			printf("Nombre del Alumno: %s",registro.nombre);

         	gotoxy(25,12);
            clreol();
   			printf("Curso: %s",registro.curso);

         	gotoxy(25,15);
            clreol();
   			printf("Nota Media del Alumno: %.2f",registro.notaMed);

      	}// end if
         else
         {
            gotoxy(25,6);
            clreol();
      		printf("El Alumno No Existe!!!");
          }

      fclose(pf);

    }//end if pf
    else
    	printf("\n Error Al Abrir!!!");

    fflush(stdin);
    getchar();

}//end consultar


void modificarRegistro()
{
	FILE *pf;
   Alumno registro;
   int codigo;
   char cambiar,continuar;

   pf=fopen("Falum","rb+");

  	if(pf)
   {
     do
     {
         clrscr();
   		gotoxy(25,6);
   		printf("Introducir Codigo Alumno: ");
   		scanf("%d",&codigo);
         
         fseek(pf,0,SEEK_SET);
      	fread(&registro,sizeof(registro),1,pf);

      	while(!feof(pf) && registro.codAlum!=codigo)
         	fread(&registro,sizeof(registro),1,pf);

       		if(registro.codAlum==codigo)
      		{
               clrscr();
         		gotoxy(30,3);
            	printf("El Alumno: %s del Curso %s",registro.nombre,registro.curso);


            	gotoxy(30,6);
               clreol();
            	printf("Desea Cambiar de Curso? (s/n): ");
               fflush(stdin);
            	scanf("%c",&cambiar);

            	if(cambiar=='s')
            	{
                  clrscr();
             		gotoxy(30,6);
            		printf("Nuevo Curso!!:  ");
                  fflush(stdin);
            		gets(registro.curso);
                  clrscr();
             	}//end if

               fseek(pf,-1,SEEK_CUR);
               fwrite(&registro,sizeof(registro),1,pf);
               
             }//end if

     		gotoxy(30,12);
         printf("Desea Continuar? (s/n):  ");
         fflush(stdin);
         scanf("%c",&continuar);

     }while(continuar=='s');

   	fclose(pf);

   }//enf if pf
   else
   	printf("\n Error Al Abrir!!!"); 

   fflush(stdin);
   getchar();

}// end modificar



void contarRegistro()
{
 	FILE *pf;
   Alumno registro;
   int size,numero;

   pf=fopen("Falum","rb");

   if(pf)
   {                     
      fseek(pf,0,SEEK_END);
      size=ftell(pf);

      numero=size/sizeof(registro);

      gotoxy (20,8);
      printf ("El Fichero Tiene %d Registros",numero);

      fclose(pf);
      
    }//end
    else
    	printf("\n Error Al Abrir!!!");

}// end contar


/*//CONTAR REGISTROS     (forma contador)
void contar (Alum reg,char tipo[])
{
   int cont=0;
   FILE *pf;
   pf=fopen("Falum",tipo);

   if(pf)
   {
      fread (&reg,sizeof(reg),1,pf);
      while (!feof(pf))
      {
         cont++;
         fread (&reg,sizeof(reg), 1, pf);
      }//fin-while
      gotoxy (20,8);
      printf ("El fichero tiene:");
      gotoxy (20,10);
      printf ("%d registros",cont);
   }//fin-if
   else
   {
   	gotoxy (30,5);
      printf ("El fichero no es correcto. ");
   }//fin-else
   fflush (stdin);
   getchar();
}//fin-contar            */















                   







