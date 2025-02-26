#include <stdio.h>

//Desafio super trunfo - Países 

int main (){
char carta[50];
char cidade1[50];
char cidade2[50];
char estado1 = 'A-H';
char estado2 = 'A-H';
char codigo1[50];
char codigo2[50];
int populacao1;
int populacao2;
float area1;
float area2;
float pib1;
float pib2;
int pontosTuristicos1;
int pontosTuristicos2;

//Informações da carta 1

printf("Super Trunfo - Países \n");
printf("Carta 1: \n");

printf("Digite o estado (ex: Ceará): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado1);

printf("Digite o código (ex: A01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo1);

printf("Digite o nome da cidade (ex: Fortaleza): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade1);

printf("Digite a população (ex:50000 (cinquenta mil): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &populacao1);

printf("Digite a área (ex: 1521.11) km²: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area1);

printf("Digite o Pib (ex: 700.28) milhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib1);

printf("Digite os números de pontos turísticos (ex: 20): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos1);


//Informações da carta 2

printf("\nCarta 2: \n");

printf("Digite o estado (ex: Pernambuco): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &estado2);

printf("Digite o código (ex: B01): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &codigo2);

printf("Digite o nome da cidade (ex: Recife): "); //Digite conforme o exemplo dentro do parênteses
scanf("%s", &cidade2);

printf("Digite a população (ex: (200000) duzentos mil: "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &populacao2);

printf("Digite a área (ex: 5500.00 km²): "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &area2);

printf("Digite o Pib (ex: 800.00) milhões: "); //Digite conforme o exemplo dentro do parênteses
scanf("%f", &pib2);

printf("Digite os números de pontos turísticos (ex: 15): "); //Digite conforme o exemplo dentro do parênteses
scanf("%d", &pontosTuristicos2);

//Imprimindo as cartas 1 e 2

printf("\nSuper trunfo - Carta 1: \n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("Pib: %.2f bilhões de reais\n", pib1);
printf("Pontos turísticos: %d\n", pontosTuristicos1);

printf("\nSuper trunfo - Carta 2: \n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("Pib: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontosTuristicos2);

return 0;
}