#include <stdio.h>
#include <stdlib.h>

int fattoriale(int k)
{
    if(k == 0)
        return 1;
    return k * fattoriale(k - 1);
}

float potenza(float a, int b)
{
    if(b == 0)
        return 1;
    return a * potenza(a, b - 1);
}

float sommatoria_iterativa(float x, int n)
{
    float somma = 0;
    for(int i = 0; i <= n; i++)
    {
        somma = somma + ((float)potenza(x, i) / (float)fattoriale(i));
    }
    return somma;
}

float sommatoria_ricorsiva(float x, int n)
{
    if(n == 0)
        return 1.0;
    return (potenza(x, n) / (float)fattoriale(n)) + sommatoria_ricorsiva(x, n - 1);
}

float* array_somma(float x, int n)
{
    float* a = malloc(sizeof(float) * n);

    for(int i = 0; i < n; i++)
    {
        a[i] = sommatoria_iterativa(x, i);
    }

    return a;
}

int main()
{
    float x = 3.0;

    /*
    for(int i = 0; i < 10; i++)
    {
        printf("sommatoria_iterativa: %f\n", sommatoria_iterativa(x, i));
        printf("sommatoria_ricorsiva: %f\n", sommatoria_ricorsiva(x, i));
    }
    */

    float* p;
    p = array_somma(x, 10);

    printf("[");
    for(int i = 0; i < 10; i++)
        printf("%.3f ", p[i]);
    printf("]\n");
    free(p);

    return 0;
}