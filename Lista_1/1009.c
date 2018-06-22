#include <stdio.h>

int main() {

    char nome[300];
    double salario, montante, bonus;

    scanf("%s", nome); // leio a string e guardo no vetor
    setbuf(stdin, NULL); // limpo o buffer do teclado

    scanf("%lf", &salario); // leio o valor de salario
    scanf("%lf", &montante); // leio o valor de montante

    bonus = (montante * 15) / 100; // calculo e guardo o resultado em bonus

    printf("TOTAL = R$ %.2lf\n", salario + bonus); // printa "TOTAL = R$ " concatenado a soma de salario e bonus

    return 0;
}
