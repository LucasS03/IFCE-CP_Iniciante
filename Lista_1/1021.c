#include <stdio.h>

int main() {

    float valor;
    float resto;
    scanf("%f", &valor);

    printf("NOTAS:\n");

    int cem = valor / 100.0;
    resto = valor - (cem * 100.0);
    printf("%d nota(s) de R$ 100.00\n", cem);

    int cinquenta = resto / 50.0;
    resto = resto - (cinquenta * 50.0);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);

    int vinte = resto / 20;
    resto = resto - (vinte * 20.0);
    printf("%d nota(s) de R$ 20.00\n", vinte);

    int dez = resto / 10;
    resto = resto - (dez * 10.0);
    printf("%d nota(s) de R$ 10.00\n", dez);

    int cinco = resto / 5;
    resto = resto - (cinco * 5.0);
    printf("%d nota(s) de R$ 5.00\n", cinco);

    int dois = resto / 2;
    resto = resto - (dois * 2.0);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");

    int m_um = resto / 1;
    resto = resto - (m_um * 1.0);
    printf("%d moeda(s) de R$ 1.00\n", m_um);

    int m_cinquenta = resto / 0.5;
    resto = resto - (m_cinquenta * 0.5);
    printf("%d moeda(s) de R$ 0.50\n", m_cinquenta);

    int m_vinte = resto / 0.25;
    resto = resto - (m_vinte * 0.25);
    printf("%d moeda(s) de R$ 0.25\n", m_vinte);

    int m_dez = resto / 0.1;
    resto = resto - (m_dez * 0.1);
    printf("%d moeda(s) de R$ 0.10\n", m_dez);

    int m_cinco = resto / 0.05;
    resto = resto - (m_cinco * 0.05);
    printf("%d moeda(s) de R$ 0.05\n", m_cinco);

    int m_umc = resto / 0.01 + 0.1;
    printf("%d moeda(s) de R$ 0.01\n", m_umc);
    
    return 0;
}
