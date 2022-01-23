#include <stdio.h>

int produttoria(int a[], int dim)
{
    int result = 1;

    for(int i = 0; i < dim - 1; i++)
        result = result * (a[i] + a[i + 1]);

    return result;
}

int prod_ric(int a[], int dim)
{
    if(dim == 1)
        return 1;
    return (a[dim - 1] + a[dim - 2]) * prod_ric(a, dim - 1);
}

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};

    printf("%d\n", produttoria(a, 6));
    printf("%d\n", prod_ric(a, 6));

    return 0;
}