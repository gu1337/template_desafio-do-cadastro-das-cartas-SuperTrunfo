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
	int opcao;
	
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
	
	printf("\n-------MENU DE COMPARAÇÃO-------\n");
	printf("1 - População.\n");
	printf("2 - Area.\n");
	printf("3 - PIB.\n");
	printf("4 - Pontos Turisticos.\n");
	printf("5 - Densidade Demográfica.\n");
	printf("Escolha uma opção.\n");
	scanf("%d", &opcao);
	
	
	printf("\n------RESULTADO------\n"); //Trocando a comparação direta do if e else e incluindo um menu para elecionar o que queremos comparar.
	
	switch(opcao){
	    case 1:
	    printf("Comparação da População.");
	    printf("%s: %lu\n", cidade1, populacao1);
	    printf("%s: %lu\n", cidade2, populacao2);
	     
	     if(populacao1 > populacao2){
	         printf("Carta 1 Venceu!\n");
	     }
	     else if(populacao2 > populacao1){
	         printf("Carta 2 Venceu!\n");
	     }
	     else{
	         printf("Empate!\n");
	     }
	     break;
	     
	     case 2:
	     printf("Comparando Área.\n");
	     printf("%s: %.2f\n", cidade1, area1);
	     printf("%s: %.2f\n", cidade2, area2);
	     
	     if(area1 > area2){
	         printf("Carta 1 Venceu!!\n");
	     }
	     else if(area2 > area1){
	         printf("Carta 2 Venceu!!\n");
	     }
	     else{
	         printf("Empate!\n");
	     }
	     break;
	    
	    case 3:
	    printf("Comparando PIB.\n");
	    printf("%s: %.2f\n", cidade1, pib1);
	    printf("%s: %.2f\n", cidade2, pib2);
	    
	    if(pib1 > pib2){
	        printf("Carta 1 Venceu!\n");
	    }
	    else if(pib2 > pib1){
	        printf("Carta 2 Venceu!\n");
	    }
	    else{
	        printf("Empate!\n");
	    }
	    break;
	    
	    case 4:
	    printf("Comparando Pontos Turisticos.\n");
	    printf("%s: %d\n", cidade1, pontos_turisticos1);
	    printf("%s: %d\n", cidade2, pontos_turisticos2);
	    
	    if(pontos_turisticos1 > pontos_turisticos2){
	        printf("Carta 1 Venceu!\n");
	    }
	    else if(pontos_turisticos2 > pontos_turisticos1){
            printf("Carta 2 Venceu!\n");	    
	    }
	    else{
	        printf("Empate!\n");
	    }
	    break;
	    
	    case 5:
	    printf("Comparando Densidade Demográfica.\n");
	    printf("%s: %.2f\n", cidade1, densidade1);
	    printf("%s: %.2f\n", cidade2, densidade2);
	    
	    if(densidade1 < densidade2){
	        printf("Carta 1 Venceu!\n");
	    }
	    else if(densidade2 < densidade1){
	        printf("Carta 2 Venceu!\n");
	    }
	    else{
	        printf("Empate!\n");
	    }
	    break;
	    
	    default:
	       printf("ERROR!\n");
	}  
    
	   return 0;	
    }
