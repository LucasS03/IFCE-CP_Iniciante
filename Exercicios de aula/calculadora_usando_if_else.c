#include <stdio.h>

using namespace std;

int main() {

  int a, b; // vai guardar os dois numeros a serem calculados
  char op; // vai guardar a operacao que o usuario deseja

  printf("Digite a operacao (+, -, * ou /): "); // Mostra o texto entre aspas no console
  scanf("%c", &op); // le o caractere digitado e guarda na variavel char op
  setbuf(stdin, NULL);

  printf("Digite o primeiro numero: "); // Mostra o texto entre aspas no console
  scanf("%d", &a); // le o numero digitado e guarda na variavel inteira a

  printf("Digite o segundo numero: "); // Mostra o texto entre aspas no console
  scanf("%d", &b); // le o numero digitado e guarda na variavel inteira b

  printf("O resultado de %d%c%d eh ", a, op, b); // printa "O resultado de a[op]b eh " (substitua o [op] pela operacao digitada)

  // OBS.: So vai para o proximo IF se o anterior for FALSE
  // Quando um IF for TRUE, eh executado o que tiver no bloco de intrucao dele
  // e os outros ELSE IF nao sou executados
  if(op == '+'){ // Se op for +
    printf("%d\n", a+b); // print a soma de a e b
  } else if(op == '-'){ // se op for -
    printf("%d\n", a-b); // print a subtracao de a e b
  } else if(op == '*'){ // se op for *
    printf("%d\n", a*b); // print a multiplicacao de a e b
  } else if(op == '/'){ // se op for /
    printf("%d\n", a/b); // print a (parte inteira da) divisao de a e b
  }

  return 0;
}
