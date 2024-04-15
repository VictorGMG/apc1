//4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

# include <stdio.h>

int main(){

  float largura , comprimento , area , hectares;
  printf("Digite a largura do terreno :");
  int deu_certo = scanf("%f", &largura);
  printf("Digite o comprimento do terreno :");
  deu_certo = scanf("%f", &comprimento);
  area = largura * comprimento;
  hectares = area / 10000;
  printf("A area do terreno eh %.2f hectares\n", hectares);
  return 0;
}