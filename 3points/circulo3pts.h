#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
		
//cria 2 pontos aleatorios no plano cartesiano
void points(int *x1, int *y1, int *x2, int *y2);

//cria um ponto aleatorio que tbm é o centro de um circulo de raio também aleatorio
void center_and_radius(int *xc, int *yc, float *r);

//calcula as distancias entre os pontos
void dist(int *xc, int *yc, int *x1, int *y1, int *x2, int *y2, float *dist1, float *dist2, float *dist3);

//identifica se os 2 pontos estão dentro, fora ou em cima do raio do circulo
void identifier(float *dist1, float *dist2, float *r, int *reta1, int *reta2);

//mostra na tela a resposta encontrada no identifier
void circle(int *reta1, int *reta2);

//informa a classificação do triangulo formado pelos 3 pontos
void triangle_classifier(float *dist1, float *dist2, float *dist3);

//informa o angulo formado entre os 2 pontos em relação ao ponto central do circulo
void angle(float *dist1, float *dist2, float *dist3);
