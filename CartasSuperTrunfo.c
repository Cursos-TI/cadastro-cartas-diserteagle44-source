#include <stdio.h>

int main (){

printf("\n-------- Cartas 1 e 2 --------\n");
char Inicial_do_Estado1;
char Codigo_da_carta1 [20];
char Cidade1 [30];
float Populacao1;
float Area1;
float PIB1;
int Pontos_Turisticos1;
float Densidade_populacional1;
float PIB_per_capita1;
printf("\n");
char Inicial_do_estado2;
char Codigo_da_carta2 [50];
char Cidade2 [30];
float Populacao2;
float Area2;
float PIB2;
int Pontos_Turisticos2;
float Densidade_populacional2;
float PIB_per_capita2;

printf("Inicial do estado1: \n");
scanf(" %c", &Inicial_do_Estado1);
printf("\n");
printf("Inicial do estado2: \n");
scanf(" %c", &Inicial_do_estado2);
printf("\n");

printf("Código do Estado1: \n");
scanf("%s", Codigo_da_carta1);
printf("\n");
printf("Código do Estado2: \n");
scanf("%s", Codigo_da_carta2);
printf("\n");

printf("Nome da cidade1: \n");
scanf("%s", Cidade1);
printf("\n");
printf("Nome da cidade2: \n");
scanf("%s", Cidade2);
printf("\n");

printf("Informe o número populacional da cidade 1: \n");
scanf("%f", &Populacao1);
printf("\n");
printf("Informe o número populacional da cidade 2: \n");
scanf("%f", &Populacao2);
printf("\n");

printf("Informe a área em km² do estado 1: \n");
scanf("%f", &Area1);
printf("\n");
printf("Informe a área em km² do estado 2: \n");
scanf("%f", &Area2);
printf("\n");

printf("Informe o PIB do estado1 em R$: \n");
scanf("%f", &PIB1);
printf("\n");
printf("Informe o PIB do estado2 em R$: \n");
scanf("%f", &PIB2);
printf("\n");

printf("Informe a quantidade de pontos turísticos1: \n");
scanf("%d", &Pontos_Turisticos1);
printf("\n");
printf("Informe a quantidade de pontos turísticos2: \n");
scanf("%d", &Pontos_Turisticos2);
printf("\n");

Densidade_populacional1 = Populacao1 / Area1;
printf("Densidade populacional Estado 1: %f hab/km²\n", Densidade_populacional1);
Densidade_populacional2 = Populacao2 / Area2;
printf("Densidade populacional Estado 2: %f hab/Km²\n", Densidade_populacional2);

PIB_per_capita1 = PIB1 / Populacao1;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita1);
PIB_per_capita2 = PIB2 / Populacao2;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);

printf("\n------- Fim das cartas-------");
printf("\n\n");

return 0;

}