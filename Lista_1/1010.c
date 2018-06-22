#include <stdio.h>

int main() {

    int cod, cods, qnt, qnts;
    float preco, precos, valor;

    // Leio as variaveis
    scanf("%d", &cod);
    scanf("%d", &qnt);
    scanf("%f", &preco);

    scanf("%d", &cods);
    scanf("%d", &qnts);
    scanf("%f", &precos);

    valor = (preco * qnt) + (precos * qnts); // Guardo o resultado do calculo na variavel valor

    printf("VALOR A PAGAR: R$ %.2f\n", valor);

    return 0;
}
