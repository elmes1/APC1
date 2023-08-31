//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>
int main()

{
int base = 3;
int altura = 7;
  
float area = base * altura/2.0f;

printf("A area e %.1f\n", area);

  return 0;
}