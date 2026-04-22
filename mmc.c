#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, i, mmc;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    for(i = (a > b ? a : b); ; i++) {
        if(i % a == 0 && i % b == 0) {
            mmc = i;
            break;
        }
    }

    printf("MMC = %d\n", mmc);

    system("pause");
    return 0;
}
