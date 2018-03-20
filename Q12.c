/*
	Função: Determine os 5 primeiros multiplos de 3 considerando numeros maiores que 0
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int num, i, aux;
  i = 1;
  num = 15;

  while (i <= 15){
    if (i % 3 == 0){
      printf("Multiplo de 3: %d\n", i);
    }
    i++;
  }

  return 0;
}
