#include <iostream>
#include <math.h>
int main(){
	double R, volume; // (raio)
	const double pi = 3.14159;
	//entrada
	scanf ("%lf", &R);
	//processamento
	volume = (4.0/3)*pi*pow(R,3);
	//saida
	printf("VOLUME = %.3lf\n", volume);
}
