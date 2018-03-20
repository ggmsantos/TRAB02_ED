/*
	Função: ler um numero inteiro positivo N e imprimir os N primeiros numeros naturais impares
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
      if (i % 2 == 1){
        printf("%d\n", i);
      }
    }
  } else {
    if (num < 0){
      printf("Numero nao-natural");
    }
  }

  return 0;
}
