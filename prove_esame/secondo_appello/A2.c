#include <stdio.h>

int somma_cifre(int n)
{
    if(n / 10 < 1)
        return n % 10;
    return n % 10 + somma_cifre(n / 10);
}

int main()
{
    int n= 2435;
    printf("%d", somma_cifre(n));
    return 0;
}