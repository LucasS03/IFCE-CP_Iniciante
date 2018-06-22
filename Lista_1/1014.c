#include <stdio.h>

int main() {

    int X;
    double Y;
    scanf("%d %lf", &X, &Y); // Leio x e y

    double media = X / Y; // crio a variavel media e atribuo a ela a divisao de x por y

    printf("%.3lf km/l\n", media);

    return 0;
}
