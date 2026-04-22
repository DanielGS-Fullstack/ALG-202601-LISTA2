#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("Vogal\n");
    else
        printf("Consoante\n");

    system("pause");
    return 0;
}

