#include <iostream>
int main (){
	int X, ano, mes, dia; 
	scanf("%d", &X);
	
ano = X/365;
X %= 365;
mes = X/30;
X %= 30;
dia = X;

printf("%d ano(s)\n", ano);
printf("%d mes(es)\n", mes);
printf("%d dia(s)\n", dia);
}
