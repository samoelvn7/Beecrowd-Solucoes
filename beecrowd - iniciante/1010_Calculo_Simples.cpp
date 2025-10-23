#include <iostream>
int main(){
	int codigo1, numero1, codigo2, numero2;
	float valor1, valor2, valor_total;
	//entrada
	scanf ("%d %d %f", &codigo1, &numero1, &valor1);
	scanf ("%d %d %f", &codigo2, &numero2, &valor2);
	//processamento
	valor_total = (numero1*valor1) + (numero2*valor2);
	//saida
	printf ("VALOR A PAGAR: R$ %.2f\n", valor_total);
}
