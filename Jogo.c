#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite, tentativas = 0;

    srand(time(NULL));
    numero = rand() % 101;

    do {
        printf("Digite seu palpite (0-100): ");
        scanf("%d", &palpite);

        tentativas++;

        if(palpite > numero)
            printf("Menor!\n");
        else if(palpite < numero)
            printf("Maior!\n");

    } while(palpite != numero);

    printf("Acertou em %d tentativas!\n", tentativas);

    system("pause");
    return 0;
}
