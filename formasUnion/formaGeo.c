#include"formaGeo.h"

/*
    usar Union para selecionar um valor entre 0 e 4 que irá
    representar uma forma geometrica e em seguida a formula de sua area
*/

int main(void) {
        FORMA etq;
        etq.etiqueta = -1;
        printFormas();
        while (etq.etiqueta < 0 || etq.etiqueta > 4) scanf("%d", &etq.etiqueta);

        // sem ponteiro ocorre problema na memoria
        classify(&etq);

        printSelecao(etq);

    return 0;
}
