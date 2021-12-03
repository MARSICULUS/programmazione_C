#include <stdio.h>


//funzione per trovare un indice (super efficiente)
int cantor(int arr[], int f, int i, int l)
{
    int m = (l + i)/2;

    if(i > l)
        return -1;
    if(f == arr[m])
        return m;
    if(f > arr[m])
        return cantor(arr, f, m + 1, l);
    if(f < arr[m])
        return cantor(arr, f, i, m - 1);
}


//si può fare iterativa
int main()
{
    int arrayi[7] = {3, 4, 6, 8, 21, 33, 55};
    int x = 8;

    printf("trovato nell'indice: %d\n", cantor(arrayi, x, 0, 9));


    return 0;
}