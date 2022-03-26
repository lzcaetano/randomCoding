#include <stdio.h>
#include <stdlib.h>

int main() {

	// Converter peso de um humano na terra para outro planeta
	// Formula : pesoPlaneta = (pesoTerra / 10) * gravidadePlaneta
	
	float pesoTerra;
	float gravPlaneta;
	int planetaEscolhido;
	
	printf("Defina seu peso na Terra em quilos; ");
	scanf("%f", &pesoTerra);
	printf("\nEscolha um planeta digitando o seu numero para converter o seu peso: \n\n N do Planeta - Nome - Gravidade relativa\n");
	printf("1 - Mercurio - 0.37\n2 - Venus - 0.88\n3 - Marte - 0.38\n4 - Jupiter - 2.64\n5 - Saturno - 1.15\n6 - Urano - 1.17\n");
	scanf("%d", &planetaEscolhido);
	
	if (planetaEscolhido == 1) {
		gravPlaneta = 0.37;
	} else {
		if (planetaEscolhido == 2) {
			gravPlaneta = 0.88;
		} else {
			if (planetaEscolhido == 3) {
				gravPlaneta = 0.38;
			} else {
				if (planetaEscolhido == 4) {
					gravPlaneta = 2.64;
				} else {
					if (planetaEscolhido == 5) {
						gravPlaneta = 1.15;
					} else {
						if (planetaEscolhido == 6) {
							gravPlaneta = 1.16;
						} else {
							printf("ERRO");
							return 0;
						}
					}
				}
			}
		}
	}
	
	
	float pesoPlaneta = (pesoTerra / 10) * gravPlaneta;
	printf("O seu peso no planeta escolhido e: %f", pesoPlaneta);
	
    getch();
}
