#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "Portuguese");

int mes;

printf("Digite o número do mês:\n");
scanf("%d", &mes);

if(mes >= 1 && mes <= 3){
	printf("Verão");
	
}else if(mes >= 4 && mes <= 6){
	printf("Outono");
	
}else if(mes >= 7 && mes <= 9){
	printf("Inverno");
	
}else{
	printf("Primavera");
}
}
