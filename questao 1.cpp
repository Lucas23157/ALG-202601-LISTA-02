#include <stdio.h>

int main() {
    int total_segundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    total_segundos = total_segundos % 3600;

    minutos = total_segundos / 60;
    segundos = total_segundos % 60;

    printf("Resultado: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    system("PAUSE");

    return 0;
}
