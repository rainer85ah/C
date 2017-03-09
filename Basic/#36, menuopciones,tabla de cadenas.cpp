/* Crea un menu de opciones para cadenas(una cadena es un arrays(tabla) de caracteres. */


#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

//*******prototipos********
int menu();
void CargarCadena(char cad[]);
void VisualizarCadena(char cad[]);
void VisualizarSinVocales(char cad[]);
void VisualizarSinConsonantes(char cad[]);
void VisualizarReves(char cad[]);
void ContarCaracteres(char cad[]);
void ContarPalabras(char cad[]);
void ContarPalabras3(char cad[]);
void ContarVocalesDistintas(char cad[]);
void SustitucionVocales(char cad[]);
void Palindroma(char cad[]);

void main()
{
	int opc;
   char cad[100], paso1='n';
   do
   {
     opc=menu();
   	switch(opc)
   	{
   	case 1:
      	clrscr();
      	CargarCadena(cad);
         clrscr();
      	paso1='s';
      break;

      case 2:
      	clrscr();
      	if (paso1=='s')
         {
      		VisualizarCadena(cad);
            clrscr();
         }
     		else
      		printf("\n Debes realizar el paso 1");
      break;

      case 3:
      	clrscr();
      	if(paso1=='s')
         {
      		VisualizarSinVocales(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      case 4:
      	clrscr();
      	if(paso1=='s')
         {
      		VisualizarSinConsonantes(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      case 5:
      	clrscr();
      	if(paso1=='s')
      	{
      		VisualizarReves(cad);
            clrscr();
         }
      	else
         	printf("\n Debes realizar el paso 1");
      break;

      case 6:
      	clrscr();
      	if(paso1=='s')
         {
				ContarCaracteres(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      case 7:
      	clrscr();
      	if(paso1=='s')
         {
      		ContarPalabras(cad);
            clrscr();
         }
      	else
         	printf("\n Debes realizar el paso 1");
      break;

      case 8:
      	clrscr();
      	if(paso1=='s')
         {
      		ContarPalabras3(cad);
            clrscr();
         }
      	else
         	printf("\n Debes realizar el paso 1");
      break;

      case 9:
      	clrscr();
      	if(paso1=='s')
         {
      		ContarVocalesDistintas(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      case 10:
      	clrscr();
      	if(paso1=='s')
         {
      		SustitucionVocales(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      case 11:
      	clrscr();
      	if(paso1=='s')
         {
      		Palindroma(cad);
            clrscr();
         }
      	else
      		printf("\n Debes realizar el paso 1");
      break;

      default:
      	clrscr();
      	printf("\n Opcion Incorrecta!!");
      break;

      }//fin-switch

    fflush(stdin);
    getchar();
   }while (opc!=12);

}// fin main


//*************DEFINICIONES***********************************************

//*************MENU*****************

int menu()
{
	int opc;

   printf("\n\t\t\a ******Menu de Opciones sobre cadenas*******");
   printf("\n\n\n\n\t 1. CargarCadena: ");
   printf("\n\t 2. Visualizar Cadena: ");
   printf("\n\t 3. VisualizarCadena Sin Vocales: ");
   printf("\n\t 4. Visualizar Cadena Sin Consonantes: ");
   printf("\n\t 5. Visualizar Cadena al Reves: ");
   printf("\n\t 6. ContarCaracteres: ");
   printf("\n\t 7. ContarPalabras: ");
	printf("\n\t 8. ContarPalabras3: ");
   printf("\n\t 9. ContarVocalesDistintas: ");
   printf("\n\t 10. SustitucionVocales: ");
   printf("\n\t 11. Palindroma: ");
   printf("\n\t 12. Salir");
   printf("\n\n\n\t Introducir un Numero entre (1-12): ");
	scanf("%d",&opc);
   return(opc);
}// FIN MENU

//*************CARGAR CADENA*****************

void CargarCadena(char cad[])
{
	printf("\n\t\t Introducir Cadena: ");
   fflush(stdin);
   gets(cad);
}// FIN CARGAR

//*************VISUALIZAR CADENA*****************

void VisualizarCadena(char cad[])
{
	printf("\n La cadena es: %s", cad);
}// FIN VISUALIZAR

//*************VisualizarSinVocales*****************
void VisualizarSinVocales(char cad[])
{
	int i;
   for(i=0;cad[i]!='\0';i++)
	  if(tolower(cad[i])!='a' && (cad[i])!='e' && (cad[i])!='i' && (cad[i])!='o'&& (cad[i])!='u')
       printf("%c",cad[i]);

}// fin sin vocales

//*************VisualizarSinConsonantes*****************
void VisualizarSinConsonantes(char cad[])
{
	int i;
   for(i=0;cad[i]!='\0';i++)
	  if(tolower(cad[i])=='a' && (cad[i])=='e' && (cad[i])=='i' && (cad[i])=='o' && (cad[i])=='u')
       printf("%c",cad[i]);

}// fin sin consonantes

//*************VisualizarReves*****************
void VisualizarReves(char cad[])
{
 	int i;
   for(i=0;cad[i]!='\0';cad[i]++);

   for(cad[i]='\0';i!=0;i--)
   	printf("%c",cad[i]);

}// fin reves

//*************ContarCaracteres*****************
void ContarCaracteres(char cad[])
{
	int i;
   for(i=0;cad[i]<='\0';i++);
   	printf("\n La cadena tiene %d caracteres. ",i);

}// fin contar char

//*************ContarPalabras*****************
void ContarPalabras(char cad[])
{
	int i,contPalabras=0;
   for(i=1;cad[i]!='\0';i++)
   {
   	if(cad[i]==' ')
      {
   		contPalabras++;
      }//fin si
   }// fin for
	printf("\n La cadena tiene %d Palabras. ",contPalabras);
}// fin contar palabras

//*************ContarPalabras3*****************
void ContarPalabras3(char cad[])
{
	int i,contPalabras3,contchar=0;
   for(i=0;cad[i]!='\0';i++)
   	for(contPalabras3=0;cad[i]!=' ' && cad[i]!='\0';contPalabras3++,i++)
      	if(contchar>=3)
         	contchar++;

   printf("\n La Cadena tiene %d palabras con mas de 3 caracteres y %d de palabras.",contchar,contPalabras3);

}// fin palabras 3

//*************ContarVocalesDistintas*****************
void ContarVocalesDistintas(char cad[])
{
	int i, contA,contE,contI,contO,contU;
   contA=contE=contI=contO=contU=0;

   for(i=0;cad[i]!='\0';i++)
   {
   	switch(tolower(cad[i]))
      {
      	case 'a':
         contA++;
         break;
         case 'e':
         contE++;
         break;
         case 'i':
         contI++;
         break;
         case 'o':
         contO++;
         break;
         case 'u':
         contU++;
         break;
         default:
         printf("\n Error!!!");
         break;
      }//switch
   }// fin for
   printf("\n Vocales: A=%d,E= %d,I= %d,O= %d,U= %d",contA,contE,contI,contO,contU);

}//fin vocales distintas

//*************SustitucionVocales*****************
void SustitucionVocales(char cad[])
{
	int i;
   char vocal;
   printf("\n Introducir vocal que quieres ver: ");
   scanf("%c",&vocal);

   for(i=0;cad[i]!='\0';i++)
   {
	  if(tolower(cad[i])=='a' && tolower(cad[i])=='e' && tolower(cad[i])=='i' && tolower(cad[i])=='o'&& tolower(cad[i])=='u')
     		cad[i]=vocal;
   }// fin for
   printf("\n La cadena es: %s ",cad[i]);

}// fin sustitucion de vocales

//*************Palindroma*****************

/* void Palindroma(char cad[])
{
	int i;

    dividr la cadena en 2 y comparar el contenido de la posicion para ver si son iguales
    por ejemplo cad[4]=cad[6]

}// fin palindroma */


