#include <stdio.h>

int main() {

    int a, b, c, d, diferenca;

    scanf("%d", &a); // Leio o valor de a
    scanf("%d", &b); // Leio o valor de b
    scanf("%d", &c); // Leio o valor de c
    scanf("%d", &d); // Leio o valor de d

    diferenca = (a * b) - (c * d); // calculo a diferenca e guardo na variavel diferenca
    printf("DIFERENCA = %d\n", diferenca); // printa "DIFERENCA = " concatenada 

    return 0;
}
