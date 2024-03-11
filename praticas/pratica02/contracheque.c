#include <stdio.h>

int main(){
  float valor_hora_trabalhada = 150.f;
  int total_horas_trabalhadas = 200;
  const float IR = 0.25f;
  const float INSS = 0.11f;
  float salario_bruto = valor_hora_trabalhada * total_horas_trabalhadas;
  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - (valor_ir + valor_inss);
  printf("\x1b[31m-------------------------\n");
  printf("      CONTRA CHEQUE       \n");
  printf("-------------------------\x1b[0m\n");
  printf("Salario Bruto..: R$\x1b[34m%8.2f\x1b[0m\n", salario_bruto);
  printf("Valor IR.......: R$\x1b[31m%8.2f\x1b[0m\n", valor_ir);
  printf("Valor INSS.....: R$\x1b[31m%8.2f\x1b[0m\n", valor_inss);
  printf("Salario Liquido: R$\x1b[34m%8.2f\x1b[0m\n", salario_liquido);
  
  return 0;
}