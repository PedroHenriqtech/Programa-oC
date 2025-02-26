#include <stdio.h>

int main (){
    int idade, matricula;
    float altura;
    char nome[50];
    
    printf("digite sua idade: \n");
    scanf("%d", &idade);

    printf("digte sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s\nMatricula: %d\n", nome, matricula);
    printf("idade: %d anos\naltura: %.2f metros \n", idade, altura);

    return 0;
    }