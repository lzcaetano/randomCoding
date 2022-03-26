#include <stdio.h>
#include <stdlib.h>

int main() {

    // Receber um código que irá especificar um produto de uma lista
    // Receber a quantidade desse determinado produto
    // Calcular, com base na tabela, o preço final
    //
    // 100 - Cachorro quente - R$ 3,50
    // 101 - Bauru simples - R$ 4,30
    // 102 - Bauru com ovo - R$ 5,20  
    // 103 - Hamburguer - R$ 3,00
    // 104 - Cheeseburger - R$ 4,00
    // 105 - Refrigerante - R$ 2,50

    int codProduto;
    float precoProduto;
    int qtdProduto;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codProduto);

    switch (codProduto) {
        case 100: precoProduto = 3.5; break;
        case 101: precoProduto = 4.3; break;
        case 102: precoProduto = 5.2; break;
        case 103: precoProduto = 3.0; break;
        case 104: precoProduto = 4.0; break;
        case 105: precoProduto = 2.5; break;
        default: printf("ERRO"); break;
    }

    printf("\nDigite a quantidade adquirida do produto: ");
    scanf("%d", &qtdProduto);

    float precoFinal = precoProduto * qtdProduto;
    printf("\nO preco final do(s) produto(s) sera de: R$ %f", precoFinal);

    getch();
}