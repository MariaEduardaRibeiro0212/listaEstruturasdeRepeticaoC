#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resto = 0;
	
	printf("Digite um número inteiro positivo.\n");
	scanf("%d", &numero);
	
	if(numero >=  0){
		do{
			resto = numero % 10;
			numero/=10;
			
			if(numero == resto){
			printf("O número é polídromo.\n");
			break;
		}else{
			printf("Não polídromo.\n");
			break;
		}
		
			
		}while(numero!= 0);
		printf("\n");
			
	}else if(numero < 1){
		numero = numero * -1;
		do{
			resto = numero % 10;
			numero/=10;
			
		if(numero == resto){
			printf("O número é políndromo.\n");
			break;
		}else{
			printf("Não políndromo.\n");
			break;
		}
			
		}while(numero!= 0);
		printf("\n");
		
	}

}
