#include <iostream>
int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int dur_hora, dur_minuto;

    // Entrada das horas e minutos inicial e final
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    // Converter tudo para minutos para facilitar o cálculo
    int inicio_total = hora_inicial * 60 + minuto_inicial;
    int fim_total = hora_final * 60 + minuto_final;

    int duracao_minutos;

    if (fim_total <= inicio_total) {
        // O jogo passou da meia-noite
        duracao_minutos = (24 * 60 - inicio_total) + fim_total;
    } else {
        duracao_minutos = fim_total - inicio_total;
    }

    dur_hora = duracao_minutos / 60;
    dur_minuto = duracao_minutos % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur_hora, dur_minuto);

    return 0;
}

