//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>
#include <math.h>

int main() {
  
  int valor_em_giga = 10;
  
  double valor_em_bytes = valor_em_giga * pow(1024, 3);
  
  printf(" O valor %d dem gigabytes equivale a %f\n", valor_em_giga, valor_em_bytes);
  
  return 0;
}
