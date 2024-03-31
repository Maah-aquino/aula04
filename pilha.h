#ifndef PILHA_H
#define PILHA_H

typedef struct Pilha Pilha;

Pilha* pilha_cria(int capacidade);
void pilha_libera(Pilha* p);
int pilha_push(Pilha* p, int elemento);
int pilha_pop(Pilha* p);
int pilha_vazia(Pilha* p);


#endif  // PILHA_H
