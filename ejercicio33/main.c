#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    double A = 0;
    double B = 0;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (%.2lf)\n", A);
        printf("2- Ingresar 2do operando (%.2lf)\n", B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                A =ingresarNumero();
                break;

            case 2:
                B =ingresarNumero();
                break;

            case 3:
                system("cls");
                printf("\n--------El resultado de la suma es %.2lf---------\n\n",sum(A,B));
                system("pause");
                break;

            case 4:
                system("cls");
                printf("\n--------El resultado de la resta es %.2lf---------\n\n",subtract(A,B));
                system("pause");
                break;

            case 5:
                system("cls");
                if(B != 0)
                {
                    printf("\n--------El resultado de la division es %.2lf---------\n\n",divide(A,B));
                }
                else
                {
                    printf("ERROR: no se puede dividir por 0");
                }
                system("pause");
                break;

            case 6:
                system("cls");
                printf("\n--------El resultado de la multiplicacion es %.2lf---------\n\n",multiply(A,B));
                system("pause");
                break;

            case 7:
                system("cls");
                if(isFloat(A))
                {
                    printf("\n--------ERROR: no se puede sacar el factorial de un decimal---------\n\n");
                }
                else if (A< 0)
                {
                    printf("\n--------ERROR: no se puede sacar el factorial de un numero negativo---------\n\n");

                }
                else
                {
                    printf("\n--------El factorial de %f es %d---------\n\n", A, factorial(A));
                }
                system("pause");
                break;

            case 8:
                system("cls");
                printf("\n--------El resultado de la suma es %.2lf---------\n\n",sum(A,B));


                printf("\n--------El resultado de la resta es %.2lf---------\n\n",subtract(A,B));



                if(B != 0)
                {
                    printf("\n--------El resultado de la division es %.2lf---------\n\n",divide(A,B));
                }
                else
                {
                    printf("\n--------ERROR: no se puede dividir por 0---------\n\n");
                }


                printf("\n--------El resultado de la multiplicacion es %.2lf---------\n\n",multiply(A,B));


                if(isFloat(A))
                {
                    printf("\n--------ERROR: no se puede sacar el factorial de un decimal---------\n\n");
                }
                else if (A< 0)
                {
                    printf("\n--------ERROR: no se puede sacar el factorial de un numero negativo---------\n\n");

                }
                else
                {
                    printf("\n--------El factorial de %f es %d---------\n\n", A, factorial(A));
                }


                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }


    return 0;
}
