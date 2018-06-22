#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int cem = x / 100;
    int resto = x % 100;

    int cinq = resto / 50;
    resto = resto % 50;

    int vinte = resto / 20;
    resto = resto % 20;

    int dez = resto / 10;
    resto = resto % 10;

    int cinco = resto / 5;
    resto = resto % 5;

    int dois = resto / 2;
    resto = resto % 2;

    int um = resto / 1;
    resto = resto % 1;

    printf("%d\n", x);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}
