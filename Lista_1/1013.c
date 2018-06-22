#include <stdio.h>
#include <stdlib.h> // biblioteca que contém a função abs()

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // Leio a, b e c

    a = (a + b + abs(a - b)) / 2; // guardo em a, o maior entre a e b
    c = (a + c + abs(a - c)) / 2; // guardo em c, o maior entre c e a (Lembre-se que a agora tem o valor do maior entre a e b)

    printf("%d eh o maior\n", c);

    return 0;
}
