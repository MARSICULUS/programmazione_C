#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    //variabile contenente un valore
    int info;

    //puntatore al prossimo elemento della lista
    struct elemento* next;
};

//type definition
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

//creare una lista
void addT(ListaDiElementi l; int x)
{
    ListaDiElementi nuovo;
    nuovo->info = x;
    nuovo->next = l;
    l = nuovo;
}

int main()
{
    //dichiarazione variabile
    ListaDiElementi lista;

    //alloco memoria nello heap
    lista = malloc(sizeof(ListaDiElementi));

    lista->info = 10;
    printf("%d\n", (*lista).info);
    (*lista).next = NULL;
    (*lista).info = 4;
    printf("%d\n", (*lista).info);



    return 0;
}