#include <iostream>
int main() {
    float salario, reajuste;
    scanf("%f", &salario);
    if (salario <= 400.00) {
        reajuste = 0.15;
    } else if (salario <= 800.00) {
        reajuste = 0.12;
    } else if (salario <= 1200.00) {
        reajuste = 0.10;
    } else if (salario <= 2000.00) {
        reajuste = 0.07;
    } else {
        reajuste = 0.04;
    }
    float novo_salario = salario + (salario * reajuste);
    float reajuste_ganho = salario * reajuste;
    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste_ganho);
    printf("Em percentual: %.0f %%\n", reajuste * 100); 
    return 0;
}
