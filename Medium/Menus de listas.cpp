/*
Crear menu lista,                funciones:
1.- Anyadir Lista.
	1.1- Por la Izquierda.         AIzda
   1.2- Por la Derecha.           ADcha
   1.3- En su Sitio.              Asitio
2.- Visualizar Lista.             VisuL
3.- Buscar por Nombre.            Buscar
4.- Eliminar Nodo.
	4.1- Nodo Primero.             BPrimero
   4.2- Nodo Ultimo.              BUltimo
   4.3- Cualquier Nodo.           BCualquiera
5.- Elimar Lista.                 BorrarLista
6.- Salir.     

anyadimos una opcion mas para organizar la lista, creaos una estructura con los datos solamente e intercambiamos. metodo burbuja.
*/


//**********LIBRERIAS********************


#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

                     

//**************ESTRUTURAS********************

struct  Nodo
{
	char nombre[30];
   float sueldo;
   int anyoIngreso;
   Nodo *sig;
};


struct  Datos
{
	char nombre[30];
   float sueldo;
   int anyoIngreso;
};



//**********************PROTOTIPOS****************

int menu();
int menuAnyadir();
int menuEliminar();

void AIzda();
void ADcha(Nodo **);
void ASitio(Nodo **cabecera);
Nodo * CrearNodo();

void visuLista(Nodo *);
void buscarNombre(Nodo *);

void borrarLista(Nodo **);
void borrarNodoPrimero(Nodo **);
void borrarNodoUltimo(Nodo **);
void borrarNodoCualquiera(Nodo **);

void organizarLista(Nodo *cabecera);





void main()
{
 	Nodo *cabecera=NULL;
   int opc,opc1,opc2;

   opc=opc1=opc2=0;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	clrscr();
      opc=menu();

      switch(opc)
      {
       	case 1:
         	clrscr();
            do
            {                                          
            	clrscr();
      			opc1=menuAnyadir();         //****LLAMADAS******

	           	switch(opc1)
               {
                  case 1:
                  	clrscr();
                  	AIzda();
                  break;

                  case 2:
                  	clrscr();
                  	ADcha(&cabecera);
                  break;

                  case 3:
                  	clrscr();
                  	ASitio(&cabecera);
                  break;

            		case 4:
         				clrscr();
         				gotoxy(25,6);
            			cprintf("Presione Enter Para Salir!!");
        	 		  	break;
                                                
	         		default:
   	      			clrscr();
      	   			gotoxy(25,6);
         	   		cprintf("Opcion Incorrecta, (1-4)!!");
         			break;

               }// end switch

               fflush(stdin);
               getchar();

            }while(opc1!=4);

         break;

         case 2:
         	clrscr();
            if(cabecera!=NULL)
         		visuLista(cabecera);
            else
         	{
            	gotoxy(20,5);
               cprintf("No Hay Lista");
            }
         break;

         case 3:
         	clrscr();
            buscarNombre(cabecera);
         break;


         case 4:
         	clrscr();
            do
            {
            	clrscr();
      			opc2=menuEliminar();

	           	switch(opc2)
               {
                  case 1:
                  	clrscr();
                     borrarNodoPrimero(&cabecera);
                  break;

                  case 2:
                  	clrscr();
      					borrarNodoUltimo(&cabecera);
                  break;

                  case 3:
                  	clrscr();
                     borrarNodoCualquiera(&cabecera);
                  break;

            		case 4:
         				clrscr();
         				gotoxy(25,6);
            			cprintf("Presione Enter Para Salir!!");
        	 		  	break;

	         		default:
   	      			clrscr();
      	   			gotoxy(25,6);
         	   		cprintf("Opcion Incorrecta,(1-4)!!");
         			break;

               }// end switch

               fflush(stdin);
               getchar();

            }while(opc2!=4);

         break;

         case 5:
         	clrscr();
            borrarLista(&cabecera);
         break;

         case 6:
         	clrscr();
            organizarLista(cabecera);
         break;

         case 7:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Presione Enter Para Salir!!");
         break;

         default:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Opcion Incorrecta,(1-7)!!");
         break;

      }// end switch

      fflush(stdin);
      getchar();

   }while(opc!=7);

}//end main



//*********************** FUNCIONES***************************

int menu()
{
	int opc;

   gotoxy(25,6);
   cprintf("Menu Lista: ");

   gotoxy(20,9);
   cprintf("1.- Anyadir Lista.");
   gotoxy(20,11);
   cprintf("2.- Visualizar Lista.");
   gotoxy(20,13);
   cprintf("3.- Buscar por Nombre.");
   gotoxy(20,15);
   cprintf("4.- Eliminar Nodo.");
   gotoxy(20,17);
   cprintf("5.- Eliminar Lista.");
   gotoxy(20,19);
   cprintf("6.- Organizar Lista por Nombre(burbuja).");
   gotoxy(20,21);
   cprintf("7.- Salir.");

   gotoxy(25,25);
   cprintf("Elegir Una Opcion: ");
   scanf("%d",&opc);
   return(opc);

}// fin menu



