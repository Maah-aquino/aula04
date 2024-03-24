#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct Circulo Circulo;

Circulo* circ_cria(float x, float y, float r);
void circ_libera(Circulo* c);
float circ_area(Circulo* c);
int circ_concentricos(Circulo* c1, Circulo* c2);
float circ_raio(Circulo* c);

#endif  // CIRCULOS_H
