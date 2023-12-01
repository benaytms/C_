#include"intro.h"

void printFormas () {
        printf("0 - Retangulo \n");
        printf("1 - Quadrado \n");
        printf("2 - Triangulo \n");
        printf("3 - Circulo \n");
        printf("4 - Piramide \n");
        printf(": ");
}

void classify (FORMA *etq) {
        switch (etq->etiqueta) {
            case 0: strcpy(etq->selec.F[etq->etiqueta], "Retangulo"); break;
            case 1: strcpy(etq->selec.F[etq->etiqueta], "Quadrado"); break;
            case 2: strcpy(etq->selec.F[etq->etiqueta], "Triangulo"); break;
            case 3: strcpy(etq->selec.F[etq->etiqueta], "Circulo"); break;
            case 4: strcpy(etq->selec.F[etq->etiqueta], "Piramide"); break;
            default: printf("Algo deu errado\n"); break;
        }
}
        
void printSelecao(FORMA etq) {
        printf("Escolhido: %s\n", etq.selec.F[etq.etiqueta]);
        switch (etq.etiqueta) {
            case 0: printf("area Retangulo = base(b) x altura(h) \n"); break;
            case 1: printf("area quadrado = lado(l) x lado(l) \n"); break;
            case 2: printf("area triangulo = (base(b) x altura(h))/2 \n"); break;
            case 3: printf("area circulo = PI x Raio(r)^2"); break;
            case 4: printf("area piramide = (areaBase(aB) x altura(h))/3"); break;
            default: printf("Algo deu errado \n"); break;
        }
}