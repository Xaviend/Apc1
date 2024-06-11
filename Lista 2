//CABECALHO
//Autor: Iury Xavier Bomfim
//Matricula: 2412130039
//Objetivo: Lista 2

//Questao 1:

#include <stdio.h>
#include <stdlib.h>

int main(){
	int	x;
	int y;
	int z;
	
	printf("Esse programa vai conferir a possibilidade de existencia de um triangulo a partir de valores inseridos pelo usuario.");
	
	printf("\nInsira um valor para x: ");
	scanf("%d", &x);
	
	printf("Insira um valor para y: ");
	scanf("%d", &y);
	
	printf("Insira um valor para z: ");
	scanf("%d", &z);
	
	
	if(x + y > z && x + z > y && z + y > x){
		printf("\nEsses valores possibilitam a formacao de um triangulo!");
		
			if(x == y & x == z){
				printf("\nNesse caso, um triangulo EQUILATERO!");
			}	
			
			else if(x != y && x != z && y != z){
				printf("\nNesse caso, um triangulo ESCALENO");
			}
			
			else if((x == y) != z || (x == z) != y || (y == z) != x){
				printf("\nNesse caso, um triangulo ISOCELES");	
			}
			
		
	}else{
		printf("\nA soma dos comprimentos dos lados nao possibilita a existencia de um triagulo!");
	}
	

return 0;	
}

//Questão 2:

#include <stdio.h>
#include <stdlib.h>

int main() {
	char operacao_matematicas;
	float a;
	float b;
	
	printf("Digite a operacao que deseja: +, -, / ou *:\n");
	scanf("%c", &operacao);
	 
	printf("Digite dois numeros reais:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	switch (operacao) {
		case '+': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a+b); 
				break;
		case '-': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a-b); 
				break;
		case '/': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a/b); 
				break;
		case '*': 
			printf("A operacao selecionada foi %c e o resultado %.1lf", operacao, a*b); 
				break;
	}
	
	return 0;
}

//Questao 3
#include <stdio.h>
#include <stdlib.h>

int main (){
	float maxima_permitida = 60.0;
	float motorista = 0.0;
	float multa = 0.0;
 
	printf("Digite a velocidade que o motorista estava : ");
	scanf("%f", &motorista);
		
	if(velocidade_motorista > velocidade_maxima_permitida){
		printf(" O motorista estava dirigindo ACIMA da velocidade permitida \n!");
			
		valor_multa = (motorista -maxima_permitida) * 5;
			
		printf("Nessa velocidade o valor total da multa fica em: R$%.1lf \n", multa);
	}else{
		printf("O motorista estava  em uma velocidade PERMITIDA! \n Nao se aplica multa.\n");
	}
	 	
 	
	return 0;
}

//QUESTAO 4:

#include <stdio.h>
#include <stdlib.h>

int main (){
	int contador;
	int termo;
	int termo_1 = 1;
	int termo_2 = 1;
	
	printf("Primeiros termos da sequencia de FIBONACCI:\n");
	
	for(contador = 1; contador <= 15; contador++){
		
		if(contador == 1 || contador == 2){
			termo = 1;
			
			printf("%d\n", termo);
		}else{
			termo = pre_termo_1 + pre_termo_2;
			pre_termo_2 = pre_termo_1;
			pre_termo_1 = termo;
			
			printf("%d\n", termo);
		}
	}
	
	return 0;
}

//QUESTAO 5:
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int j;
	int numeros = 0;
	
	for(i = 0; i < 51; i++){
		contador = 0;
		for(j = i; j > 0; j--){
			if(i % j == 0){
				numeros++;
			}
		}
		if(numeros == 2){
			printf("\n%d", i);
		}
	}
	return 0;
}
