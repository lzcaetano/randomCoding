#include <stdio.h>
#include <stdlib.h>

int main () {

    // Adquirir três numeros inteiros
    // Adquirir um valor inteiro (i) e comparar ele a uma lista

    // caso i = 1; exibir os três numeros em ordem crescente
    // caso i = 2; exibir os valores em ordem decrescente
    // caso i = 3; exibir o maior valor entre os outros dois

    int num1, num2, num3, i;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro numero: ");
    scanf("%d", &num3);

    int numMax, numMid,numMin;

    if (num1 >= num2 && num1 >= num3) {
        numMax = num1;
        if (num2 >= num3) {
            numMid = num2;
            numMin = num3;
        } else {
            numMid = num3;
            numMin = num2;
        }
    } else {
        if (num2 >= num1 && num2 >= num3) {
            numMax = num2;
            if (num1 >= num3) {
                numMid = num1;
                numMin = num3;
            } else {
                numMid = num3;
                numMin = num1;
            }
        } else {
            if (num3 >= num1 && num3 >= num2) {
                numMax = num3;
                if (num1 >= num2) {
                    numMid = num1;
                    numMin = num2;
                } else {
                    numMid = num2;
                    numMin = num1;
                }
            }
        }
    }

    printf("Digite o numero que representara o que deve ser feito com os numeros: \n");
    printf(" 1 - Os tres valores serao exibidos em ordem crescente\n 2 - Os tres valores serao exibidos e ordem decrescente\n 3 - O maior dos numeros sera exibido entre os outros dois\n");
    scanf("%d", &i);

    if (i == 1) {
        printf("Resultado: \n %d\n %d\n %d", numMax, numMid, numMin);
    } else {
        if (i == 2) {
            printf("Resultado:\n %d\n %d\n %d", numMin, numMid, numMax);
        } else {
            if (i == 3) {
                printf("Resultado:\n %d\n %d\n %d", numMid, numMax, numMin);
            } 
        }
    }
    
    getch();
}