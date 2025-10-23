#include <iostream>
int main(){
	double A, B, C, Media;
	const double pesoA = 2.0, pesoB = 3.0, pesoC = 5.0; 
	const double somaABC = pesoA + pesoB + pesoC;
	scanf ("%lf %lf %lf", &A, &B, &C);
	Media = (A*pesoA + B*pesoB + C*pesoC) / somaABC;
	printf ("MEDIA = %.1lf\n",Media);
	
}
