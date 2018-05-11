#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "utn.h"

#define CANTIDAD 20
#define ESPACIOLIBRE 1
#define ESPACIOOCUPADO -1

/**
 * Obtiene el primer indice libre del array.
 * @param listaPersonas el array se pasa como parametro.
 * @return el primer indice disponible o sino retorna ESPACIOOCUPADO si no hay espacio.
 */
int obtenerEspacioLibre(EPersona listaPersonas[],int tamanioLista)
{
    int x;
    for(x=0;x<tamanioLista;x++)
    {
        if(listaPersonas[x].estado==ESPACIOLIBRE)

        return x;
    }

         return ESPACIOOCUPADO;
}

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @param leng es el tamaño del array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[],int leng, long int dni)
{
    int i;
    for(i=0;i<leng;i++)
    {
        if(lista[i].dni==dni)
            return i;
    }

    return -1;


}


/** \brief inicializa un array de personas en ESPACIOLIBRE(#DEFINE).
 * \param LISTA es el array de personas que le pasamos a la funcion.
 * \param leng tamaño del array.
 * \return nada.
 *
 */

void inicializarPersona(EPersona lista[],int leng)
{
    int i;
    for(i=0;i<leng;i++)
    {
        lista[i].estado=ESPACIOLIBRE;
    }
}



/** \brief da de alta a una persona.
 *
 * \param pers es el array que le pasamos a la funcion.
 * \param tamanio es el tamaño del array.
 * \return nada.
 *
 */
void altaPersona(EPersona pers[],int tamanio)
{
    int espacioLibre;
    char auxiliarNombreSTR[50];
    char auxiliarDniSTR[9];
    long int auxiliarDni;

    char auxEdadSTR[3];
    int auxEdad;
    char seguir='s';

system("cls");

 espacioLibre=obtenerEspacioLibre(pers,tamanio);
                if(espacioLibre==ESPACIOOCUPADO)
                {
                   printf("No hay lugares libres");

                }

                 printf("\tAGREGAR UNA PERSONA\n");
                 fflush(stdin);

                while(getStringLetras("ingrese el nombre\n",auxiliarNombreSTR)==0)

                 {
                     printf("el nombre debe estar compuesto solo por letras\n");

                 }



                 while(getStringNumeros("ingrese el DNI\n",auxiliarDniSTR)==0)
                 {
                     printf("el DNI debe estar compuesto solo por numeros\n");

                 }

                 auxiliarDni=atol(auxiliarDniSTR);




                 fflush(stdin);

                 while(getStringNumeros("ingrese la edad\n",auxEdadSTR)==0)
                 {
                     printf("la edad debe contener solo numeros\n");

                 }

                 auxEdad=atoi(auxEdadSTR);

                 strcpy(pers[espacioLibre].nombre,auxiliarNombreSTR);
                 pers[espacioLibre].edad=auxEdad;
                 pers[espacioLibre].dni=auxiliarDni;
                 pers[espacioLibre].estado=ESPACIOOCUPADO;








                  }


//////////////////////////////////////////////

/** \brief muestra una persona con sus respectivos datos.
 *
 * \param per es el array de personas.
 * \return nada.
 *
 */

void mostrarPersona(EPersona per)
{
    printf("  %s     %d     %li \n",per.nombre, per.edad, per.dni);
}


//////////////////////////////////////////////

/** \brief da de baja a una persona que esta dentro del array.
 *
 * \param vec es el array de personas.
 * \param tam es el tamaño del array.
 * \return nada.
 *
 */

void bajaPersona(EPersona vec[], int tam){
long int dni;
int esta;
char confirma;

system("cls");
printf("---Baja persona---\n\n");

   printf("Ingrese dni: ");
        scanf("%li",&dni);

        esta = buscarPorDni(vec,tam,dni);

        if(esta == -1)
        {
            printf("\nEl dni %li no se encuentra en el sistema\n\n",dni);

        }
        else{

                mostrarPersona(vec[esta]);

        do{
            printf("\nConfirma baja? [s|n]: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
        }while(confirma != 's' && confirma != 'n');

        if(confirma == 's'){
            vec[esta].estado = 1;
            printf("\nSe ha realizado la baja\n\n");
        }
        else{
            printf("\nSe ha cancelado la baja\n\n");
        }

        }
}




/** \brief imprime la lista de nombres que estan activos en el array de forma ordenada.
 *
 * \param lista es el array de personas.
 * \param tamanio es la dimension del arrays.
 * \return nada solo imprime la lista.
 *
 */

void imprimirListaOrdenada(EPersona lista[],int tamanio)
{
printf("\nORDENADO\n");
printf("NOMBRE              /EDAD  /DNI\n");
int i,j,x;
EPersona auxiliarPersona;

                for(i=0; i < tamanio - 1; i++)
                {
                    if(lista[i].estado == ESPACIOLIBRE)
                    {
                        continue;
                    }
                    for(j=i+1; j < tamanio; j++)
                    {
                        if(lista[j].estado == ESPACIOLIBRE)
                        {
                            continue;
                        }
                        if(strcmp(lista[i].nombre,lista[j].nombre) > 0)
                        {
                            auxiliarPersona = lista[j];
                            lista[j] = lista[i];
                            lista[i] = auxiliarPersona;
                        }
                    }
                }
                for(x=0;x<tamanio;x++)
                {
                    if(lista[x].estado==ESPACIOOCUPADO)
                    {

                        printf("%-20s/  %d  / %li  \n",lista[x].nombre,lista[x].edad,lista[x].dni);
                    }
                }

}


/////////////////////////////////////////


/** \brief carga una persona dentro del array
 *
 * \param lista es el array donde se va a cargar.
 * \param posicion es la posicion del array donde vamos a cargar los datos.
 * \param nombre es el nombre de la persona a cargar
 * \param edad de la persona que vamos a cargar.
 * \param dni es el dni de la persona que vamos a cargar.
 * \param estado que estado le vamos a poner al flag de estado para saber que ya esta ocupado.

 * \return
 *
 */

void cargaPersona(EPersona lista[],int posicion,char nombre[],int edad,long int dni,int estado)
{

 strcpy(lista[posicion].nombre,nombre);
 lista[posicion].edad=edad;
 lista[posicion].dni=dni;

}


/** \brief imprime barras basandose en las edades de las personas dentro del array
 *hasta 18 años-de19a35 o mayores de 35 años.
 * \param lista es el array de personas donde buscar.
 * \param tamanio es la longitud del array.
 * \return muestra un grafico.
 *
 */

void impriBarras(EPersona lista[],int tamanio)
{
    int i,j, hasta18=0, de19a35=0, mayorDe35=0, flag=0, mayor;
    for(j=0;j<tamanio;j++)
     {

         if(lista[j].estado==ESPACIOOCUPADO)
         {
             if(lista[j].edad<19)
             {
                 hasta18++;
             }
             else if(lista[j].edad>18&&lista[j].edad<36)
             {
                 de19a35++;
             }

             else{ mayorDe35++;}

         }

     }

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
        mayor = hasta18;
    }else{
        if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
        {
            mayor = de19a35;
        }
        else{
        mayor = mayorDe35;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= hasta18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorDe35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo
        printf("\n");
    }
    printf("__+_________________");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

    return 0;

}

