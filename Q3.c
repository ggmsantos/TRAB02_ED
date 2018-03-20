/*
	Função: Exibir todos os numeros inteiros pares de 1 ate 50
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int i;

  for (i = 1; i <= 50; i++){
    if (i % 2 == 0){
      printf("%d\n", i);
    }
  }

  return 0;
}
