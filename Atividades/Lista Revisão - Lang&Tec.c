#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

// 1. 


// 2. Conversor de Graus Celsius e Fahremheit
float temp, resuC, resuF;
	printf ("Insira a temperatura: ");
	scanf ("%f", &temp);
	resuC = (temp - 32) * 5/9;
	resuF = (temp * 9/5) + 32;
	
	printf ("O número informado é %f graus Celsius, ou %f Fahremheit", resuC, resuF);
	
// 3. 


	return 0;
}
