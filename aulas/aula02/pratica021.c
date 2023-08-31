//Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.


#include <stdio.h>
int main()
{
int raio = 15;
float PI = 3.1416f;
float perimetro = 2 * PI * raio;
printf("O perimetro e %f\n", perimetro);
  
  return 0;
}