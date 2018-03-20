/*
	Função: Saber qual numero é maior, menor, ou se são iguais
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int num1, num2;

  printf("Informe dois numeros:\n");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2){
    printf("O maior e: %d", num1);
  } else {
    if (num2 > num1){
      printf("O maior e: %d", num2);
    } else {
      if (num1 == num2){
        printf("Os numeros sao iguais");
      }
    }
  }

  return 0;
}
