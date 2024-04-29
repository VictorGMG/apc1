#include <stdio.h>

int main(){

  int opcao;
  printf("menu principal");
  printf("1 - consultar saldo\n");
  printf("2 - Recarregar saldo \n ");
  printf("3 - Ligaçoes recebidas\n");
  printf("4 - Ligaçoes feitas");
  printf("0 - Sair\n");
  printf("Digite uma opcao: ");

  int leu_certo = scanf("%i", &opcao);

  switch(opcao){
    case 1: printf("Seu Saldo é de R$10.00\n");break;
    case 2: {printf("entre com o valor da recarga: ");break;
    leu_certo = scanf("i", opcao);
            }
    case 3 :{
      printf("As ultimas ligaçoes feitas\n");
      printf("9999-9999");
      printf("8888-8888");
      printf("7777-7777");
      break;
    }
    case 4 :{
      printf("As Ultimas ligaçoes feitas ");
      printf("5555-5555");
      printf("666-666");
      printf("4444-4444");
      break;
        }
    case 0: printf("Ate Logo");break;
    default:printf("Opcao invalida");
    
  }
  
  return 0;
}