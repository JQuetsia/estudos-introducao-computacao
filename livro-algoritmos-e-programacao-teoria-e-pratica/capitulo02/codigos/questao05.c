/*
Autor(a): Jemina Quetsia Feitsoa Teixeira
Contato: quetsiajemina@gmail.com
Descricao: Resposta do exercicio04
*/
#include <stdio.h>

int main(void){
    //dados 
    int numero = 0, resto = 0;  

    // processamento / saida
    printf("Escreva um numero de 4 digitos: ");
    scanf("%d", &numero);

    printf("Numero Invertido: ");
    resto = numero % 10;
    printf("%d", resto);
    numero = numero / 10;

    resto = numero % 10;
    printf("%d", resto);
    numero = numero / 10;

    resto = numero % 10;
    printf("%d", resto);
    numero = numero / 10;

    resto = numero % 10;
    printf("%d\n", resto);

    return 0;
}