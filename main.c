#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_PILHA 2000000
#define TAM_MAX_DADOS 1900000000
#define TAM_MAX_HEAP 120000000

char vDados[TAM_MAX_DADOS];

int main()
{
    char vPilha[TAM_MAX_PILHA];
    char *vHeap;
    int i;

    vHeap=(char *)malloc(TAM_MAX_HEAP);
    if (vHeap==NULL) {
            printf("Estouro no heap!\n");
            exit(1);
    }

    for (i=0; i<TAM_MAX_HEAP; i++) vHeap[i]='-';
    for (i=0; i<TAM_MAX_DADOS; i++) vDados[i]='*';
    for (i=0; i<TAM_MAX_PILHA; i++) vPilha[i]='@';

    system("PAUSE");
    return 0;
}
