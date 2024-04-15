//10. Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

#include <stdio.h>

int main(){
  int numero;
  
  printf("Digite um numero: ");
  int deu_certo = scanf("%i", &numero);
  printf("A Tabuada do numero %i é :\n", numero);
  printf("%i x 1 = %i\n", numero, numero * 1);
  printf("%i x 2 = %i\n", numero, numero * 2);
  printf("%i x 3 = %i\n", numero, numero * 3);
  printf("%i x 4 = %i\n", numero, numero * 4);
  printf("%i x 5 = %i\n", numero, numero * 5);
  printf("%i x 6 = %i\n", numero, numero * 6);
  printf("%i x 7 = %i\n", numero, numero * 7);
  printf("%i x 8 = %i\n", numero, numero * 8);
  printf("%i x 9 = %i\n", numero, numero * 9);
  printf("%i x 10 = %i\n", numero, numero * 10);
  printf("Esta é a tabuada do numero %i\n", numero);
  return 0;
  
}