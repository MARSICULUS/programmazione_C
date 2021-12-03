#include <stdio.h>
#include <stdlib.h>

int fibonazzi(int n)
{
    int a = 1;
    int b = 1;
    int fibo;

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

int sequenza(int n)
{
    if(n ==0 || n == 1)
        return n;
    return (fibonazzi(n) + sequenza(n - 1)) / 2;
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", fibonazzi(i));
    }

    printf("--------\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", sequenza(i));
    }

    int dimensione = 10;
    int* a = malloc(sizeof(int) * dimensione);

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