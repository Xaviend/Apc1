//CABECALHO
//Autor: Iury Xavier Bomfim
//Matricula: 2412130039
//Objetivo: Lista 1 
//Data: 28/04/2024



//QUESTÃO 1      
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int numero_usuario = 0;
    int numeros_pares = 0;
    int quantidade_repeticoes = 0;
    
    printf("Insira uma sequencia de numeros inteiros: ");
        
    while(numeros_pares < 3){
        scanf("%d", &numero_usuario);
    
        if(numero_usuario % 2 == 0){
            numeros_pares++;
        }
    
        quantidade_repeticoes++;    
    }
    
    printf("O loop se repetiu %d vezes ate ler 3 numeros pares. \n", quantidade_repeticoes);
    return 0;
} 


//QUESTAO 2
#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero_usuario = 0;
	int numeros_impares = 0;
	int quantidade_repeticoes = 0;
	int primeiro_impar = 0;
	int ultimo_impar = 0;
	
	printf("Insira uma sequencia de numeros inteiros:\n");
	
	while(numeros_impares < 5){
				scanf("%d", &numero_usuario);
				quantidade_repeticoes++;
		
		if(numero_usuario %2 == 1){
			numeros_impares++;
			
			if(numeros_impares == 1){
				primeiro_impar = numero_usuario;
			}
			ultimo_impar = numero_usuario;
		}
				
	}
	
	printf("\n-O primeiro numero impar lido foi: %d", primeiro_impar);
	printf("\n-O ultimo numero impar lido foi: %d", ultimo_impar);
	printf("\n-O loop precisou ser repetido %dx ate que tivesse 5 numeros impares.", quantidade_repeticoes);
	
	
	return 0;	
	
}
    
---------------------------------------------------------------------------------------------

//QUESTAO 3

#include <stdio.h>
#include <stdlib.h>

int main (){
	float m;
	float x;
	float n;
	float y;
	
	
	printf("Digite um valor para o coeficiente ANGULAR m: ");
	scanf("%f", &m);

	printf("Digite um valor para o coeficiente LINEAR n: ");
	scanf("%f", &n);
	
	printf("Digite um valor para a variavel x: ");
	scanf("%f", &x);	
	
	y = m * x + n;
	
	printf("\nNesse caso o valor de y fica: %.1f", y);
	
	
	return 0;
}

--------------------------------------------------------------------------------------------
    
//QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>  

int main (){
	int maior;
	int menor;
	int usuario;
	int contador;
	
	printf("Digite 10 numeros inteiros e o algoritmo dara o menor e o maior:\n");
		
	while (contador < 10){
		scanf("%d", &numero_usuario);
		contador++;
		
		if(contador == 1){
			menor = usuario;
			maior = usuario;
		}
		
		if(usuario <= numero){
			menor = usuario;
		}
		
		if(usuario >= maior){
			maior = usuario;
		}
	}
	
	
	printf("\n O menor numero que foi lido : %d", menor);
	printf("\n O maior numero que foi lido : %d", maior);
	return 0;
}
	
	
------------------------------------------------------------------------------

//QUESTÃO 5: 

#include <stdio.h>
#include <stdlib.h>

int main (){
	int contador = 1;
	int quantidade_aptos = 0;
	float boi_usuario;
	float receita;
	float peso_1;
	float peso_2;
			
	printf("Insira o peso de cada um dos 5 bois:\n");
	
	for(contador; contador < 6; contador++){
		scanf("%f", &peso_boi_usuario);
		
		if(boi_usuario >= 600){
			quantidade_aptos++;
			if(quantidade_aptos == 1){
				peso_1 = boi_usuario;
			}
			
			if(quantidade_bois_aptos == 2){
				peso_2 = boi_usuario;
			}
		}
		
		if(contador == 5) {
			if(quantidade_aptos < 2){
				printf("O processo nao teve sucesso!");
			}else{
				receita = ((peso_1 / 15) * 232.6 ) + ((peso_2 / 15) * 232.6);
				
				printf("O valor da receita: %.1lf\n", receita);
				printf("Foram pesados %d bois", contador);
			}
		}
	}
	
	
	
	
	return 0;
}
 
