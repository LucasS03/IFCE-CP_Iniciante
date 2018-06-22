#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int anos = x / 365;
    int resto = x % 365;

    int meses = resto / 30;
    resto = resto % 30;

    int dias = resto;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
