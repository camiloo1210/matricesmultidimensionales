#include <stdio.h>
#include <stdlib.h>
int main()
{
    int f, c, m;
    int **puntero = calloc(f, sizeof(int *));
    printf("Ingrese el numero de matrices\n");
    scanf("%i", &m);
    printf("Ingrese el numero de filas\n");
    scanf("%i", &f);
    printf("Ingrese el numero de columnas\n");
    scanf("%i", &c);
    for (int h = 0; h < m; h++)
    {
         printf("\n");
        for (int i = 0; i < f; i++)
        {
            puntero[i] = calloc(c, sizeof(int));
            for (int j = 0; j < c; j++)
            {
                printf("%i ", puntero[i][j]);
            }
            printf("\n");
        }
    }
}
