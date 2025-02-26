#include <stdio.h>
 
int main() {
     int idade;
     float altura = 1.75;
     double saldoBancario = 12345.67;
     char inicial = 'P';
     char nome[20] = "Pedro";
     
printf("digite sua idade: ");
scanf("%d", &idade);
printf("Sua idade é: %d\n", idade);


printf("digite sua altura: ");
scanf("%f", &altura);
printf("sua altura é: %.1f metros \n", altura);

printf("Digite seu saldo bancário: ");
scanf("%f", &saldoBancario);
printf("Seu saldo bancário é: %.2f \n", saldoBancario);

printf("Digite a inicial: \n");
scanf("% c", &inicial);
printf("A inicial é: % c \n", inicial);

return 0;
}
  