int menuAnyadir()
{
	int opc1;

   gotoxy(25,6);
   cprintf("Menu de Anyadir: ");

   gotoxy(20,9);
   cprintf("1- Por la Izquierda.");
   gotoxy(20,11);
   cprintf("2- Por la Derecha.");
   gotoxy(20,13);
   cprintf("3- En su Sitio.");
   gotoxy(20,15);
   cprintf("4- Salir.");

   gotoxy(25,18);
   cprintf("Elegir Una Opcion: ");
   scanf("%d",&opc1);
   return(opc1);

}// fin menu




int menuEliminar()
{
	int opc2;

   gotoxy(25,6);
   cprintf("Menu de Eliminar: ");

   gotoxy(20,9);
   cprintf("1- Nodo Primero.");
   gotoxy(20,11);
   cprintf("2- Nodo Ultimo.");
   gotoxy(20,13);
   cprintf("3- Cualquier Nodo.");
   gotoxy(20,15);
   cprintf("4- Salir.");

   gotoxy(25,18);
   cprintf("Elegir Una Opcion: ");
   scanf("%d",&opc2);
   return(opc2);

}// fin menu






Nodo * CrearNodo()
{
	Nodo *p;
   p=(Nodo *)malloc(sizeof(Nodo *));
   return(p);
} // end




void visuLista(Nodo *cabecera)
{

	gotoxy(25,3);
	cprintf("Datos: ");
	for( ;cabecera!=NULL;cabecera=cabecera->sig)
   {
   	gotoxy(25,5);
   	cprintf("Nombre: %s ",cabecera->nombre);
      gotoxy(25,7);
   	cprintf("Sueldo: %.2f ",cabecera->sueldo);
      gotoxy(25,9);
   	cprintf("Anyo de Ingreso: %d ",cabecera->anyoIngreso);
   }                                                     

}// END






void AIzda()
{
	Nodo *p;

   p=CrearNodo();

   if(p)
   {
   	gotoxy(25,3);
   	cprintf("Datos: ");

   	gotoxy(25,5);
   	cprintf("Nombre: ");
      fflush(stdin);
      gets(p->nombre);

      gotoxy(25,7);
   	cprintf("Sueldo: ");
      scanf("%f",&p->sueldo);

      gotoxy(25,9);
   	cprintf("Anyo de Ingreso: ");
      scanf("%d",&p->sueldo);

   } // end if
   else
   {
   	gotoxy(25,3);
      cprintf("ERROR AL CREAR ESPACIO!!");
   }

}// end







void ADcha(Nodo **cabecera)
{
	Nodo *p=NULL,*q=NULL;

   p=CrearNodo();

   if(p)
   {

   	gotoxy(25,3);
      cprintf("Datos: ");
      gotoxy(20,5);
      cprintf("Nombre: ");
      fflush(stdin);
      gets(p->nombre);
      gotoxy(20,7);
      cprintf("Sueldo: ");
      scanf("%f",&p->sueldo);
      gotoxy(20,9);
      cprintf("Anyo de Ingreso: ");
      scanf("%d",&p->anyoIngreso);

      p->sig=NULL;

      if(*cabecera==NULL)
      	*cabecera=p;
      else
      {
      	for(q=*cabecera;q->sig!=NULL;q=q->sig);
         q->sig=p;
      }
   }
   else
   {
   	gotoxy(25,3);
      cprintf("ERROR AL CREAR ESPACIO!!");
   }


}// end




void ASitio(Nodo **cabecera)
{
	Nodo *act=*cabecera, *p=NULL;
   char nombre[30];

	gotoxy(20,3);
   cprintf("Anyadir Organizadamente por Nombre: ");
	fflush(stdin);
   gets(nombre);

   act=CrearNodo();

   if(act)
   {

		if(strcmp(nombre,act->nombre)<0)
   	{

   		clrscr();
         gotoxy(25,3);
      	cprintf("Restos de Datos: ");
      	strcpy(act->nombre,nombre);
      	gotoxy(20,5);
      	cprintf("Sueldo: ");
      	scanf("%f",&act->sueldo);
      	gotoxy(20,7);
     		cprintf("Anyo de Ingreso: ");
      	scanf("%d",&act->anyoIngreso);
         p->sig=*cabecera;

   	}// fin if
      else
      {
       	for( ;strcmp(nombre,act->nombre)>0 && act->sig!=NULL ; act=act->sig);

         if(strcmp(nombre,act->nombre)<0)
   		{
          	*p=*act;
            clrscr();
         	strcpy(p->nombre,nombre);
         	gotoxy(25,3);
      		cprintf("Datos: ");
            fflush(stdin);
      		gets(act->nombre);
      		gotoxy(20,5);
      		cprintf("Sueldo: ");
      		scanf("%f",&act->sueldo);
      		gotoxy(20,7);
     			cprintf("Anyo de Ingreso: ");
            act->sig=p;
         }
         else
         {
            strcpy(p->nombre,nombre);
         	gotoxy(25,3);
      		cprintf("Datos: ");
            fflush(stdin);
      		gets(act->nombre);
      		gotoxy(20,5);
      		cprintf("Sueldo: ");
      		scanf("%f",&act->sueldo);
      		gotoxy(20,7);
     			cprintf("Anyo de Ingreso: ");

            p->sig=p;
            act->sig=p;
         }
      }

	}
   else
   {
   	gotoxy(25,3);
      cprintf("ERROR AL CREAR ESPACIO!!");
   }

}//end anyadir en su sitio







