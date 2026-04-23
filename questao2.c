
#include <stdio.h>

int main() {
    float i, n;
    float media;
    
    for (i=0;i<3;i++){
    
    printf("Digite um numero: \n");
    scanf("%f", &n);
    media = n /2;
    
    printf("%.2f\n", media);
}

system("pause");
    return 0;
}
