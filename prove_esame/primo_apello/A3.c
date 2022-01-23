#include <stdio.h>
#include <math.h>

//non si compila con gcc me deve seerci qualche problema che non so

double mi(int a[], int dim)
{
    int somma = 0;
    for(int i = 0; i < dim; i++)
    {
        somma = somma + a[i];
    }

    return somma / dim;
}

float sucessione(int a[], int dim)
{
    double lol = 0.0;
    double my = mi(a, dim);

    for(int i = 0; i < dim; i++)
    {
        lol = lol + pow(a[i] + my, 2);
    }

    return sqrt(lol / dim);
}

int main()
{
    int a[6] = {1, 2, 3, 4, 5};
    printf("%f", sucessione(a, 6));

    return 0;
}