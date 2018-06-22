#include <stdio.h>

int main() {

    double a, b, media;

    scanf("%lf", &a); // Leio o valor de a
    scanf("%lf", &b); // Leio o valor de b

    media = ((a * 3.5) + (b * 7.5)) / 11; // calculo e guardo o resultado na variavel media

    printf("MEDIA = %.lf\n", media); // printa "MEDIA = " concatenada ao valor da variavel media

    return 0;
}
