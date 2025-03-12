/*
Autor(a): Jemina Quetsia Feitosa Teixeira
Contato: quetsiajemina@gmail.com
Descricao: Resposta do exercicio03
*/
#include <stdio.h>

int main(void){
    // dados
    double numero1 = 0.00 , numero2 = 0.00, numero3 = 0.00, numero4 = 0.00, soma = 0.00, media = 0.00; 
    
    // processamento
    printf("Digite o 1 numero: ");
    scanf("%lf", &numero1);

    printf("Digite o 2 numero: ");
    scanf("%lf", &numero2);

    printf("Digite o 3 numero: ");
    scanf("%lf", &numero3);

    printf("Digite o 4 numero: ");
    scanf("%lf", &numero4);

    soma = numero1 + numero2 + numero3 + numero4;
    media = soma/4;

    // saida
    printf("A media aritmetica dos termos (%g, %g, %g, %g) eh igual a: %g\n", 
    numero1, numero2, numero3, numero4, media);

    return 0;
}