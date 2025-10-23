#include <cstdio>
#include <cmath>  // Biblioteca necessária para fmod()

int main() {
    double N;
    scanf("%lf", &N);

    // Multiplica por 100 para evitar erros de precisão
    int valor = (int)round(N * 100);

    // Arrays para notas e moedas (agora em centavos)
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1}; 

    // Exibe as notas
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade_notas = valor / notas[i];  // Calcula a quantidade de notas
        printf("%d nota(s) de R$ %.2lf\n", quantidade_notas, notas[i] / 100.0);
        valor %= notas[i];  // Atualiza o restante
    }

    // Exibe as moedas
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int quantidade_moedas = valor / moedas[i];  // Calcula a quantidade de moedas
        printf("%d moeda(s) de R$ %.2lf\n", quantidade_moedas, moedas[i] / 100.0);
        valor %= moedas[i];  // Atualiza o restante
    }

    return 0;
}

