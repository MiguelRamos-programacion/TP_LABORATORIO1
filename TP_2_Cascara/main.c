#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "utn.h"

#define CANTIDAD 20
#define ESPACIOLIBRE 1
#define ESPACIOOCUPADO -1

int main()
{
    char seguir='s';
    int opcion=0;

    EPersona arrayDePersonas[CANTIDAD];
    inicializarPersona(arrayDePersonas,CANTIDAD);



    while(seguir=='s')
    {
        system("cls");
        printf("\n");
        printf("\t1- AGREGAR PERSONA\n");
        printf("\t2- BORRAR PERSONA\n");
        printf("\t3- IMPRIMIR LISTA ORDENADA POR NOMBRE\n");
        printf("\t4- IMPRIMIR GRAFICO DE EDADES\n");
        printf("\t5- SALIR\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                altaPersona(arrayDePersonas,CANTIDAD);
                system("pause");
                break;
            case 2:

                bajaPersona(arrayDePersonas,CANTIDAD);
                system("pause");
                break;
            case 3:

                imprimirListaOrdenada(arrayDePersonas,CANTIDAD);
                system("pause");
                break;
            case 4:

                impriBarras(arrayDePersonas,CANTIDAD);
                system("pause");
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}




