#include <stdio.h>

int main(){
  int numero1;
  int numero2;
  printf("digite o primeiro numero :");
  int deu_certo = scanf("%i", &numero1);
  printf("digite o segundo numero:");
  deu_certo = scanf("%i", &numero2);

  int resto_da_divisao = numero1 % numero2;
  printf("O resto da divisao entre %i e %i é %i\n",numero1,numero2,resto_da_divisao);
  
  return 0;
}