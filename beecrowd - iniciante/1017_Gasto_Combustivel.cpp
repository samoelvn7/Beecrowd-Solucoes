#include <iostream>
#include <math.h>
int main(){
	int tempo_gasto, velocidade_media;
	float distancia_percorrida, litros;
	scanf("%d %d", &tempo_gasto, &velocidade_media);
	distancia_percorrida = tempo_gasto * velocidade_media;
	litros = distancia_percorrida/12;
	printf("%.3f\n", litros);
}
