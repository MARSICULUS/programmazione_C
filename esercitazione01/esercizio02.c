#include <stdio.h>

//si può fare ricorsivo (il prof ha detto di si, ma ne dubito)


//ritorna quanti numeri sono più piccoli di arr[i]
int NValoriInferiori(int arr[], int i)
{
    int count = 0;

    for(int j = 0; j < i; j++)
    {
        if(arr[j] < arr[i])
        {
            count++;
        }                
    }

    return count;
}
//le due funzioni si possono unire in una unica con due cicli for annidati
int funzione(int arr[], int dim)
{
    int count = 0;

    for(int i = 1; i < dim; i++)
    {
        if(arr[i] == NValoriInferiori(arr, i))
            count++;
    }

    return count;
}

int main()
{
    int A[7] = {1, 2, 1, 3, 6, 4, 14};

    printf("%d\n", funzione(A, 7));

    return 0;
}