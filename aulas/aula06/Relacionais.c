#include <stdio.h>

int main();{
int numero1;
int numero2;

printf("Digite o primeiro numero: ");
int deu_certo = scanf("%i", &numero1);

printf("Digite o segundo numero: ");
deu_certo = scanf("%i", &numero2);

int sao_iguais = numero1 == numero2;
printf("sao iguais? %i\n", sao_iguais);

int sao_diferentes = numero1 != numero2;
printf("sao diferentes? %i\n", sao_diferentes);
  
int eh_maior = numero1 > numero2;
printf("eh maior? %i\n", eh_maior);

int eh_menor = numero1 < numero2;
printf("O Primeiro numero eh menor? %i\n", eh_menor);

int eh_maior_ou_igual = numero1 >= numero2;
printf( "O Primeiro numero é maior ou igual? %i\n", eh_maior_ou_igual);
int eh_menor_ou_igual = numero1 <= numero2;
printf( "O Primeiro numero é menor ou igual? %i\n" , eh_menor_ou_igual););
return 0;
}

#include <stdio.h>

// int main() {
//     int numero1;
//     int numero2;

//  printf("Entre com o primeiro numero: ");
//     int deu_certo = scanf("%i", &numero1);

//     printf("Entre com o segundo numero: ");
//     deu_certo = scanf("%i", &numero2);

//     int sao_iguais = numero1 == numero2;
//     printf("Os numeros são iguais? %i\n", sao_iguais);

//     int sao_diferentes = numero1 != numero2;
//     printf("Os numeros são diferentes? %i\n", sao_diferentes);

//     int eh_maior = numero1 > numero2;
//     printf("O primero numero é maior? %i\n", eh_maior);

//     int eh_menor = numero1 < numero2;
//     printf("O primero numero é menor? %i\n", eh_menor);

//     int eh_maior_igual = numero1 >= numero2;
//     printf("O primero numero é maior ou igual? %i\n", eh_maior_igual);

//     int eh_menor_igual = numero1 <= numero2;
//     printf("O primero numero é menor ou igual? %i\n", eh_menor_igual);
//     return 0;}
