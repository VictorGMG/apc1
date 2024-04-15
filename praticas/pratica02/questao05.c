//5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>

int main(){
  float peso;
  float altura;
  float imc;
  printf("digite o peso :");
  int deu_certo = scanf("%f", &peso);
  printf("digite a altura :");
  deu_certo = scanf("%f", &altura);
  imc = peso / (altura * altura);
  printf("O imc eh : %f\n", imc);
  

  return 0;
}