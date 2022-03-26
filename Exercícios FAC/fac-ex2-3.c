#include <stdio.h>
#include <stdlib.h>

int main() {

    // O programa deve adquirir o preço de um produto
    // Informar o preço original do produto, o preço com 10% de disconto, o preço com parcelamento em 5 vezes sem juros e o preço com parcelamento em 10 vezes cm 20 porcento de acrescimo

    float pPreco;

    printf("Insira o preco original do produto: ");
    scanf("%f", &pPreco);

    float pPrecoDesc10 = pPreco - ((pPreco/100) * 10);
    float pPrecoParc5x = pPreco/5;
    float pPrecoParc10x = (pPreco + ((pPreco/100)*20)) / 10;

    printf("O valor com 10%c de desconto e: R$ %f", '%', pPrecoDesc10);
    printf("\nO valor parcelado em 5x e: R$ %f", pPrecoParc5x);
    printf("\nO valor parcelado em 10x (com 20%c de acrescimo ao valo) e: R$ %f", '%', pPrecoParc10x);
    getch();
}