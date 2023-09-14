#include <stdio.h>

int main() {
  char caracter = 127;
  int inteiro = caracter; // conversão implícita 
  float flutuante = inteiro; // conversão implícita com ressalva nas casas decimais 
  double duplo = flutuante; // conversão implícita 

  printf("o caracter %d convertido com inteiro %d\n", caracter, inteiro);
  printf("o inteiro %d convertido com flutuante %f\n", inteiro, flutuante);
  printf("o flutuante %f convertido com duplo %f\n", flutuante, duplo);
  
duplo = 270.1234567890;
flutuante = (float) duplo; //conversao explicita
  inteiro = (int) flutuante; //conversao explicita
  caracter = (char)inteiro; //conversao explicita

  printf("O duplo %f convertido em flutuante %f\n", duplo,flutuante);
  printf("O flutuante %f convertido em inteiro %d\n", flutuante,inteiro);
  printf(" O inteiro %d convertido em caracter %d\n", inteiro, caracter);
  return 0;
}