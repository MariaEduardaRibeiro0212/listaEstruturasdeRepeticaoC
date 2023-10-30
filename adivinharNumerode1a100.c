#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //Tem uma função que gerar números pseudoaleatórios
#include <time.h> // Existem funções e tipos de dados para manipular informações de tempo e datas.

int main(){
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int numeroAleatorio = rand () % 100 + 1, numero, i = 0;
	
	while(i < 10){
	
		printf("Adivinhe um número entre 1 e 100 e digite-o:\n");
		scanf("%d", &numero);
		
		if(numero > numeroAleatorio){
			printf("Dica: o número é menor do que o que você digitou.\n");
			
		} else if(numero < numeroAleatorio){
			printf("Dica: o número é maior do que o que você digitou.\n");	
		}
		else{
			printf("Na mosca!! Você acertou!\n");
			break;
		}
		
		i++;
		
	}
	
	printf("Seu número de tentativas foi %d vezes.\n", i);
	
}
