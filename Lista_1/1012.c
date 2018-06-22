#include <stdio.h>

int main() {

    // Crio as variaveia e inicializo pi
    double A, B, C;
    double pi = 3.14159;

    // Leio a, b e c
    scanf("%lf %lf %lf", &A, &B, &C);

    // Crio as variaveis e atribuo a elas o determinado calculo
    double areaT = (A * C) / 2;
    double areaC = pi * (C * C);
    double areaTrapezio = ((A + B)*C)/2;
    double areaQ = B * B;
    double areaR = A * B;

    // Apresento o resultado
    printf("TRIANGULO: %.3lf\n", areaT);
    printf("CIRCULO: %.3lf\n", areaC);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQ);
    printf("RETANGULO: %.3lf\n", areaR);

    return 0;
}
