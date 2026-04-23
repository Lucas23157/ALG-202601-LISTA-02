#include <stdio.h>

int main() {
    int num, i;
    long long fatorial = 1;  
    
    printf("Calculo do fatorial\n");
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Nao existe fatorial de numero negativo!\n");
    } else {
        printf("%d! = ", num);
        
        for (i = num; i >= 1; i--) {
            fatorial *= i;
            
            
            if (i == num) {
                printf("%d", i);
            } else {
                printf(".%d", i);
            }
        }
        
        if (num == 0) {
            printf("1");
            fatorial = 1;
        }
        
        printf(" = %lld\n", fatorial);
    }
    
    system("pause");
    return 0;
}
