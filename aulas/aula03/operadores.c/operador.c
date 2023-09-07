#include <stdio.h>

int main()
{

// operador de atributo
int valor = 10;
valor = 20;

//operadores aritimeticos + - x /

int soma = 10 + 2;
int subtracao = 10 - 2;
int multipicacao = 10 * 2;
int divisao = 10/2;
int resto = 10%2;

//operadores incrementos e decremento
int pre_incremento = ++ soma; //soma + 1
int pre_decremento = -- soma; //soma - 1
int pos_incremento = soma ++; //soma + 1
int pos_decremento = soma --. //soma - 1

//operadores relacionais
int menor_que = 0 < 1;
int menor_igual = 0 <= 1;
int maior_que = 0 > 1;
int maior-igual = 0 >= 1;
int igual = 0 == 1;
int diferente = 0 != 1;

  //operadores logicos

int e = 0 < 1 && 1 < 10; //0 < x < 10
int ou = 0 < 1 || 1 > 10 // 0 < 1, 1 > 10
int nao = !0; //!0 = 1 !1 = 0



  return 0;
}