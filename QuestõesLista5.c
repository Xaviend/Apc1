//QUESTAO 2:
#include <stdio.h>
#include <stdlib.h>

int main() {
    char caracteres[51];
    int i;
    int quantidade_caracteres = 0;
    
    printf("Digite ate 50 caracteres: \n");
    gets(caracteres );
    
    for (i = 0; string[i] != '\0'; i++) {
        quantidade_caracteres++;
    }
    printf("A string tem %d caracteres", quantidade_caracteres);

  return 0;
}


//QUESTAO 4:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char caracteres[11];
    char caracteres_2[11];
    
    printf("Digite até 10 caracteres : \n");
    gets(caracteres);
    
    printf("Digite caracteres para ver ser estes estão contidos nos caracteres anteriores \n");
    gets(caracteres_2);
    
    if (strstr(caracteres, caracteres_2) != NULL) {
        printf("Os caracteres %s estão contidos nos caracteres %s", caracteres_2, caracteres);
    } else {
        printf("O caracter %s nao esta contido no caracter %s", caracteres_2, caracteres);
    }
  return 0;
}
