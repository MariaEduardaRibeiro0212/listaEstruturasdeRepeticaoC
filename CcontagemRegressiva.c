#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &num);
	
	while(num > 1){
		num--;
		printf("%d\n", num);
	}
	
	}
