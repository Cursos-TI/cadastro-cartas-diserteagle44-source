#include <stdio.h>

int main (){

printf("\n\n-------- Carta Mestre - Duas em uma--------\n\n");

// Carta 1
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

// Carta 2
char Inicial_do_Estado2;
char Codigo_da_carta2 [20];
char Cidade2 [30];
unsigned long int Populacao2;
float Area2;
float PIB2;
int Pontos_Turisticos2;
float Densidade_Populacional2;
float PIB_per_capita2;
float Super_Poder2;

// ================= ENTRADAS =================

// Carta 1
printf("Inicial do estado 1: \n");
scanf(" %c", &Inicial_do_Estado);

printf("Código do Estado 1: \n");
scanf("%s", Codigo_da_carta);

printf("Nome da cidade 1: \n");
scanf("%s", Cidade);

printf("População da cidade 1: \n");
scanf("%lu", &Populacao);

printf("Área em km² do estado 1: \n");
scanf("%f", &Area);

printf("PIB do estado 1: \n");
scanf("%f", &PIB);

printf("Quantidade de pontos turísticos 1: \n");
scanf("%d", &Pontos_Turisticos);

// Carta 2
printf("\nInicial do estado 2: \n");
scanf(" %c", &Inicial_do_Estado2);

printf("Código do Estado 2: \n");
scanf("%s", Codigo_da_carta2);

printf("Nome da cidade 2: \n");
scanf("%s", Cidade2);

printf("População da cidade 2: \n");
scanf("%lu", &Populacao2);

printf("Área em km² do estado 2: \n");
scanf("%f", &Area2);

printf("PIB do estado 2: \n");
scanf("%f", &PIB2);

printf("Quantidade de pontos turísticos 2: \n");
scanf("%d", &Pontos_Turisticos2);

// ================= CÁLCULOS =================

// Carta 1
Densidade_Populacional = (float) Populacao / Area;
PIB_per_capita = PIB / Populacao;
Super_Poder = (float)Populacao + Area + PIB + (float)Pontos_Turisticos + PIB_per_capita + (1.0 / Densidade_Populacional);

// Carta 2
Densidade_Populacional2 = (float) Populacao2 / Area2;
PIB_per_capita2 = PIB2 / Populacao2;
Super_Poder2 = (float)Populacao2 + Area2 + PIB2 + (float)Pontos_Turisticos2 + PIB_per_capita2 + (1.0 / Densidade_Populacional2);

// ================= COMPARAÇÕES =================

printf("\n--- Comparação de Cartas ---\n");

// População
printf("População: Carta %d venceu (%d)\n", (Populacao > Populacao2) ? 1 : 2, (Populacao > Populacao2));

// Área
printf("Área: Carta %d venceu (%d)\n", (Area > Area2) ? 1 : 2, (Area > Area2));

// PIB
printf("PIB: Carta %d venceu (%d)\n", (PIB > PIB2) ? 1 : 2, (PIB > PIB2));

// Pontos turísticos
printf("Pontos Turísticos: Carta %d venceu (%d)\n", (Pontos_Turisticos > Pontos_Turisticos2) ? 1 : 2, (Pontos_Turisticos > Pontos_Turisticos2));

// Densidade (MENOR vence)
printf("Densidade Populacional: Carta %d venceu (%d)\n", (Densidade_Populacional < Densidade_Populacional2) ? 1 : 2, (Densidade_Populacional < Densidade_Populacional2));

// PIB per capita
printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB_per_capita > PIB_per_capita2) ? 1 : 2, (PIB_per_capita > PIB_per_capita2));

// Super Poder
printf("Super Poder: Carta %d venceu (%d)\n", (Super_Poder > Super_Poder2) ? 1 : 2, (Super_Poder > Super_Poder2));

printf("\n------- Fim -------\n");

return 0;
}