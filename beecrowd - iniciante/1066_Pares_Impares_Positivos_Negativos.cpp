#include <iostream>
int main() {
    int pares = 0;
    int impares = 0;
    int positivos = 0;
    int negativos = 0;
    double valor;
    
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &valor);

        if (valor == (int)valor) {
            int inteiro = (int)valor;
            if (inteiro % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }

        if (valor > 0) {
            positivos++;
        } else if (valor < 0) {
            negativos++;
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}
