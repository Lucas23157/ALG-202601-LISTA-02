#include <stdio.h>

int main() {
    int num1, num2, mmc, a, b;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    a = num1;
    b = num2;
    
    
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    
    mmc = (num1 * num2) / a;
    
    printf("O MMC de %d e %d eh: %d\n", num1, num2, mmc);
    
    system("pause");
    return 0;
}

