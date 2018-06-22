#include <stdio.h>

int main() {

    int num, horas;
    double valor, salario;

    scanf("%d", &num); // leio o valor de num
    scanf("%d", &horas); // leio o valor de horas
    scanf("%lf", &valor); // leio o valor de valor

    salario = horas * valor; // calculo e guardo o resultado na variavel salario

    printf("NUMBER = %d\n", num); // printa "NUMBER = " concatenada ao valor da variavel num
    printf("SALARY = U$ %.2lf\n", salario); // printa "SALARY = U$ " concatenada ao valor da variavel salario

    return 0;
}
