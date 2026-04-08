#include <stdio.h>

int main (){

printf("\n\n-------- Carta Mestre--------\n\n");
char Inicial_do_Estado;
char Codigo_da_carta [20];
char Cidade [30];
float Populacao;
float Area;
float PIB;
int Pontos_Turisticos;
float Densidade_populacional;
float PIB_per_capita;

//Entradas
printf("Inicial do estado: \n");
scanf(" %c", &Inicial_do_Estado);
printf("\n");

printf("Código do Estado: \n");
scanf("%s", Codigo_da_carta);
printf("\n");

printf("Nome da cidade: \n");
scanf("%s", Cidade);
printf("\n");

printf("População da cidade: \n");
scanf("%f", &Populacao);
printf("\n");

printf("Área em km² do estado: \n");
scanf("%f", &Area);
printf("\n");

printf("PIB do estado: \n");
scanf("%f", &PIB);
printf("\n");

printf("Quantidade de pontos turísticos: \n");
scanf("%d", &Pontos_Turisticos);
printf("\n");

//Cálculo
Densidade_populacional = Populacao / Area;
printf("Densidade populacional Estado: %f hab/km²\n", Densidade_populacional);

//Cálculo
PIB_per_capita = PIB / Populacao;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita);

printf("\n------- Fim das cartas-------");
printf("\n\n");

return 0;

}