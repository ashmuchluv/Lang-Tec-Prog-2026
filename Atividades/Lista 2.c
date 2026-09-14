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
	
// 5 - Graus para Radianos
	float graus, radianos;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * 3.141592 / 180;

    printf("Angulo em radianos: %.2f\n", radianos);
// %.2f = pega apenas 2 números decimais do valor

// 6 - Antecessor e Sucessor
	int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

// 7 - Divisão de premio
	float total, primeiro, segundo, terceiro;

    total = 780000;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - primeiro - segundo;

    printf("Primeiro ganhador: R$ %.2f\n", primeiro);
    printf("Segundo ganhador: R$ %.2f\n", segundo);
    printf("Terceiro ganhador: R$ %.2f\n", terceiro);

// 8 - Segundos em Horas
	int segundos, horas, minutos, segundosRestantes;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;

    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d:%d:%d\n", horas, minutos, segundosRestantes);

// 9 - Litros necessários
	float tempo, velocidade, distancia, litros;

    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media (km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Litros necessarios: %.3f\n", litros);

// 10 - Número maior
	int a, b, c, maior_temp, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	maior_temp = ((a+b)+abs(a-b))/2;
	maior = ((maior_temp+c)+abs(maior_temp-c))/2;
	
	printf("O maior entre |%d|%d|%d| = %d", a, b, c, maior);

	return 0;
}
