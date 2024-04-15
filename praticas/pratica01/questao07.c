//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>
int main(){
  float distancia;
  float angulo;
  float altura;
  printf("Digite a distancia percorrida pelo aviao :");
  int deu_certo = scanf("%f", &distancia);
  printf("Digite o angulo de inclinacao do aviao :");
  deu_certo = scanf("%f", &angulo);
  altura = distancia * sin(angulo * M_PI / 180);
  printf("A altura alcançada pelo aviao eh %.2f", altura);
  
  return 0;
}