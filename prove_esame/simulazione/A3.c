#include <stdio.h>
#include <stdlib.h>

void scambio(int a[], int p, int b)
{
    int l = a[p];
    a[p] = a[b];
    a[b] = l;
}

int i_minore(int a[], int start, int dim)
{
    int min = a[start];
    int i_min = start;

    for(int i = start + 1; i < dim; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            i_min = i;    
        }
    }

    return i_min;
}

void ordinato(int a[], int dim)
{
    for(int i = 0; i < dim; i++)
        scambio(a, i, i_minore(a, i, dim));
}

int main()
{
    int a [7] = {3, 2, 1, 0, 4, 1, 6};

    ordinato(a, 7);

    for(int i  = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}