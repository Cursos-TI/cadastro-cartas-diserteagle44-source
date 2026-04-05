#include <stdio.h>

int maim (){

printf("\n-------- Carta 1 --------\n");
char Inicial_do_Estado1;
char Inicial_do_estado2;
char Codigo_do_Estado1 [20];
char Codigo_da_carta2 [50];
char Cidade1 [30];
char Cidade2 [30];
int Populacao1;
float Area1;
float PIB1;
float PIB2;
int Pontos_Turisticos1;
int Pontos_Turisticos2;

printf("Inicial do estado1: \n");
printf("Inicial do estado2: \n");
scanf(" %c", &Inicial_do_Estado1);
scanf(" %c", &Inicial_do_estado2);
printf("\n");
printf("\n");

printf("Código do Estado1: \n");
scanf("%s", Codigo_do_Estado1);
printf("\n");

printf("Nome da cidade1: \n");
scanf("%s", Cidade1);
printf("\n");

printf("Informe o número da populacional1: \n");
scanf("%d", &Populacao1);
printf("\n");

printf("Informe a área em km²1: \n");
scanf("%d", &Area1);
printf("\n");

printf("Informe o PIB do estado1 em R$: \n");
scanf("%f", &PIB1);
printf("\n");

printf("Informe a quantidade de pontos turísticos1: \n");
scanf("%d", &Pontos_Turisticos1);
printf("\n");

printf("\n------- Fim da carta 1-------\n");

return 0;



}