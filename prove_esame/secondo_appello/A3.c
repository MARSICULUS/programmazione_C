#include <stdio.h>

float media(int a[], int n)
{
    if(n == 1)
        return a[0];
    else
        return media(a, n - 1) + (a[n - 1] - media(a, n - 1)) / n;
}

int main()
{
    int a[6] = {2, 3, 5, 7, 8 };
    printf("%f\n", media(a, 5));
    return 0;
}