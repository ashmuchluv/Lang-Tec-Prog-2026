// Lista de exercícios 2

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// 1 - Calcular ano de nascimento atravez de idade e ano atual
int idade, anoAtual, anoNascimento;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Ano de nascimento: %d\n", anoNascimento);
	
// 2 - Km/h para m/s
	double kmh, ms;
// double pq ele guarda casa decimal 
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2lf\n", ms);

// 3 - valor em reais para dólar
	float dolar, real, cota;
	scanf("%f", &real);
	scanf("%f", &cota);
	printf("%f reais são %f dolares\n", real, (real/cota));

// 4 - temperatura de graus Celsius para Fahrenheit
	float tempC, tempF;
	scanf("%f", tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura é %f", tempF);
	
	


// 10 - Número maior
	
	int a, b, c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);

	return 0;
}
