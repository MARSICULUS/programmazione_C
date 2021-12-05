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

//-------------------------\
//    pene                  |
//-------------------------/

//aggiungere un elemento in testa a una lista
void addT(ListaDiElementi* testa, int x)
{
    ListaDiElementi nuovo = malloc(sizeof(ElementoDiLista));
    nuovo->info = x;
    nuovo->next = *testa;
    *testa = nuovo;
}

void addC(ListaDiElementi *l, int z)
{
    ListaDiElementi nuovo = malloc(sizeof(ElementoDiLista));
    nuovo->info = z;
    nuovo->next = NULL;

    if(*l == NULL)
        *l = nuovo;
    else
    {
        //copia del puntatore
        ListaDiElementi corr = *l;
        
        //corr scorre la lista
        while(corr->next != NULL)
            corr = corr->next;

        //siamo all'ultimo elemento quindi questo punta a quello nuovo
        corr->next = nuovo;
    }
}

void add_prec_x(ListaDiElementi* l, int z, int x)
{
    ListaDiElementi nuovo = malloc(sizeof(ElementoDiLista));
    nuovo->info = z;
    
    if((*l)->info == x)//   wtf WTF why
    {
        nuovo->next = *l;
        *l = nuovo;
    }
    else
    {
        ListaDiElementi corr = malloc(sizeof(ElementoDiLista));

        while((corr->next)->info != x)
            corr = corr->next;
        
        nuovo->next = corr->next;
        corr->next = nuovo;
    }
}

void printLista(ListaDiElementi l)
{
    if(l != NULL)
    {
        printf("%d\n", l->info);
        //printf("%p\n", l->next);
        printLista(l->next);
    }
    else
        printf("NULL\n");

}

int main()
{
    //dichiarazione variabile
    ListaDiElementi lista = NULL;

    //alloco memoria nello heap
    //lista = malloc(sizeof(ListaDiElementi));


    for(int i = 0; i < 10; i++)
    {
        addC(&lista, i);
    }
    printLista(lista);

    add_prec_x(&lista, 69, 5);
    printLista(lista);


    return 0;
}