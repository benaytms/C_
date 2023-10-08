#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "SortAlg.c"
#include <time.h>
const double PI = 3.1415926;

//achar raiz quad de n utilizando soma de impares
/*int main(){
    int n, i, aux = 0;
    scanf("%d", &n);
    for (i=1;i<n*2;i++){
        aux += i;
        i+=1;
    }
    printf("n^2 = %d", aux);
}

//montar um "xadrez" de O's, primeiro num de colunas dps linhas
/*int main(){
    int lin, col, n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for(lin=1; lin<=m;lin++){
        printf("\n");
        for(col=1;col<=n;col++){
            printf("O");
        }
    }
}*/

//procurar a posição do valor x em um array aleatorio; se não houver não mostrara nada
/*void printVector(int *v, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", v[i]);
    printf("\n");
    return;
}
int main(){
    int n, *v, x;
    srand(time(NULL));
    scanf("%d %d", &n, &x);
    v = malloc(n * sizeof(int));
    for(int i = 0; i<n; i++){
        v[i] = rand() % 10;
    }
    printVector(v, n);
    insertionSort(v, n);
    printVector(v, n);
    printf("Index: ");
    binarySearch(v, 0, n, x);
    return 0;
}*/

//cria um circulo com centro e raio aleatorios; cria 2 pontos aleatorios
//depois diz onde os pontos estão em relação ao circulo;
//informa também algumas outras informações

/*void points(int *x1, int *y1, int *x2, int *y2){
    *x1 = rand()%50;
    *y1 = rand()%50;
    *x2 = rand()%50;
    *y2 = rand()%50;
}
void center_and_radius(int *xc, int *yc, float *r){
    *xc = rand()%50;
    *yc = rand()%50;
    *r = 1 + rand()%30;
}
void dist(int *xc, int *yc, int *x1, int *y1, int *x2, int *y2, float *dist1, float *dist2, float *dist3){
    int dx1, dx2, dy1, dy2, dx3, dy3;
    dx1 = *x1 - *xc;
    dy1 = *y1 - *yc;
    dx2 = *x2 - *xc;
    dy2 = *y2 - *yc;

    dx3 = *x1 - *x2;
    dy3 = *y1 - *y2;

    *dist1 = sqrt(pow(dx1, 2) + pow(dy1, 2));
    *dist2 = sqrt(pow(dx2, 2) + pow(dy2, 2));
    *dist3 = sqrt(pow(dx3, 2) + pow(dy3, 2));
}
void identifier(float *dist1, float *dist2, float *r, int *reta1, int *reta2){
    if (*dist1 < *r) *reta1 = 1;
    else if(*dist1 == *r) *reta1 = 2;
    else *reta1 = 3;

    if (*dist2 < *r) *reta2 = 1;
    else if(*dist2 == *r) *reta2 = 2;
    else *reta2 = 3;
}
void circle(int *reta1, int *reta2){
    switch(*reta1){
        case 1:
            printf("\nO Ponto1 esta dentro do circulo\n");
            break;
        case 2:
            printf("\nO Ponto1 esta sobre o circulo \n");
            break;
        case 3:
            printf("\nO Ponto1 esta fora do circulo \n");
            break;
        default:
            printf("\nOcorreu um erro \n");
            break;
    }
    switch(*reta2){
        case 1:
            printf("\nO Ponto2 esta dentro do circulo\n\n");
            break;
        case 2:
            printf("\nO Ponto2 esta sobre o circulo \n\n");
            break;
        case 3:
            printf("\nO Ponto2 esta fora do circulo \n\n");
            break;
        default:
            printf("\nOcorreu um erro \n");
            break;  
    }
}
void triangle_classifier(float *dist1, float *dist2, float *dist3){
    float a=*dist1, b=*dist2, c=*dist3, aux = a*b*c;
    if (*dist1 == *dist2 && *dist2 == *dist3 && aux != 0){
        printf("Equilateral\n");
    }else if(*dist1 == *dist2 || *dist1 == *dist3 || *dist2 == *dist3 && aux != 0){
        printf("Isosceles\n");
    }else if(*dist1 != *dist2 && *dist2 != *dist3 && *dist1 != *dist3 && aux != 0){
        printf("Scalene\n");
    }else{
        printf("Line");
    }
}
void angle(float *dist1, float *dist2, float *dist3){
    float y;
    float a, b, c;
    a = *dist1;
    b = *dist2;
    c = *dist3;
    y = (pow(a, 2) + pow(b, 2) - pow(c, 2))/(2*a*b);
    y = acos(y);
    y = (y*180)/PI;
    printf("Ang: %.2f degrees\n", y);
}

int main(){
    int xc, yc; //variaveis inteiras por conta do rand() que não gera pontos flutuantes
    int x1, y1, x2, y2; // mesma coisa
    float dist1, dist2, dist3, r; // pontos flutuantes devido à raiz quadrada e para obter maior precisão na distancia
    int reta1, reta2;
    srand(time(NULL));
    center_and_radius(&xc, &yc, &r);
    points(&x1, &y1, &x2, &y2);
    dist(&xc, &yc, &x1, &y1, &x2, &y2, &dist1, &dist2, &dist3);
    identifier(&dist1, &dist2, &r, &reta1, &reta2);
    
    printf("xc: %d | yc: %d \n", xc, yc);
    printf("x1: %d | y1: %d | x2: %d | y2: %d \n", x1, y1, x2, y2);
    printf("dist1: %.2f | dist2: %.2f | dist3: %.2f | R: %.2f \n", dist1, dist2, dist3, r);
    angle(&dist1, &dist2, &dist3);
    circle(&reta1, &reta2);
    //conversão para inteiros para haver mais chances de outro triangulo alem do escaleno
    dist1 = (int)dist1;
    dist2 = (int)dist2;
    dist3 = (int)dist3;
    triangle_classifier(&dist1, &dist2, &dist3);

    return 0;
}*/
