#include <stdio.h>
#include <math.h>
int main(){
  int numero1;
  int numero2;
  int numero3;
  const double PI = 3.14;
  printf("formula da equacao \x1b[31m(-b +/- raiz_quadrada(b² - 4ac)/2a).\x1b[0m\n");
  printf("digite o numero da variavel a :\n");
  int deu_certo = scanf("%i", &numero1);
  printf("digite o numero da variavel b :\n");
  deu_certo = scanf("%i", &numero2);
  printf("digite o numero da variavel c :\n");
  deu_certo = scanf("%i", &numero3);

  float resultado = (-numero2 + sqrt(pow(numero2,2) - 4*numero1*numero3))/2*numero1;
  printf("O Resultado é \x1b[31m%f\x1b[0m \n" , resultado);
  return 0 ;
}