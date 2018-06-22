#include <stdio.h>

int main() {

    int horas, velocidade;
    scanf("%d %d", &horas, &velocidade);

    double dist = velocidade * horas;
    double litros = dist / 12;

    printf("%.3lf\n", litros);

    return 0;
}
