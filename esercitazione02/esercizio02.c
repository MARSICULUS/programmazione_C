#include <stdio.h>
#include <stdlib.h>

float fibonazzi(int n)
{
    float a = 1;
    float b = 1;
    float fibo;

    if(n == 0 || n == 1)
        return 1;
    for(int i = 2; i <= n; i++)
    {
        fibo = a + b;
        a = b;
        b = fibo;
    }

    return fibo;
}

float sequenza(int n)
{
    if(n ==0 || n == 1)
        return n;
    return (fibonazzi(n) + sequenza(n - 1)) / 2;
}

float sequenza_ite(int n)
{
    float n_0 = 1;

    if(n == 0 || n == 1)
        return n;
    
    for(int i = 2; i <= n; i++)
    {
        n_0 = (fibonazzi(n) + n_0) / 2;
    }
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%f\n", fibonazzi(i));
    }

    printf("--------\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d:\n", i);
        printf("   %f\n", sequenza(i));
        printf("   %f\n", sequenza_ite(i));

    }

    int dimensione = 10;
    int* a = malloc(sizeof(float) * dimensione);

    for(int i = 0; i < dimensione; i++)
    {
        a[i] = sequenza(i);
    }

    printf("--------\n");

    for(int i = 0; i < dimensione; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}