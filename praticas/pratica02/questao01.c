//1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números

#include <stdio.h>

int main(){

  float numero1;
  float numero2;
  float numero3;
  float meida_aritimetica ;
  printf("digite o primeiro numero :");
  int deu_certo = scanf("%f", &numero1);
  printf("digite o segundo numero :");
  deu_certo = scanf("%f", &numero2);
  printf("digite o terceiro numero :");
  deu_certo = scanf("%f" , &numero3);
  meida_aritimetica = (numero1 + numero2 + numero3) / 3;
  printf("A media aritimetica é %f\n", meida_aritimetica);
  
  return 0;
}