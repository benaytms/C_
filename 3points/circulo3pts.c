#include"circulo3pts.h"
const double PI = 3.1415926;

//cria um circulo com centro e raio aleatorios, cria 2 pontos aleatorios
//diz se os pontos estão dentro do circulo, suas distancias do centro
//informa o tipo de triangulo q os pontos formaram com o centro do circulo e fala os graus do angulo no centro

//sem struct e sem organização ;)

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
}

void points(int *x1, int *y1, int *x2, int *y2){
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
        printf("Escaleno\n");
    }else{
        printf("Linha");
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
