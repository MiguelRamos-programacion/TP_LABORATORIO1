

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x,y;
    float total;


    while(seguir=='s')
    {
        printf("INGRESE 1er OPERANDO:\n");

        scanf("%f",&x);
        fflush(stdin);



        printf("INGRESE 2do OPERANDO\n");

        scanf("%f",&y);
        fflush(stdin);

        printf("Que operacion desea efectuar:\n");
        printf("1- Calcular la suma (%f+%f)\n",x,y);
        printf("2- Calcular la resta (%f-%f)\n",x,y);
        printf("3- Calcular la division (%f/%f)\n",x,y);
        printf("4- Calcular la multiplicacion (%f*%f)\n",x,y);
        printf("5- Calcular el factorial de(%f)\n",x);
        printf("6- Calcular todas las operacione\n");
        printf("7- Salir\n");

        fflush(stdin);

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                total=suma(x,y);
                printf("la suma da:%f\n",total);
                break;
            case 2:

                total=resta(x,y);
                printf("la resta da:%f\n",total);
                break;
            case 3:
                if (y==0)
                    {
                        printf("error no se puede dividir por 0\n");
                        break;


                     }


                total=division(x,y);
                printf("la division da:%f\n",total);
                break;

            case 4:

                total=multiplicacion(x,y);
                printf("la multiplicacion da:%f\n",total);
                break;
            case 5:

                total=factorial(x);
                printf("el factorial da:%f\n",total);
                break;
            case 6:

                total=suma(x,y);
                printf("la suma da:%f\n",total);

                total=resta(x,y);
                printf("la resta da:%f\n",total);

                 total=division(x,y);
                printf("la division da:%f\n",total);

                total=multiplicacion(x,y);
                printf("la multiplicacion da:%f\n",total);

                 total=factorial(x);
                printf("el factorial da:%f\n",total);

                break;
            case 7:
                seguir = 'n';
                break;
        }

    }


    return 0;
}



