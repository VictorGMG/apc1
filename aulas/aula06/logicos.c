#include <stdio.h>

int main(){
  int numero1;
  int numero2;
  printf("Digite o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo numero ");
  deu_certo = scanf("%i", &numero2);

  //0 < numero1 <10
  int maior_que_zero_menor_que_dez = 0<numero1  && numero1 < 10;
  printf("O primeiro numero eh maior que 0 e menor que 10 ? %i\n", maior_que_zero_menor_que_dez);
  //0 < numero1 >10
  int menor_que_zero_maior_que_dez = numero1 <0  && numero1 > 10;
  printf("O primeiro numero eh menor que 0 e maior que 10 ? %i\n",menor_que_zero_maior_que_dez);

  int nao_menor_maior_que_zero = !(numero1 >0);
  printf("O primeiro numero nao eh menor que 0 ? %i\n",nao_menor_maior_que_zero);
  
return 0;
}