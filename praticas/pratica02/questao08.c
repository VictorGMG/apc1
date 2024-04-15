//8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

# include <stdio.h>
# include <math.h>

int main(){
  int x1, x2, y1, y2;
  float distancia;
  printf("digite o valor de x1 :");
  int deu_certo = scanf("%i", &x1);
  printf("digite o valor de x2 :");
  deu_certo = scanf("%i", &x2);
  printf("digite o valor de y1 :");
  deu_certo = scanf("%i", &y1);
  printf("digite o valor de y2 :");
  deu_certo = scanf("%i", &y2);
  distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("A distancia entre os dois pontos e %f\n", distancia);
  return 0;
}