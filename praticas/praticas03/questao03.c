//3. Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h>

int main(){

  int nota;
  printf("Digite a nota: ");
  int ler_nota = scanf("%i", &nota);

  switch(nota){
    case 1: printf("Ruim");break;
    case 2: printf("Insuficiente");break;
    case 3: printf("Suficiente");break;
    case 4: printf("Bom");break;
    case 5: printf("Ótimo");break;
    default: printf("Nota invalida");break;
  }
  return 0;
}