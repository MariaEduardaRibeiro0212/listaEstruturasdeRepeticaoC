#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i = 0;
	
	printf("---Jogo buzz, fizz---\n");
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%d", &n);
	
	while(i <= n){
		i++;
		if( i % 15 == 0){
			printf("FizzBuzz\t");}
		
		else if( i % 3 == 0){
			printf("fizz\t");
			
		}else if( i % 5 == 0){
			printf("Buzz\t");
			
		}else{
			printf("%d\t", i);
		}
	}
	
	}
