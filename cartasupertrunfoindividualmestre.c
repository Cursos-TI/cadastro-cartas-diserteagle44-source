#include <stdio.h>

int main (){

printf("\n\n-------- Carta Mestre - Duas em uma--------\n\n");
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
printf("\n");
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


//Entradas
printf("Inicial do estado: \n");
scanf(" %c", &Inicial_do_Estado);
printf("\n");

printf("Inicial do estado2: \n");
scanf(" %c", &Inicial_do_Estado2);
printf("\n");

printf("Código do Estado: \n");
scanf("%s", Codigo_da_carta);
printf("\n");

printf("Código do Estado2: \n");
scanf("%s", Codigo_da_carta2);
printf("\n");

printf("Nome da cidade: \n");
scanf("%s", Cidade);
printf("\n");

printf("Nome da cidade2: \n");
scanf("%s", Cidade2);
printf("\n");


printf("População da cidade: \n");
scanf("%lu", &Populacao);
printf("\n");

printf("População da cidade2: \n");
scanf("%lu", &Populacao2);
printf("\n");

printf("Área em km² do estado: \n");
scanf("%f", &Area);
printf("\n");

printf("Área em km² do estado2: \n");
scanf("%f", &Area2);
printf("\n");

printf("PIB do estado: \n");
scanf("%f", &PIB);
printf("\n");

printf("PIB do estado2: \n");
scanf("%f", &PIB2);
printf("\n");

printf("Quantidade de pontos turísticos: \n");
scanf("%d", &Pontos_Turisticos);
printf("\n");

printf("Quantidade de pontos turísticos2: \n");
scanf("%d", &Pontos_Turisticos2);
printf("\n");

Densidade_Populacional = (float) Populacao / Area;
printf("Densidade populacional do Estado: %f hab/km²\n", Densidade_Populacional);
printf("\n");

Densidade_Populacional2 = (float) Populacao2 / Area2;
printf("Densidade populacional do Estado: %f hab/km²\n", Densidade_Populacional2);
printf("\n");

PIB_per_capita = PIB / Populacao;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita);
printf("\n");

PIB_per_capita = PIB2 / Populacao2;
printf("PIB per capita: R$ %.2f\n", PIB_per_capita2);
printf("\n");

Super_Poder = (float) Populacao + Area + PIB + (float) Pontos_Turisticos + PIB_per_capita + ( 1.0 / Densidade_Populacional);
printf("\n");

Super_Poder = (float) Populacao + Area + PIB + (float) Pontos_Turisticos + PIB_per_capita + ( 1.0 / Densidade_Populacional);
printf("\n");

printf("Super Poder: %.2f\n", Super_Poder);
printf("\n");

if(Populacao > Populacao2){
    printf("Cidade venceu!");
    else(Populacao < Populacao2){
        printf("Cidade perdeu!");
    }
}

printf("\n------- Fim da carta-------");
printf("\n\n");

return 0;

}