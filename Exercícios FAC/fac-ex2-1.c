#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//IMC = peso / altura�
	//Determinar a condi��o de um adulto com base no seu peso e altura, al�m de utilizar a tabela de IMC para adultos
	
	float kg, h;
	
	printf("Digite seu peso em quilos: ");
	scanf("%f", &kg);
	printf("Digite sua altura em metros: ");
	scanf("%f", &h);
	float imc = kg / (h*h);
	printf("Seu IMC e: %f\n\n", imc);
	
	if (imc < 18.5) {
		printf("Sua classificacao e: ABAIXO DO PESO");
	} else {
		if (imc < 25) {
			printf("Sua classificacao e: PESO IDEAL");
		} else {
			if (imc < 30) {
				printf("Sua classificacao e: SOBREPESO");
			} else {
				if (imc < 35) {
					printf("Sua classificacao e: OBESIDADE GRAU I");
				} else {
					if (imc < 40) {
						printf("Sua classificacao e: OBSEIDADE GRAU II");
					} else {
						printf("Sua classificacao e: OBESIDADE GRAU III");
					}
				}
			}
		}
	}
    getch();
}
