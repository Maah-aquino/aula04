#include <stdio.h>
#include "circulo.h"
#include "pilha.h"

int main() {
    // Teste do TAD Circulo
    //Circulo* c1 = circ_cria(0, 0, 5);
    //Circulo* c2 = circ_cria(2, 2, 3);

     float x1, y1, raio1;
    printf("Digite as coordenadas do centro do primeiro círculo (x y):");
    scanf("%f %f", &x1, &y1);
    printf("Digite o raio do primeiro círculo:");
    scanf("%f", &raio1);

    Circulo* c1 = circ_cria(x1, y1, raio1);

    float x2, y2, raio2;
    printf("Digite as coordenadas do centro do segundo círculo (x y): ");
    scanf("%f %f", &x2, &y2);
    printf("Digite o raio do segundo círculo: ");
    scanf("%f", &raio2);

    Circulo* c2 = circ_cria(x2, y2, raio2);

    // Verifica se os círculos têm o mesmo centro
    if (circ_concentricos(c1, c2)) {
        printf("Os círculos têm o mesmo centro.\n");
    } else {
        printf("Os círculos não têm o mesmo centro.\n");
    }

    // Calcula e exibe a área dos círculos
    printf("Área do primeiro círculo: %.2f\n", circ_area(c1));
    printf("Área do segundo círculo: %.2f\n", circ_area(c2));

    // Libera a memória dos círculos
    circ_libera(c1);
    circ_libera(c2);

    // Teste do TAD Pilha
   // Pilha* p = pilha_cria(5);
   // pilha_push(p, 10);
   // pilha_push(p, 20);
   // pilha_push(p, 30);



      int capacidade;
    printf("Digite a capacidade da pilha: ");
    scanf("%d", &capacidade);

    Pilha* p = pilha_cria(capacidade);
    
    for (int i = 1; i <= capacidade; i++) {
        int elemento;
        printf("Digite o elemento %d: ", i);
        scanf("%d", &elemento);
        pilha_push(p, elemento);
    }

    printf("Elementos no topo da pilha: ");
    while (!pilha_vazia(p)) {
        printf("%d ", pilha_pop(p));
        printf("\n");
    }
    

    pilha_libera(p);

    return 0;
}
