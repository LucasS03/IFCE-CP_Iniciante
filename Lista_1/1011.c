#include <stdio.h>

int main() {

    // crio as variaveis e inicializo pi
    double raio;
    double pi = 3.14159;
    double volume;

    // leio o valor e guardo na variavel raio
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio; // faço o cálculo e guardo o resultado em volume

    printf("VOLUME = %.3lf\n", volume); // printa "VOLUME = " concatenada ao valor da variavel volume

    return 0;
}
