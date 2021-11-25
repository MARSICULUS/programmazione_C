#include <stdio.h>

int esponente(int a, int b)
{
    if(b == 0)
        return 1;
    return a * esponente(a, b - 1);
}

int succesione_ric(int n)
{
    if(n == 0)
        return 3;
    return 2 * succesione_ric(n - 1) + esponente(2, n);
}

int successione_ite(int n)
{
    int a_n = 3;

    for(int i = 1; i <= n; i++)
    {
        a_n = 2 * a_n + esponente(2, i); //va messo io porco dio
    }

    return a_n;
}

int successione_ite2(int n)
{
    int a_n = 3;
    int a_n1;

    for(int i = 0; i < n; i++)
    {
        if(n == 0)
            return a_n;
        else
        {
            a_n1 = 2 * a_n + esponente(2, i);
            a_n = a_n1;
        }
    }

    return a_n;
}

int succesione_alebrica(int n)
{
    return 3 * esponente(2, n) + n * esponente(2, n);
}

int main()
{
    for(int i = 0; i < 10; i++)
    {
        printf("ric: %d\n", succesione_ric(i));
        printf("alg: %d\n", succesione_alebrica(i));
        printf("ite: %d\n", successione_ite(i));
        //printf("ite2: %d\n", successione_ite2(i));
    }
    
    
    return 0;
}