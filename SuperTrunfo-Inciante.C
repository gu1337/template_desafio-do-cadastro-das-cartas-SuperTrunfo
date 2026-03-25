#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

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
	
	int opcao1, opcao2;
    int escolhido1 = 0, escolhido2 = 0;
    double valor1_atr1, valor2_atr1;
    double valor1_atr2, valor2_atr2;
    double soma1, soma2;
	
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
	
    densidade1 = (float)populacao1 / area1;
	pib_per_capita1 = pib1 / populacao1;
	
	super_poder1= (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);
	
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
    
    super_poder2= (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);
	
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
	
	 printf("\n------- MENU DE COMPARACAO 1 -------\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o PRIMEIRO atributo (1-5): ");
    scanf("%d", &opcao1);


    if(opcao1 < 1 || opcao1 > 5){
    printf("Opcao invalida! Usando Populacao como padrao.\n");
    opcao1 = 1;
   }

    switch (opcao1) {
    case 1:
        valor1_atr1 = (float)populacao1;
        valor2_atr1 = (float)populacao2;
        escolhido1 = 1;
        break;
    case 2:
        valor1_atr1 = area1;
        valor2_atr1 = area2;
        escolhido1 = 2;
        break;
    case 3:
        valor1_atr1 = pib1;
        valor2_atr1 = pib2;
        escolhido1 = 3;
        break;
    case 4:
        valor1_atr1 = (float)pontos_turisticos1;
        valor2_atr1 = (float)pontos_turisticos2;
        escolhido1 = 4;
        break;
    case 5:
        valor1_atr1 = densidade1;
        valor2_atr1 = densidade2;
        escolhido1 = 5;
        break;
   }

        // ===== SEGUNDO MENU =====
    printf("\n------- MENU DE COMPARACAO 2 -------\n");

   if (opcao1 != 1) printf("1 - Populacao\n");
   if (opcao1 != 2) printf("2 - Area\n");
   if (opcao1 != 3) printf("3 - PIB\n");
   if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
   if (opcao1 != 5) printf("5 - Densidade Demografica\n");

   printf("Escolha o SEGUNDO atributo: ");
   scanf("%d", &opcao2);


   if(opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1){
   printf("Opcao invalida ou repetida! Ajustando automaticamente.\n");

    if(opcao1 != 2){
        opcao2 = 2;
    } else {
        opcao2 = 1;
    }
}

    switch (opcao2) {
    case 1:
        valor1_atr2 = (float)populacao1;
        valor2_atr2 = (float)populacao2;
        escolhido2 = 1;
        break;
    case 2:
        valor1_atr2 = area1;
        valor2_atr2 = area2;
        escolhido2 = 2;
        break;
    case 3:
        valor1_atr2 = pib1;
        valor2_atr2 = pib2;
        escolhido2 = 3;
        break;
    case 4:
        valor1_atr2 = (float)pontos_turisticos1;
        valor2_atr2 = (float)pontos_turisticos2;
        escolhido2 = 4;
        break;
    case 5:
        valor1_atr2 = densidade1;
        valor2_atr2 = densidade2;
        escolhido2 = 5;
        break;
}

     
    if(escolhido1 == 5){
    valor1_atr1 = 1 / valor1_atr1;
    valor2_atr1 = 1 / valor2_atr1;
   }
   
    if(escolhido2 == 5){
    valor1_atr2 = 1 / valor1_atr2;
    valor2_atr2 = 1 / valor2_atr2;
   }

    // SOMA
   soma1 = valor1_atr1 + valor1_atr2;
   soma2 = valor2_atr1 + valor2_atr2;


   char *nome1 = "";
   char *nome2 = "";

    switch (escolhido1) {
    case 1: nome1 = "Populacao"; break;
    case 2: nome1 = "Area"; break;
    case 3: nome1 = "PIB"; break;
    case 4: nome1 = "Pontos Turisticos"; break;
    case 5: nome1 = "Densidade Demografica"; break;
} 

    switch (escolhido2) {
    case 1: nome2 = "Populacao"; break;
    case 2: nome2 = "Area"; break;
    case 3: nome2 = "PIB"; break;
    case 4: nome2 = "Pontos Turisticos"; break;
    case 5: nome2 = "Densidade Demografica"; break;
}


  printf("\n====== RESULTADO DA RODADA ======\n");
  printf("Paises: %s vs %s\n\n", cidade1, cidade2);

  printf("Atributos: %s e %s\n", nome1, nome2);
  printf("%-18s %-10s %-10s\n", "", cidade1, cidade2);
  printf("%-18s %.2f       %.2f\n", nome1, valor1_atr1, valor2_atr1);
  printf("%-18s %.2f       %.2f\n", nome2, valor1_atr2, valor2_atr2);
  printf("Soma: %.2f vs %.2f\n\n", soma1, soma2);

  char *vencedora;

  if (soma1 > soma2) {
    vencedora = "Carta 1";
} else if (soma2 > soma1) {
    vencedora = "Carta 2";
} else {
    vencedora = "Empate!";
}

  printf("Resultado: %s\n", vencedora);

return 0;
}