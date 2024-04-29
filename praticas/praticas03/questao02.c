// Faça um programa em C que calcule o valor do desconto sobre um valor bruto
// lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica
// 5%; acima de 500.00 aplica 10%

#include <stdio.h>

int main() {

  float valor_bruto;
  float valor_desconto;

  printf("Digite o valor total: ");
  int deu_certo = scanf("%f", &valor_bruto);

  if (deu_certo) {
    if (valor_bruto <= 100.00f) {
      valor_desconto = valor_bruto * 0.01f;
      printf("O valor com o desconto é de %.2f", valor_desconto);
    }
    else if  (valor_bruto <= 100.01f) {
        valor_desconto = valor_bruto * 0.05f; 
        printf("O valor com o desconto é de %.2f", valor_desconto);
      }
      
    else if (valor_bruto <= 500.00f) {
      valor_desconto = valor_bruto * 0.1f;
      printf("O valor com o desconto é de %.2f", valor_desconto);
    } else {
      printf("O Valor nao tem desconto ");
    }
  } else {
    printf("O valor nao é valido");
  }
  return 0;
}