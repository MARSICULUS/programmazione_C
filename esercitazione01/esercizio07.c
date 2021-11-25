#include <stdio.h>

int somma_precedenti(int arr[], int i)
{
    int somma = 0;

    for(int j = 0; j < i; j++)
        somma = somma + arr[j];

    return somma;
}

int minore_somma(int a[], int dim)
{
    int flag = 1;
    int i = 1;

    while(i < dim && flag)
    {
        if(a[i] > somma_precedenti(a, i));
            flag = 0;
    }

    return flag;
}

/*
versione lineare (togliere il for dentro)

s = 0;
while()
{
    s += a[i - 1];
    if()
}
*/

int main()
{

    return 0;
}