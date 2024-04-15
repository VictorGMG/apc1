///1.Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include <stdio.h>  

int main(){
  int a1 , a2 , media_final;
  printf("digite a primeira nota :");
  int deu_certo = scanf("%i", &a1);
  printf("digite a segunda nota :");
  deu_certo = scanf("%i", &a2);
  media_final = (0.4 * a1) + (0.6 * a2);
  printf("A media final é \x1b[31m%i\x1b[0m\n",media_final);

  return 0;
}