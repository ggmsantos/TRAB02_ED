/*
	Função: Ler um numero e exibir os 10 sucessores deste numero
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int num, i, sucessor, aux;
  sucessor = 0;

  printf("digite um numero:\n");
  scanf("%d", &num);
  aux = num;

  for (i = 0; i <= 10; i++){
    sucessor = aux;
    aux = sucessor + 1;

    printf("%d\n", sucessor);
  }

  return 0;
}
