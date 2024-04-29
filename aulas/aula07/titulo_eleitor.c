#include <stdio.h>

int main() {

  int idade;
  printf("Digite a idade: ");
  int deu_certo = scanf("%i", &idade);
  if (deu_certo) {
    if (idade < 16) {
      printf("ainda não pode votar\n");
    } else if (idade >= 18 && idade <= 70) {
      printf("Obrigatorio votar\n");
    } else {
      printf("opicional votar\n");
    }
  else {
    printf("idade invalida\n");
}
  }
  return 0;
}