/* Ejercicio 1: Escribir un programa en C que pida por teclado n números enteros, cada uno de ellos debe
ser introducido. Calcular: 1) Cuántos son pares e impares, 2) Cuántos ceros se han introducido por teclado,
3) Cuántos son primos */

// Código hecho por Andrés Gubaira (31.006.669) y Gustavo Rivas (30.988.485)

#include <stdio.h>
#include <conio.h>

int primo(int numero)
{
    int bandera = 0, i = 2;
    if(numero > 3)
    {
        do
        {
            bandera = (numero % i) == 0;
            i++;
        } while ((i < numero)&&(bandera == 0));
        if(bandera == 0)
        {
            return(1);
        }
        else
        {
            return(0);
        }
    }
    else
    {
        if(numero == 1)
        {
            return(0);
        }
        else
        {
            return(1);
        }
    }
}
void main()
{
    int n, i, aux, division, resto;
    int contceros = 0, contpares = 0, contimpares = 0, contprimos = 0;
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Iteracion %d, ingrese un numero\n", i+1);
        scanf("%d", &aux);
        division = aux;
        do  //Verificación de ceros
        {
            resto = division % 10;
            division = division / 10;
            if(resto == 0)
            {
                contceros++;
            }
        } while (division != 0);

        if(aux % 2 == 0) //Verificación si es par o impar
        {
            contpares++;
        }
        else
        {
            contimpares++;
        }

        if((primo(aux)) == 1) //Verificación si es primo
        {
            contprimos++;
        }
    }
    printf("Cantidad de ceros: %d. Cantidad de pares: %d. Cantidad de impares: %d. Cantidad de primos: %d\n", contceros, contpares, contimpares, contprimos);
    getch();
}