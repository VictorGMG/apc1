//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>

int main(){
  int valor_gb ;
  int valor_bytes;
  printf("Digite o valor em GB: \n");
  int deu_certo = scanf("%d", &valor_gb);
  valor_bytes = valor_gb * 1024 ;
  printf("O Valor em Bytes é %i", valor_bytes);
  return 0;
}