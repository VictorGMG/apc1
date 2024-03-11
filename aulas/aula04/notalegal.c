#include <stdio.h>

int main()
{
printf("-------------------------\n");
printf("      NOTA LEGAL         \n");
printf("-------------------------\n");
printf("ITEM           QTD          PRECO \n");  
//printf("Banana prata     1   15.00\n");
//printf("Laranja         10   10.00\n");
//printf("Maça             6   30.00\n");

char item[31] = "banana parata"; 
int qtd = 1;
float preco = 15.0f;
printf("%-14s %03i %11.2f \n",item, qtd, preco);

char item2[31] = "suco";
qtd = 10;
preco = 10.0f;

printf("%-14s %03i %11.2f \n",item2, qtd, preco);

char item3[31] = "limao";
qtd = 6;
preco = 30.0f;

printf("%-14s %03i %11.2f \n",item3, qtd, preco);
printf("TOTAL              %11.2f\n",65.0f);
return 0 ;
  
}