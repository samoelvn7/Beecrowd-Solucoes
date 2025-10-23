#include <iostream>
int main(){
	char nome_vendedor[50];
	double salario_fixo, total_de_vendas, comissao, salario_final;
	//entrada
	scanf ("%s", nome_vendedor);
	scanf ("%lf %lf", &salario_fixo, &total_de_vendas);
	//processamento
	comissao = total_de_vendas * 0.15;
	salario_final = salario_fixo + comissao;
	//saida
	printf ("TOTAL = R$ %.2lf\n", salario_final);	
}
