#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* Criado por lzCaetano */

int decimalToBynary(int number);
int binaryToDecimal(int number);
int selection, num;

int main() {

    system("cls");
    printf("Conversor de binario para decimal\nDesenvolvido por lzCaetano\n\n");
    printf("Insira o tipo de numero a ser convertido\n 1. Decimal\n 2. Binario\n\n");
    scanf("%d", &selection);
    printf("\nInsira o valor a ser convertido: ");
    scanf("%d", &num);
    
    selection == 1 
        ?decimalToBynary(num)
        :(selection == 2 
            ?binaryToDecimal(num)
            :printf("Valor invalido!")); 
}

int decimalToBynary(int number) {

    int count, binArray[100];
    for (count = 0; num > 0; count++) {
        binArray[count] = num%2;
        num = num/2;
    }

    printf("\nA valor em binario do numero inserido e: %d", binArray[count]);
    for (count = count -1; count >= 0; count--) {
        printf("%d", binArray[count]);
    }
    getch();  
}

int binaryToDecimal(int number) {

    int dNum=0, rem, base=1;
    
    while (number > 0) {
        rem = number % 10;
        dNum = dNum + rem * base;  
        number = number / 10; 
        base = base * 2;  
    }

    printf("O numero em decimal e: %d", dNum);
    getch();  
}
