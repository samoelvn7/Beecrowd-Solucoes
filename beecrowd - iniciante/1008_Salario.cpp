#include <iostream>
int main(){
	int numero, horas_trabalhadas;
	float valorphora, salario;
	// entrada de dados
	scanf ("%d %d", &numero, &horas_trabalhadas);
	scanf ("%f", &valorphora);
	// processamento de dados
	salario = horas_trabalhadas * valorphora;
	// saida de dados
	printf ("NUMBER = %d\n", numero);
	printf ("SALARY = U$ %.2f\n", salario);
}
