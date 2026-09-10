// 1. Verificador de CPF
int mult( int digito, int valor ){
return digito + valor;
}

int main(int argc, char *argv[]) {
	
	int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dv1, dv2, soma, resto;
	
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", 
		&dig1, &dig2, &dig3, &dig4, &dig5, &dig6, &dig7, &dig8, &dig9, &dv1, &dv2);
	
	printf("Confirme seu CPF: %d%d%d.%d%d%d.%d%d%d-%d%d", 
		dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dv1, dv2);
	
	soma = mult(dig1,10)+mult(dig2,9)+mult(dig3,8)+mult(dig4,7)+mult(dig5,6)+mult(dig6,5)+mult(dig7,4)+
		mult(dig8,3)+mult(dig9,2);
	soma *=10;
	resto = soma%11;

	// Não finalizado
	
	return 0;
}

// 2. Conversor de Graus Celsius e Fahremheit - vou refazer melhor
float temp, resuC, resuF;
	printf ("Insira a temperatura: ");
	scanf ("%f", &temp);
	resuC = (temp - 32) * 5/9;
	resuF = (temp * 9/5) + 32;
	
	printf ("O número informado é %f graus Celsius, ou %f Fahremheit", resuC, resuF);
	
// 3. 
