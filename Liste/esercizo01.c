#include <stdio.h>
#include <stdlib.h>

struct elemento
{
    //valore memorizzzato
    int info;
    //untatore al prossimo
    struct elemento * next;
};

//typedef definition
typedef struct elemento ElementoDiLista;
typedef ElementoDiLista* ListaDiElementi;

void addT(ListaDiElementi* testa, int x)
{
    ListaDiElementi nuovo = malloc(sizeof(struct elemento));
    
    nuovo->info = x;
    nuovo->next = *testa;

    *testa = nuovo;
}

void stampa(ListaDiElementi* lol)
{
    if((*lol)->next == NULL)
        printf("fine lista\n");
    printf("%d", (*lol)->info);
    stampa(&(*lol)->next);
}

int main()
{
    ListaDiElementi lista = NULL;
    addT(&lista, 5);

    return 0;
}