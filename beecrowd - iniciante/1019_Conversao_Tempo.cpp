#include <iostream>
int main(){
	int N, horas, minutos, segundos;
	//entrada
	scanf("%d", &N);
	//processamento
	horas = N/3600;
	minutos = (N%3600)/60;
	segundos =N%60;
	//saida
	printf("%d:%d:%d", horas, minutos, segundos);
}