void borrarLista(Nodo **cabecera)
{

	Nodo *p=NULL;

   p=*cabecera;

	while(cabecera!=NULL)
   {
    	*cabecera=p->sig;
      free(p);

      p=*cabecera;

   }//fin while

}// END




void borrarNodoPrimero(Nodo **cabecera)
{
   Nodo *p=NULL;
   p=*cabecera;

   if(*cabecera != NULL)
   {
   	*cabecera=p->sig;
   	free(p);
      gotoxy(25,5);
      cprintf("Primer Nodo Borrado");

      getchar();
   }
   else
   {
   	gotoxy(25,5);
      cprintf("No Existe Ningun Nodo");

      getchar();
   }

}// end




void borrarNodoUltimo(Nodo **cabecera)
{
	Nodo *p=NULL;
   p=*cabecera;

   if(*cabecera != NULL)
   {
   	while(p->sig->sig!=NULL)
   		p=p->sig;
   	free(p->sig);
   	p->sig=NULL;
   	gotoxy(34,13);
   	printf("Elemento borrado");
   	fflush(stdin);
   	getchar();
   }
   else
   {
   	gotoxy(30,13);
      printf("No existe ningun nodo");
      fflush(stdin);
      getchar();
   }
}// end





void borrarNodoCualquiera(Nodo **cabecera)
{
	Nodo *p, *q;
   char nombre[30];
   char aux;

   gotoxy(25,5);
   cprintf("Nombre del Empleado ha Borrar: ");
   fflush(stdin);
   gets(nombre);

   for(p=*cabecera,q=p->sig ; q->sig!= NULL && stricmp(nombre,p->nombre)!=0 ; p=p->sig,  q=q->sig);

   if(stricmp(nombre,p->nombre)==0)
   {
      clrscr();
      gotoxy(25,3);
      printf("Datos:");
      gotoxy(25,5);
      printf("Nombre: %s",p->nombre);
      gotoxy(25,10);
      printf("Sueldo: %.2f",p->sueldo);
      gotoxy(25,12);
      printf("Anyo de Ingreso: %d",p->anyoIngreso);
      gotoxy(25,14);
      printf("Desea Borrar esta persona? (s/n)");
      scanf("%c",&aux);

      if(tolower(aux)=='s')
      {
         p->sig=q->sig;
      	free(q);
      	clrscr();
      	gotoxy(30,13);
      	printf("Elemento Borrado!!!");
      	fflush(stdin);
      	getchar();
      }
      else
      {
        	gotoxy(30,13);
      	printf("Elemento No Borrado!!!");
      }
   }
   else
   {
      clrscr();
    	gotoxy(25,5);
      printf("No encontrado");
      fflush(stdin);
      getchar();
   }



}// end borrar cualquiera







void buscarNombre(Nodo *cabecera)
{
	Nodo *p=NULL;
   char nombre[30];

	gotoxy(25,3);
	cprintf("Buscar por Nombre: ");
   fflush(stdin);
   gets(nombre);

   do
   {
   	p->sig=cabecera->sig;

      if((p->nombre==cabecera->nombre) && p->sig!=NULL)
      {
	   	gotoxy(25,3);
   		cprintf("Datos: ");
    		gotoxy(25,5);
	   	cprintf("Nombre: %s ",cabecera->nombre);
   	   gotoxy(25,7);
   		cprintf("Sueldo: %.2f ",cabecera->sueldo);
	      gotoxy(25,9);
   		cprintf("Anyo de Ingreso: %d ",cabecera->anyoIngreso);
   	}
   	else
	   {
   		gotoxy(20,3);
   		cprintf("No Existe ese Nombre en la Lista!!");
	   }

   }while(p->nombre == cabecera->nombre);


}// end buscar






void organizarLista(Nodo *cabecera)
{
	Nodo *p=cabecera, *q=cabecera;
   char cambio='s';
   Datos aux;

   while(cambio=='s')
   {
    	cambio='n';

      for(  ; q!=NULL; q=q->sig);
      {
      	if(stricmp(p->nombre,q->nombre) == 0)
         {

            strcpy(aux.nombre,p->nombre);
            aux.sueldo = p->sueldo;
            aux.anyoIngreso = p->anyoIngreso;

            strcpy(p->nombre,q->nombre);
            p->sueldo = q->sueldo;
            p->anyoIngreso = q->anyoIngreso;

            strcpy(q->nombre,aux.nombre);
            q->sueldo = aux.sueldo;
            q->anyoIngreso = aux.anyoIngreso;

            cambio='s';
            
         }// end if

      }// end for

   }// end while cambio 's'

}// end organizarLista
























