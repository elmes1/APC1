//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>
int main()

{

float base = 0;
float altura = 0;
  
printf("Digite a base do triangulo\n");
scanf("%f", &base);
printf("Digite a altura do triangulo\n");
scanf("%f", &altura);
  
  
float area = base * altura/2.0f;

printf("A area e %.1f\n", area);

  return 0;
}