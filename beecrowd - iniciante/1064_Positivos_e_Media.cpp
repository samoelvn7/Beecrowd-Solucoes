#include <iostream>
int main() {
    int positivos = 0;
    double valor, soma = 0.0;
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &valor);
        if (valor > 0) {
            positivos++;
            soma += valor;
        }
    }
    printf("%d valores positivos\n", positivos);
    if (positivos > 0) {
        double media = soma / positivos;
        printf("%.1lf\n", media);
    }
    return 0;
}
