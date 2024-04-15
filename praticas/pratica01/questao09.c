//Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>

int main(){
  int anos, meses, dias;
  int idade_em_dias;
  printf("Digite a idade em anos: ");
  int deu_certo = scanf("%i", &anos);
  printf("Digite a idade em meses: ");
  deu_certo = scanf("%i", &meses);
  printf("Digite a idade em dias: ");
  deu_certo = scanf("%i", &dias);
  idade_em_dias = anos * 365 + meses * 30 + dias;
  printf("A idade em dias é %i\n", idade_em_dias);
  
  return 0;
}