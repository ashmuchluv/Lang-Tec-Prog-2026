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

// 3 - 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

 int n, resto;

    printf("Digite um numero entre 1 e 64: ");
    scanf("%d", &n);

    printf("Binario: ");

    while(n > 0) {
        resto = n % 2;
        n = n / 2;

        printf("%d", resto);
    }

    return 0;
}

// 4 - 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

   double salario, vendas, total;

    printf("Digite o salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o valor total das vendas: ");
    scanf("%lf", &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

// 5 - 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    double num1, num2, num3, num4;
    double soma, media, produto;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &num1);

    printf("Digite o segundo valor: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%lf", &num3);

    printf("Digite o quarto valor: ");
    scanf("%lf", &num4);

    soma = num1 + num2 + num3 + num4;
    media = soma / 4;
    produto = num1 * num2 * num3 * num4;

    printf("Soma = %.2lf\n", soma);
    printf("Media = %.2lf\n", media);
    printf("Produto = %.2lf\n", produto);


    return 0;
}
