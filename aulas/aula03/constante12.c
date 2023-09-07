//Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>

#cosnt ICMS 0.17f
#cosnt COFINS 0.76f
#const PIS_PASEP 0.0165f

int main ()

{

  float preco_produto = 100.0f;
  
  float valor_icms = preco_produto * ICMS;
  float valor_cofins = preco_produto * COFINS;
  float valor_pispasep = preco_produto * PIS_PASEP;
  float preco_final = (1 + ICMS + COFINS + PIS_PASEP)* preco_produto;

  return 0;
}