#include <stdio.h>

int main (){

printf("\n\n-------- Carta Mestre--------\n\n");
char Inicial_do_Estado;
char Codigo_da_carta [20];
char Cidade [30];
unsigned long int Populacao;
float Area;
float PIB;
int Pontos_Turisticos;
float Densidade_Populacional;
float PIB_per_capita;
float Super_Poder;

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
scanf("%lu", &Populacao);
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

printf("Densidade Populacional: \n");
scanf("%f", &Densidade_Populacional);
printf("\n");

//Cálculo
Densidade_Populacional = Populacao / Area;
printf("Densidade populacional do Estado: %f hab/km²\n\n", Densidade_Populacional);

//Cálculo
PIB_per_capita = PIB / Populacao;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita);

Super_Poder = (float) Populacao + Area + PIB + (float) Pontos_Turisticos + PIB_per_capita + ( 1 / Densidade_Populacional);

printf("Super Poder: %.2f\n", Super_Poder);

printf("\n------- Fim da carta-------");
printf("\n\n");

return 0;

}