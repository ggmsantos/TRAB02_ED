/*
	Função: Ler os coeficientes de uma equação de segundo grau. Em seguida calcular as raizes da equação
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  float del, a, b, c, x1, x2;

  printf("Informe os valores da equacao, A, B e C:\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a != 0){

    //Formula para achar delta
    del = ((b*b) - 4 * a * c);

    if (del < 0){
      printf("Nao existe raiz!\n");
    } else {
      if (del == 0){
        printf("Raiz unica!\n");
      } else {
        if (del > 0){
          x1 = ((-b + sqrt(del)) / 2 * a);
          x2 = ((-b - sqrt(del)) / 2 * a);

          printf("A raiz de x1: %.2f\n", x1);
          printf("A raiz de x2: %.2f\n", x2);
        }
      }
    }
  } else {
    if (a == 0){
      printf("Nao e uma equacao de segundo grau\n");
    }
  }
  return 0;
}
