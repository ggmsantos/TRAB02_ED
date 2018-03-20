/*
	Função: ler um numero inteiro positivo N e imprima todos os numeros naturais de 0 ate N
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int num, i;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  if (num > 0){
    for (i = 1; i <= num; i++){
      printf("%d\n", i);
    }
  } else {
    if (num < 0){
      printf("Numero nao-natural");
    }
  }

  return 0;
}
