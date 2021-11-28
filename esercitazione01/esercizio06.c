#include <stdio.h>

int minimo(int a[], int b[], int i, int j, int dim)
{
    //1 prendere a
    if(i > dim)
        return 0;
    if(j > dim)
        return 1;
    if(a[i] < b[j])
        return 1;
    else
        return 0;
}

void merge(int a[], int b[], int c[], int dim)
{
    int i, j = 0;

    for(int x = 0; x < 2 * dim; x++)
    {
        if(minimo(a, b, i, j, dim))
        {
            c[x] = b[j];
            j++;
        }
        else
        {
            c[x] = a[i];
            i++;
        }
    }
}

void print_array(int arr[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
        printf("%d: %d\n", i, arr[i]);
    }
}

int main()
{
    int a[] = {2,4,26,75,88};
    int b[] = {3,4,23,54,77};
    int c[10];

    merge(a, b, c, 5);
    print_array(c, 10);

    return 0;
}