#include <stdio.h>

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

int main()
{
    float x = 3.0;

    for(int i = 0; i < 10; i++)
    {
        printf("sommatoria_iterativa: %f\n", sommatoria_iterativa(x, i));
        printf("sommatoria_ricorsiva: %f\n", sommatoria_ricorsiva(x, i));
    }

    return 0;
}