/*
 ============================================================================
 Name        : Tp1.c
 Author      : Juan Moreno
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LibreriaTP.h"

int main()
{
    char opcion;
    float n1, n2;
    float suma,resta,multiplicacion,division,raiz1,raiz2;

    // Pido los dos valores para hacer las operaciones
    GetFloat(&n1,"Ingrese el 1er operando: ","Valor incorrecto",-100,100,5);
    GetFloat(&n2,"Ingrese el 2do operando: ","Valor incorrecto",-100,100,5);
    do
    {
	// Creo el menu para la calculadora
        printf( "\n   >>> MENU CALCULADORA <<<");
        printf( "\n\n   1. Sumar dos numeros.");
        printf( "\n   2. Restar dos numeros.");
        printf( "\n   3. Multiplicar dos numeros.");
        printf( "\n   4. Dividir dos numeros.");
        printf( "\n   5. Calcular el factorial.");
        printf( "\n   6. Salir.\n" );

        /* Filtramos la opción elegida por el usuario */
        do
        {
	    //Verifico si el valor esta en el rango dado o si es un valor valido
            printf( "\n   Introduzca opcion (1-6): " );
            fflush( stdin );
            scanf( " %c", &opcion);

        } while ( opcion < '1' || opcion > '6' );

        switch ( opcion )
        {
            case '1':
                      suma = SumaFloat(n1,n2);
		       printf("\nEl resultado de %.2f + %.2f es: %.2f\n", n1,n2,suma);
                      break;

            case '2':
            		resta = RestaFloat(n1,n2);
            		printf("\nEl resultado de %.2f - %.2f es: %.2f\n", n1,n2,resta);
                      break;

            case '3':
            		multiplicacion = MultiplicacionFloat(n1,n2);
            		printf("\nEl resultado de %.2f * %.2f es: %.2f\n", n1,n2,multiplicacion);
                      break;

            case '4':
                      if (DivisionFloat(n1,n2,&division) == 0 )
                    	  printf("\nEl resultado de %.2f / %.2f es: %.2f\n", n1,n2,division);
                      else
                          printf( "\n   ERROR: No se puede dividir entre cero.\n" );
                      break;
                      
            case '5':
                     if (FactorialFloat(n1, &raiz1) == 0 && FactorialFloat(n2, &raiz2) == 0)
                    	 printf("\nEl factorial de %.2f es: %.2f  El factorial de %.2f es: %.2f\n", n1,raiz1,n2,raiz2);
                      else
                         printf( "\n   ERROR: No se puede calcular factorial negativo\n" );
                      break;
        }

    } while ( opcion != '6' );

    return 0;
}
