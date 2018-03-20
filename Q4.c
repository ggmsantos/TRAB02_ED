/*
	Função: Exibir todos os numeros inteiros impares de 50 ate 1
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int i;

  for (i = 50; i >= 1; i--){
    if (i % 2 == 1){
      printf("%d\n", i);
    }
  }

  return 0;
}
