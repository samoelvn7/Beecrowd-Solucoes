#include <iostream>
#include <math.h>
int main(){
	int a, b, c, maiorab, maiorfinal;
	//entrada
	scanf("%d %d %d", &a, &b, &c);
	//processamento
	maiorab = (a+b+abs(a-b)) /2;
	maiorfinal = (maiorab+c+abs(maiorab-c)) /2;
	//saida
	printf ("%d eh o maior\n", maiorfinal);
}
