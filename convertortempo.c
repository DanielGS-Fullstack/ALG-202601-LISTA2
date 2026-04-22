#include <stdio.h>
#include <stdlib.h>

int main() {
    int total, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%d h, %d min, %d s\n", horas, minutos, segundos);

    system("pause");

    return 0;
}
