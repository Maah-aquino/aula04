// pilha.c

#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

struct Pilha {
    int* elementos;
    int topo;
    int capacidade;
};

Pilha* pilha_cria(int capacidade) {
    Pilha* p = (Pilha*)malloc(sizeof(Pilha));
    if (p) {
        p->elementos = (int*)malloc(capacidade * sizeof(int));
        if (!p->elementos) {
            free(p);
            return NULL;
        }
        p->topo = -1;
        p->capacidade = capacidade;
    }
    return p;
}

void pilha_libera(Pilha* p) {
    if (p) {
        free(p->elementos);
        free(p);
    }
}

int pilha_push(Pilha* p, int elemento) {
    if (!p || p->topo == p->capacidade - 1) {
        return 0;
    }
    p->elementos[++p->topo] = elemento;
    return 1;
}

int pilha_pop(Pilha* p) {
    if (!p || p->topo == -1) {
        return 0;
    }
    return p->elementos[p->topo--];
}

int pilha_vazia(Pilha* p) {
    return p ? (p->topo == -1) : 1;
}

//int pilha_vazia(Pilha* p) {
 //   return p ? (p->topo != -1 ? p->elementos[p->topo] : 0) : 0;
//}
