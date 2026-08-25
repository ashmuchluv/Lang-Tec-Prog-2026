// Declarar o número maior;
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b, c;
	int resultado;
	
	printf("Insira os valores de A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b){
		resultado = a;
	}
	else{
		resultado = b;
	}
		if (c > resultado){
		resultado = c;
	}
	printf("%d = maior", resultado);

	return 0;
}


// Se o número for positivo, será retornado como negativo, se for negativo, retorna ao quadrado;
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, resultado;
	
	printf("Insira o valor: ");
	scanf("%d", &a);
	
	if (a >= 0){
		resultado = a * -1;
	}
	else{
		resultado = a * - a;
	}
	printf("O numero e: %d", resultado);

return 0;
}
