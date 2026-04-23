#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteado, tentativa, tentativas = 0;
    
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    // Sorteia um número de 0 a 100
    sorteado = rand() % 101;
    
    printf("=== JOGO DE ADIVINHACAO ===\n");
    printf("Tente adivinhar o numero sorteado (0 a 100)!\n\n");
    
    do {
        printf("Digite seu palpite: ");
        scanf("%d", &tentativa);
        tentativas++;
        
        if (tentativa > sorteado) {
            printf("O numero sorteado eh MENOR que %d\n\n", tentativa);
        } else if (tentativa < sorteado) {
            printf("O numero sorteado eh MAIOR que %d\n\n", tentativa);
        } else {
            printf("\nParabens! Voce acertou o numero %d em %d tentativas!\n", sorteado, tentativas);
        }
        
    } while (tentativa != sorteado);
    
    system("pause");
    return 0;
}
