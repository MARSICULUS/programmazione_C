#include <stdio.h>

float successione(int n)
{
    if (n == 0)
        return 1;
    if(n == 1)
        return 2;
    
    float a_npp = 1;
    float a_np = 2;
    float a_n = 0;

    for(int i = 2; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            a_n = (i + 3 * (a_npp - 2)) / a_np;
            a_npp = a_np;
            a_np = a_n;
        }
        else
        {
            a_n = (i + 3 * (a_np - 2)) / a_npp;
            a_npp = a_np;
            a_np = a_n;
        }
    }
    return a_n;
}

int main()
{
    printf("%f\n", successione(4));
    return 0;
}