//4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>

int main(){
  float preco_inicial;
  float preco_final;
  float icms = 0.17;    
  float cofins = 0.076;                  
  float pis_pasep = 0.0165;
  float preco_final_com_impostos;
  printf("Digite o preço inicial do produto: \n");
  int deu_certo = scanf("%f", &preco_inicial);
  preco_final = (1 + icms + cofins + pis_pasep) * preco_inicial;
  printf("O preço final do produto é: %f \n", preco_final);
  return 0;
}