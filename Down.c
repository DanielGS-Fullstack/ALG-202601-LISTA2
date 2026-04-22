#include <stdio.h>
#include <stdlib.h>

int main() {
    float tamanho, velocidade, tempo;

    printf("Tamanho do arquivo (MB): ");
    scanf("%f", &tamanho);

    printf("Velocidade (Mbps): ");
    scanf("%f", &velocidade);

    tempo = (tamanho * 8) / velocidade;
    tempo = tempo / 60;

    printf("Tempo aproximado = %.2f minutos\n", tempo);

    system("pause");
    return 0;
}
