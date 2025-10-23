#include <iostream>
int main(){
	int pares = 0;
	double valor;
	for(int i = 0; i < 5; i++){
		scanf("%lf", &valor);
		if(valor == (int)valor && ((int)valor % 2 == 0)){
			pares++;
		}
	}
	printf("%d valores pares\n", pares);
	return 0;
}
