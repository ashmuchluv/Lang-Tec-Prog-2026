#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main(int argc, char *argv[]) {
	// area do circulo
	float raio, area, raioQuadrado;
	
	printf("Insita o valor de R: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A Area do circulo de raio %f = %f \n", raio, area);
	
	// area do trapezio descendente
	
	float baseMaior, baseMenor, h, valor;
	
	printf("Insira o valor da B: \n");
	scanf("%f", &baseMaior);
	
	printf("Insira o valor da b: \n");
	scanf("%f", &baseMenor);
	
	printf("Insira o valor de h: \n");
	scanf("%f", &h);
	
	valor = ((baseMaior + baseMenor) * h) / 2;
	
	printf("A area do trapezio = %f", valor);
	
	return 0;
}
