#include <iostream>
int main(){
	int distancia;
	float combustivel_gasto, consumo_medio;
	//entrada
	scanf ("%d %f", &distancia, &combustivel_gasto);
	//processamento
	consumo_medio = distancia/combustivel_gasto;
	//saida
	printf("%.3f km/l\n", consumo_medio);
}
