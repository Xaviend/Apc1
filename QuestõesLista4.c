//QUESTAO 2: 

#include <stdlib.h>
#include <stdio.h>

int main(){
	int numeros[6];
	int i = 0;
	int ordem;

	for(i; i < 6; i++){
		printf("Digite o valor %d: ", i +1);
		scanf("%d", &numeros[i]);
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
        scanf("%d", &numeros[i]);
    }
    printf("Digite 2 numeros de que estão de 0 a 7: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    soma = numeros[x] + numeros[y];
    printf("O valor encontrado na posicao %d foi %d e na posicao %d foi %d, a soma deles resulta em %d", x, numeros[x], y, numeros[y], soma);

return 0;
}
