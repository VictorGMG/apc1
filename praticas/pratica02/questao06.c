//6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main(){
  int valor_compra;
  int ano_fabricacao;
  int ano_depreciacao;
  int depreciacao;
  printf("digite o valor de compra :");
  int deu_certo = scanf("%i", &valor_compra);
  printf("digite o ano de fabricacao :");
  deu_certo = scanf("%i", &ano_fabricacao);
  printf("digite o ano de depreciacao :");
  deu_certo = scanf("%i", &ano_depreciacao);
  depreciacao = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;
  printf("A depreciacao do veiculo eh %i\n", depreciacao);
  return 0;
  
}