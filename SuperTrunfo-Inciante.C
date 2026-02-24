#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//variaveis da carta 1.
	 char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    //variaveis da carta 2.
    char estado2;
    char codigo2[4];
    char cidade2[50];
	int populacao2;
	float area2;
	float pib2; 
	int pontos_turisticos2;
	
    //cadastro para a primeira carta.
	printf("---CADASTRO DA CARTA 1---\n");
	printf("Digite o Estado (A-H): ");
	scanf(" %c", &estado1);
	
	printf("Digite o Codigo da carta (ex: CO1): ");
	scanf("%s", codigo1);
	
	printf("Digite o Nome da Cidade: ");
	scanf(" %[^\n]", cidade1);
	
	printf("Digite a Populacao: ");
	scanf("%d", &populacao1);
		
	printf("Digite a area: ");
	scanf("%f", &area1);
	
	printf("Digite o PIB: ");
	scanf("%f", &pib1);
	
	printf("Digite o Numero de Pontos Turisticos: ");
	scanf("%d", &pontos_turisticos1);
	
    //cadastro da segunda carta.
	printf("---CADASTRO DA CARTA 2---\n");
	printf("Digite o Estado (A-H): ");
	scanf(" %c", &estado2);
	
	printf("Digite o Codigo da Carta (ex: CO2): ");
	scanf("%s", codigo2);
	
	printf("Digite o Nome da Cidade: ");
	scanf(" %[^\n]", cidade2);
	
	printf("Digite a Populacao: ");
	scanf("%d", &populacao2);
	
	printf("Digite a Area: ");
	scanf("%f", &area2);
	
	printf("Digite o PIB: ");
	scanf("%f", &pib2);
	
	printf("Digite o Numero de pontos turisticos: ");
	scanf("%d", &pontos_turisticos2);

	//exibicao das cartas.
	printf("------------------------------\n");
	printf("----- CARTA CADASTRADA 1 -----\n");
	printf("-------------------------------\n");
	
	printf("ESTADO: %c\n", estado1);
	printf("CODIGO: %s\n", codigo1);
	printf("CIDADE: %s\n", cidade1);
	printf("POPULACAO: %d\n", populacao1);
	printf("AREA: %.2f km²\n", area1);
	printf("PIB: %.2f Bilhoes de Reais\n", pib1);
	printf("PONTOS TURISTICOS: %d\n", pontos_turisticos1);
	
	
	
	printf("------------------------------\n");
	printf("----- CARTA CADASTRADA 2 -----\n");
	printf("-------------------------------\n");
	
	printf("ESTADO: %c\n", estado2);
	printf("CODIGO: %s\n", codigo2);
	printf("CIDADE: %s\n", cidade2);
	printf("POPULACAO: %d\n", populacao2);
	printf("AREA: %.2f km²\n", area2);
	printf("PIB: %.2f Bilhoes de Reais\n", pib2);
	printf("PONTOS TURISTICOS: %d\n", pontos_turisticos2);
	
	return 0;	
}