#include <stdio.h>

int main(){
  int avaliacao;
  printf("Digite a avaliacao do cliente :");
  int deu_certo = scanf("%i", &avaliacao);
switch(avaliacao){
  case 1: printf("Motorista Ganhou *\n");break;
  case 2: printf("Motorista ganhou **\n");break;
  case 3: printf("Motorista ganhou ***\n");break;
  case 4: printf("Motorista ganhou ****\n");break;
  case 5: printf("Motorista ganhou *****\n");break;
  default:printf("Avaliação invalida");
  
}
  return 0;
}

