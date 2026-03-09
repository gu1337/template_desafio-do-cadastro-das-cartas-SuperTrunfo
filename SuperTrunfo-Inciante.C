#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	//variaveis da carta 1.
	 char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; //uso do unsigned long int.
    float area1;
    float pib1;
    int pontos_turisticos1;
	float densidade1;
    float pib_per_capita1;
	float super_poder1;

    //variaveis da carta 2.
    char estado2;
    char codigo2[4];
    char cidade2[50];
	unsigned long int populacao2;
	float area2;
	float pib2; 
	int pontos_turisticos2;
	float densidade2;
    float pib_per_capita2;
	float super_poder2;
	
    //cadastro para a primeira carta.
	printf("---CADASTRO DA CARTA 1---\n");
	printf("Digite o Estado (A-H): ");
	scanf(" %c", &estado1);
	
	printf("Digite o Codigo da carta (ex: CO1): ");
	scanf("%s", codigo1);
	
	printf("Digite o Nome da Cidade: ");
	scanf(" %[^\n]", cidade1);
	
	printf("Digite a Populacao: ");
	scanf("%lu", &populacao1);
		
	printf("Digite a area: ");
	scanf("%f", &area1);
	
	printf("Digite o PIB: ");
	scanf("%f", &pib1);
	
	printf("Digite o Numero de Pontos Turisticos: ");
	scanf("%d", &pontos_turisticos1);
	
	densidade1 = (float)populacao1 / area1; //adcionados a densidade e pib per capita nas duas cartas.
	pib_per_capita1 = pib1 / populacao1;

    //adcionado o super poder do nivel mestre.
	super_poder1= (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);


    //cadastro da segunda carta.
	printf("---CADASTRO DA CARTA 2---\n");
	printf("Digite o Estado (A-H): ");
	scanf(" %c", &estado2);
	
	printf("Digite o Codigo da Carta (ex: CO2): ");
	scanf("%s", codigo2);
	
	printf("Digite o Nome da Cidade: ");
	scanf(" %[^\n]", cidade2);
	
	printf("Digite a Populacao: ");
	scanf("%lu", &populacao2);
	
	printf("Digite a Area: ");
	scanf("%f", &area2);
	
	printf("Digite o PIB: ");
	scanf("%f", &pib2);
	
	printf("Digite o Numero de pontos turisticos: ");
	scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    //super poder para carta2.
    super_poder2= (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

	//exibicao das cartas.
	printf("------------------------------\n");
	printf("----- CARTA CADASTRADA 1 -----\n");
	printf("-------------------------------\n");
	
	printf("ESTADO: %c\n", estado1);
	printf("CODIGO: %s\n", codigo1);
	printf("CIDADE: %s\n", cidade1);
	printf("POPULACAO: %lu\n", populacao1);
	printf("AREA: %.2f km²\n", area1);
	printf("PIB: %.2f Bilhoes de Reais\n", pib1);
	printf("PONTOS TURISTICOS: %d\n", pontos_turisticos1);
	printf("DENSIDADE POPULACIONAL: %.3f hab/km²\n", densidade1);
	printf("PIB PER CAPITA: %.3f\n", pib_per_capita1);
    printf("SUPER PODER: %.3f\n", super_poder1);
	
	
	printf("------------------------------\n");
	printf("----- CARTA CADASTRADA 2 -----\n");
	printf("-------------------------------\n");
	
	printf("ESTADO: %c\n", estado2);
	printf("CODIGO: %s\n", codigo2);
	printf("CIDADE: %s\n", cidade2);
	printf("POPULACAO: %lu\n", populacao2);
	printf("AREA: %.2f km²\n", area2);
	printf("PIB: %.2f Bilhoes de Reais\n", pib2);
	printf("PONTOS TURISTICOS: %d\n", pontos_turisticos2);
    printf("DENSIDADE POPULACIONAL: %.3f hab/km²\n", densidade2);
	printf("PIB PER CAPITA: %.3f\n", pib_per_capita2);
	printf("SUPER PODER: %.3f\n", super_poder2);


    //adcionado a comparacao, agora com if e else;
	
		printf("------COMPARACAO DAS CARTAS------\n"); 
	
	printf("POPULACAO: ");
    if (populacao1 > populacao2){
    	printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("AREA: ");
	if (area1 > area2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("PIB: ");
	if(pib1 > pib2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("PONTOS TURISTICOS: ");
	if(pontos_turisticos1 > pontos_turisticos2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("DENSIDADE: ");
	if(densidade1 < densidade2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("PIB PER CAPITA: ");
	if(pib_per_capita1 > pib_per_capita2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	
	printf("SUPER PODER: ");
	if(super_poder1 > super_poder2){
		printf("CARTA1 VENCEU!\n");
	}
	else{
		printf("CARTA2 VENCEU!\n");
	}
	return 0;	
}
