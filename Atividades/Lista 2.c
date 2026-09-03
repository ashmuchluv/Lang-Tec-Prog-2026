// Lista de exercícios 2

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// 1 - 
	
// 2 - 

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
