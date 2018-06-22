#include <stdio.h>

int main() {

    int x, horas, minutos, segundos;
    scanf("%d", &x);

    horas = x / 3600;
    int resto = x % 3600;

    minutos = resto / 60;
    resto = resto % 60;

    segundos = resto;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
