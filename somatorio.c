
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeros, i = 0, soma = 0;
	
	while(1){
	printf("Escreva um número inteiro positivo:\n");
	scanf("%d", &numeros);
	
	if(numeros <= 0){
		break;
	}
	i++;
	soma+=numeros;	
	}
	
	printf("O somatório dos números digitados é %d.", soma);
}
