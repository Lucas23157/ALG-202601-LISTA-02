#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    
    letra = tolower(letra);
    
    if (letra >= 'a' && letra <= 'z') {
        switch(letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("A letra '%c' eh uma VOGA\n", letra);
                break;
            default:
                printf("A letra '%c' eh uma CONSOANTE\n", letra);
        }
    } else {
        printf("Erro: '%c' nao eh uma letra valida!\n", letra);
    }
    
    system ("PAUSE");
    
    return 0;
}
