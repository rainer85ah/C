/* estructura de Menu de Arrays********************
1.- Cargar Arrays
2.- Visualizar Arrays
3.- Ordenar Arrays por DNI
4.- Buscar por DNI
5.- Mayor Sueldo
6.- Salir

De 5 empleados,  Visualizar los datos del empleado con mayor sueldo mediante funciones.
Se crea uun arrays en el main, con punteros  */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define nElem 2
#define nElem1 30


struct Fecha
{
	int dd,mm,anyo;
};
struct Empleado
{
	char nombre[30];
   char dni[10];
   float salario;
   struct Fecha fechaNac;
};

//************prototipo**************************

int menu();
void cargarArrays(struct Empleado Empleados[nElem]);
void visualizar(struct Empleado Empleados[nElem]);
void ordenarDni(struct Empleado Empleados[nElem]);
void buscarDni(struct Empleado Empleados[nElem]);
void mayorSueldo(struct Empleado Empleados[nElem]);


//************main*************************

void main()
{
   struct Empleado Empleados[nElem];
   int opc;

   do
   {
   	clrscr();
      opc=menu();

      switch(opc)
      {
      	case 1:
            clrscr();
         	cargarArrays(Empleados);
         break;

         case 2:
         	clrscr();
            visualizar(Empleados);
         break;

         case 3:
            clrscr();
         	ordenarDni(Empleados);
         break;

         case 4:
         	clrscr();
            buscarDni(Empleados);
         break;

         case 5:
         	clrscr();
            mayorSueldo(Empleados);
         break;

      }//end switch

    fflush(stdin);
    getchar();

   }while(opc!=6);

	fflush(stdin);
   getchar();

}//end main



//****************************definiciones*********************************


int menu()
{
	int opc;

   printf("\n\n\n\t\a Menu de Arrays de Estructuras: \n\n");
   printf("\n\t 1.- Cargar Arrays  ");
   printf("\n\t 2.- Visualizar Arrays");
   printf("\n\t 3.- Ordenar Arrays por DNI");
   printf("\n\t 4.- Buscar por DNI En Tabla Ordenada");
   printf("\n\t 5.- Mayor Sueldo");
   printf("\n\t 6.- Salir");

   printf("\n\n\t Introduce una Opciones(1-6): ");
   scanf("%d",&opc);
   return(opc);
          
}//end menu


void cargarArrays(struct Empleado Empleados[nElem])
{
	int i;

   for(i=0;i<nElem;i++)
   {
      clrscr();
   	printf("\n\n\t\a Introducir Datos del Empleado %d: \n",i+1);

   	printf("\n Nombre y Apellido: ");
   	fflush(stdin);
   	gets(Empleados[i].nombre);

   	printf("\n DNI: ");
      fflush(stdin);
   	gets(Empleados[i].dni);

      printf("\n Sueldo: ");
   	scanf("%f",&Empleados[i].salario);

   	printf("\n Fecha de Nacimiento(dd/mm/yyyy): ");
   	scanf("%d/%d/%d",&Empleados[i].fechaNac.dd,&Empleados[i].fechaNac.mm,&Empleados[i].fechaNac.anyo);

   }//ending for

}//end loading

void visualizar(struct Empleado Empleados[nElem])
{
	int i;
   char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

   for(i=0;i<nElem;i++)
   {
      clrscr();
   	printf("\n\n\t Datos del Empleado %d: \n",i+1);

   	printf("\n Nombre y Apellido:%s",Empleados[i].nombre);
   	printf("\n DNI:%s",Empleados[i].dni);
      printf("\n Sueldo:%.2f",Empleados[i].salario);
   	printf("\n Fecha de Nacimiento: %d/%s/%d ",Empleados[i].fechaNac.dd,Empleados[i].fechaNac.mm[mes-1],Empleados[i].fechaNac.anyo);

      fflush(stdin);
      getchar();

   }//ending for

}// end of Visualizar



void ordenarDni(struct Empleado Empleados[nElem])
{
	int i;
   struct Empleado aux;

   for(i=0;i<nElem;i++)
   {
   	if(stricmp(Empleados[i].dni,Empleados[i+1].dni)>0)
      {
        	aux=Empleados[i+1];
         Empleados[i+1]=Empleados[i];
         Empleados[i]=aux;
       }// end if

   }// end for

   printf("\n Empleados ya Ordenados por DNI, Presione Enter Para Continuar");
   
}// end ordenar




void buscarDni(struct Empleado Empleados[nElem])
{
	int i;
   char valor[10];
   char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

   printf("\n Introducir Valor a Buscar: ");
   fflush(stdin);
   gets(valor);

   for(i=0;i<nElem && stricmp(valor,Empleados[i].dni)>0;i++);

   if(i==nElem || stricmp(Empleados[i].dni,valor)>0)
   	printf("\n\t\a Numero No Encontrado, No existe \n");
   else
   {
      printf("\n\t\a Numero Encontrado, Existe \n");
      printf("\n\n\t Datos del Empleado: \n");
		printf("\n Nombre y Apellido:%s",Empleados[i].nombre);
   	printf("\n DNI:%s",Empleados[i].dni);
      printf("\n Sueldo:%.2f",Empleados[i].salario);
   	printf("\n Fecha de Nacimiento: %d/%s/%d ",Empleados[i].fechaNac.dd,Empleados[i].fechaNac.mm[mes-1],Empleados[i].fechaNac.anyo);
   }

}// end search




void mayorSueldo(struct Empleado Empleados[nElem])
{
   int i;
	float sueldoMin=0;
   char mes[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
   struct Empleado aux;

   for(i=0;i<nElem;i++)
   {
   	if(Empleados[i].salario>sueldoMin)
      	sueldoMin=Empleados[i].salario;
         aux=Empleados[i];
   }//ending for

   printf("\n\n\t Datos del Empleado Con Mayor Pagar: \n");
	printf("\n Nombre y Apellido:%s",aux.nombre);
   printf("\n DNI:%s",aux.dni);
   printf("\n Sueldo:%.2f",aux.salario);
   printf("\n Fecha de Nacimiento: %d/%s/%d ",aux.fechaNac.dd,aux.fechaNac.mm[mes-1],aux.fechaNac.anyo);

}//end mayor Sueldo



















