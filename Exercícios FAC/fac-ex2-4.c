#include <stdlib.h>
#include <stdio.h>

int main() {

    // Exibir o custo de uma viagem em reais
    // Adquirir percurso em quilometros da viagem
    // Adquirir o preço or litro combustivel
    // Adquirir o numero de quilometros que o carro percorre por litro de combustilvel

    float percursoKm;
    float precoLitro;
    float kmPorLitro;

    printf("DETERMINAR A QUANTIDADE DE COMBUSTIVEL EM LITROS QUE SERA CONSUMIDA NA VIAGEM E O CUSTO TOTAL DO MESMO\n\n");
    printf("Digite o percurso em quilometros da viagem: ");
    scanf("%f", &percursoKm);

    printf("\nDigite o preco por litro do combustivel: ");
    scanf("%f", &precoLitro);

    printf("\nDigite quantos quilometros o carro e capaz de percorrer por litro de combustivel: ");
    scanf("%f", &kmPorLitro);

    float combustivelConsumido = percursoKm / kmPorLitro;
    float custoTotal = combustivelConsumido * precoLitro;

    printf("\nA quantidade de litros de combustivel que sera consumida na viagem e: %f", combustivelConsumido);
    printf("\nO custo total da viagem e de: R$ %f", custoTotal);

    getch();
}