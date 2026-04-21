#include <stdio.h>

int main() {
    int i, valor, maior, posicao;

    scanf("%d", &valor);
    maior = valor;
    posicao = 1;

    for (i = 2; i <= 100; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
