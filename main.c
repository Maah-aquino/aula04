#include <stdio.h>
#include "circulo.h"
#include "pilha.h"

int main() {
    // Teste do TAD Circulo
    Circulo* c1 = circ_cria(0, 0, 5);
    Circulo* c2 = circ_cria(2, 2, 3);

    printf("Área de c1: %.2f\n", circ_area(c1));
    printf("c1 e c2 são concêntricos? %s\n", circ_concentricos(c1, c2) ? "Sim" : "Não");

    circ_libera(c1);
    circ_libera(c2);

    // Teste do TAD Pilha
    Pilha* p = pilha_cria(5);
    pilha_push(p, 10);
    pilha_push(p, 20);
    pilha_push(p, 30);

    printf("Elemento do topo da pilha: %d\n", pilha_topo(p));

    pilha_pop(p);
    printf("Elemento do topo após desempilhar: %d\n", pilha_topo(p));

    pilha_libera(p);

    return 0;
}
