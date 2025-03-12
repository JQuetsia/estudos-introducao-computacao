/*
Autor(a): Jemina Quetsia Feitosa Teixeira
Contato: quetsiajemina@gmail.com
Descricao: Resposta da exercicio04 
*/
#include <stdio.h>

int main(void){
    // dados
    double graus_celsius = 0.00,  graus_fahrenheit = 0.00;

    // processamento
    printf("Escreva a temperatura em graus Celsius: ");
    scanf("%lf", &graus_celsius);

    graus_fahrenheit = (1.8 * graus_celsius) + 32; 

    //saida 
    printf("%g Celsius em Fahrenheit eh igual a %g\n",
         graus_celsius, graus_fahrenheit);

    return 0;
}