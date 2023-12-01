#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<ctype.h>

// area do Retangulo = base(b) x altura(h)
// area do quadrado = lado(l) x lado(l)
// area do triangulo = (base(b) x altura(h))/2
// area do circulo = PI x Raio(r)^2
// area do piramide = (areaBase(aB) x altura(h))/3

typedef struct {
        int etiqueta;
        union {
            char F[5][10];
        }selec;
}FORMA;

void classify (FORMA *etq);

void printSelecao (FORMA etq2);
