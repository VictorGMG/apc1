//1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main(){
  
  int numero1;

  printf("Entre com um numero inteiro ");
  int deu_certo = scanf("%i", &numero1);
  if(deu_certo){
    if(numero1 % 2 == 0){
      printf("O numero %i é par!\n ", numero1);
    
    }
    else{
      printf("O numero %i é impar!\n ", numero1);
    
    }
  }
  
  return 0;
  
}