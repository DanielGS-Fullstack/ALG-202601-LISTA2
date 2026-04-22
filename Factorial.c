#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("Fatorial = %llu\n", fatorial);

    system("pause");
    return 0;
}
