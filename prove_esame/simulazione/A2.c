#include <stdio.h>

int sn(int a[], int dim)
{
    int somma = 0;

    for(int i = 0; i < dim - 1; i++)
    {
        somma = somma + a[i] * a[i + 1];
    }

    return somma;
}

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};

    printf("%d\n", sn(a, 6));

    return 0;
}