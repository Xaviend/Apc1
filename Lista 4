//CABECALHO
//Autor: Iury Xavier Bomfim
//Matricula: 2412130039
//Objetivo: Lista 4

//QUESTAO 1: 


#include <stdlib.h>
#include <stdio.h>

int main(){
	int numeros[6];
	int i = 0;

	for(i; i < 6; i++){
		printf("valor %d: ", i +1);
		scanf("%d", &valores[i]);
	}
	printf("Os valores lidos foram: ");
	for(i = 0; i < 6; i++){
		printf(" %d", valores[i]);
		
	}
	return 0;
}


--------------------------------------------------------------------

//QUESTAO 2: 

#include <stdlib.h>
#include <stdio.h>

int main(){
	int Numeros[6];
	int i = 0;
	int ordem;

	for(i; i < 6; i++){
		printf("Digite o valor %d: ", i +1);
		scanf("%d", &valores[i]);
	}
	
	printf(" os valores na ordem em que foram inseridos digite 1, para a ordem inversa digite 2: ");
	scanf("%d",&ordem);
	
	switch(ordem){
		case 1: printf("Os valores lidos foram: ");
			for(i = 0; i < 6; i++){
				printf(" %d", numeros[i]);
			}
			break;
		case 2: printf("Os valores lidos, ORDEM INVERSA, foram: ");
			for(i = 5; i >= 0; i--){
				printf(" %d", numeros[i]);
			}
			break;	
	}	
	return 0;
}



//QUESTAO 3:
#include <stdio.h>
#include <stdlib.h>

int main() {
    float valores[5];
    float soma = 0.0;
    float media;
    int i;
	
    printf("Digite cinco valores: \n");
	
    for (i = 0; i < 5; ++i) {
        scanf("%f", &valores[i]);
        soma = soma + valores[i];
    }
	
    media = soma / 5;
	
    printf("A media dos valores foi de %.2f", media);

return 0;	
}

//QUESTAO 4:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[8];
    int i;
    int x;
    int y;
    int soma;
    printf("Escreva 8 numeros i: \n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &valores[i]);
    }
    printf("Digite 2 numeros de que estão de 0 a 7: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    soma = valores[x] + valores[y];
    printf("O valor encontrado na posicao %d foi %d e na posicao %d foi %d, a soma deles resulta em %d", x, valores[x], y, valores[y], soma);

return 0;
}

//QUESTAO 5: 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor_a[6] = {1, 0, 5, -2, -5, 7};
    int soma = vetor_a[0] + vetor_a[1] + vetor_a[5];
    int i;
	
    printf("Soma: %d\n", soma);
	
    vetor_a[4] = 100;
	
    printf("Valores do array vetor_a: \n");
	
    for (i = 0; i < 6; i++) {
        printf("%d\n", vetor_a[i]);
    }
return 0;	
}
