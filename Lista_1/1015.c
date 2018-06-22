#include <stdio.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2;
    double distancia;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // A função sqrt retorna a raiz quadrada do que estiver entre seus parenteses (parâmetros)
    // a raiz quadrada então é atribuida a variavel distancia
    distancia = sqrt(((x2 - x1) * ((x2 - x1))) + ((y2 - y1) * (y2 - y1)));

    printf("%.4lf\n", distancia); // printa o resultado

    return 0;
}
