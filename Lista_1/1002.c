#include <stdio.h>

int main() {

    double pi = 3.14159; // Eh informado na questao que o valor de pi a ser considerado eh 3.14159
    double area, raio;

    scanf("%lf", &raio); // Leio o valor e guardo na variavel raio

    area = pi * (raio * raio); // Calculo a area e guardo o valor na variavel area
    //  OBS.: abaixo, o ".4" em "%.4lf", determina quantas casas decimais serao impressas. No caso, 4 casas decimais
    printf("A=%.4lf\n", area); // printa "A=" concatenada ao valor de area.

    return 0;
}
