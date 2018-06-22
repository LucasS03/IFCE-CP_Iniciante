#include <stdio.h>

int main() {

    double a, b, c, media;

    scanf("%lf", &a); // Leio o valor de a
    scanf("%lf", &b); // Leio o valor de b
    scanf("%lf", &c); // Leio o valor de c

    media = ((a * 2) + (b * 3) + (c * 5)) / 10; // Faço o calculo e guardo na variavel media

    printf("MEDIA = %.1lf\n", media); // printa "MEDIA = " concatenada ao valor da variavel media com 1 casa decimal

    return 0;
}
