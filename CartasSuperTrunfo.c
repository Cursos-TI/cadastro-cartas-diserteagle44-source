#include <stdio.h>

int main (){

printf("\n-------- Carta 1 --------\n");
char Inicial_do_Estado1;
char Codigo_da_carta1 [20];
char Cidade1 [30];
int Populacao1;
float Area1;
float PIB1;
int Pontos_Turisticos1;
printf("\n");
char Inicial_do_estado2;
char Codigo_da_carta2 [50];
char Cidade2 [30];
int Populacao2;
float Area2;
float PIB2;
int Pontos_Turisticos2;

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

printf("Informe o número da populacional da cidade 1: \n");
scanf("%f", &Populacao1);
printf("\n");
printf("Informe o número da populacional da cidade 2: \n");
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


printf("\n------- Fim das cartas-------");
printf("\n---\n");

return 0;

}