// primeiro slide - atividades

// 1 - Soma de Dois Números
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a;
	int b;
	int soma;
	
	a = 8;
	b = 2;
	
	soma = a + b;
	
	printf("A soma dos numeros = %d\n", soma);
	
	return 0;
}


// 2 - Calcular triangulo retângulo
#include <stdio.h>
#include <stdlib.h>

int main() {
    float base, altura, area;

    printf("Adicione o valor da base: ");
    scanf("%f", &base);

    printf("Adicione o valor da altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2.0;

    printf("A area do triangulo retangulo = %.2f\n", area);

    return 0;
}


// 3 - Média de 3 números
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float a,b,c,soma;
	
	printf("Adicione o primeiro valor: ");
	scanf("%f", &a);
	
	printf("Adicione o segundo valor: ");
	scanf("%f", &b);
	
	printf("Adicione o terceiro valor: ");
	scanf("%f", &c);
	
	soma = ( (a + b + c) / 3);
	
	printf("A media dos numeros = %f\n", soma);
	
	return 0;
}


// 4 - Raio de um circulo
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	float raio, area, raioQuadrado;
	
	printf("Insita o valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A Area do circulo de raio %f = %f \n", raio, area);

  return 0;
}
