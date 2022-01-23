#include <stdio.h>

int potenza(int base, int esponente)
{
    if(esponente == 0)
        return 1;
    return base * potenza(base, esponente - 1);
}

int somma(int n)
{
    if(n == 0)
        return  0;
    return n + somma(n - 1);
}

int sommatoria(int n)
{
    return potenza(2, n) * somma(n);
}

int main()
{
    printf("%d\n", sommatoria(3));
    printf("%d\n", sommatoria(6));
    return 0;
}