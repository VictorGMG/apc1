// 3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){
  int raio , perimetro;
   const double PI = 3.1416;
  printf("digite o valor do raio :");
  int deu_certo =scanf("%i", &raio);
  perimetro = 2 * PI * raio;
  printf("O Perimetro e %i\n",perimetro);
return 0 ;
}