// Lista de exercicios 1
// 1 - 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Adicione o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Adicione o segundo numero: ");
	scanf("%d", &b);
	
	printf("Os numeros são: %d e %d\n", b, a);
	
	return 0;
}

// 2 - 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double numero;
    int expoente = 0;

    printf("Digite um valor positivo: ");
    scanf("%lf", &numero);

    while(numero >= 10) {
        numero = numero / 10;
        expoente++;
    }

    while(numero < 1) {
        numero = numero * 10;
        expoente--;
    }

    printf("%.2lf x 10^%d\n", numero, expoente);

    return 0;
}
