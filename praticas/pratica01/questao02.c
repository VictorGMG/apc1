//2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>

int main(){
  int base , altura , area;
  printf("digite o valor da base :");
  int deu_certo = scanf("%i", &base);
  printf("digite o valor da altura :");
  deu_certo = scanf("%i", &altura);
  area = (base * altura) / 2;
  printf("A area do triangulo é \x1b[31m%i\x1b[0m\n",area);

return 0;
}