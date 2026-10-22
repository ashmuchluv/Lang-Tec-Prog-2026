// 1. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numeros[100];
    int i, j, aux;

    for (i = 0; i < 100; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[i] < numeros[j]) {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }

    printf("\nNumeros do maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}

// 2. 
