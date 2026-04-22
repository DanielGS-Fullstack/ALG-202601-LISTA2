#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    float media;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c) / 3.0;

    printf("Media = %.2f\n", media);

    system("pause");
    return 0;
}
