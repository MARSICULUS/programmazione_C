#include <stdio.h>
#include <stdlib.h>

int trovali_tutti(int a[], int dim, int x)
{
    int n_x = 0;

    for(int i = 0; i < dim; i++)
    {
        if(a[i] == x)
            n_x++;
    }

    return n_x;
}

int* frequenze(int a[], int dim)
{
    int* f = malloc(sizeof(int) * dim);

    f[0] = trovali_tutti(a, dim, a[0]);

    for(int i = 1; i < dim; i++)
    {
        if(trovali_tutti(a, i - 1, a[i]) == 0)
            f[i] = trovali_tutti(a, dim, a[i]);
        else
            f[i] = 0;
    }

    return f;
}

int main()
{
    int a [6] = {1, 2, 1, 4, 1, 2};
    int* f = frequenze(a, 6);

    for(int i  = 0; i < 6; i++)
    {
        printf("%d ", f[i]);
    }


    return 0;
}