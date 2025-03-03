#include <stdio.h>

int main() {
	
		char estado[1];
		char codigo[20];
		char nome[20];
		int populacao;
		float Area;
		float PIB;
		int pontos;
		
		printf("carta 1\n");
		
		printf ("Estado:", estado);
		scanf("%s", &estado); //Não utilizar & em string
		
		printf("codigo da carta:", codigo);
		scanf("%s", &codigo);//Não utilizar & em string
		
		printf("nome da cidade:", nome);
		scanf("\n%20[^\n]s", nome);
		
		printf("populacao:", populacao);
		scanf("%d", &populacao);
		
		printf("Area em km²:", Area);
		scanf("%f", &Area);
		
		printf("PIB:", PIB);
		scanf("%f", &PIB);
		
		printf("pontos turisticos:", pontos);
		scanf("%d", &pontos);
		
		printf("\n---------------------\n\n");
		
		printf("carta 2\n");
		
		printf ("Estado:", estado);
		scanf("%s", &estado);//Não utilizar & em string
		
		printf("codigo da carta:", codigo);
		scanf("%s", &codigo);//Não utilizar & em string
		
		printf("nome da cidade:", nome);
		scanf("\n%20[^\n]s", nome);
		
		printf("populacao:", populacao);
		scanf("%d", &populacao);
		
		printf("Area em km²:", Area);
		scanf("%f", &Area);
		
		printf("PIB:", PIB);
		scanf("%f", &PIB);
		
		printf("pontos turisticos:", pontos);
		scanf("%d", &pontos);
		
		

	return 0;
}
