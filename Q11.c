/*
	Função: Usuario digita 10 valores e imprimir a soma deles
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int num, i, soma;
  soma = 0;

  for (i = 1; i <= 10; i++){
    printf("Digite um valor:\n");
    scanf("%d", &num);

    soma = soma + num;
  }

  printf("A soma de todos os numeros: %d\n", soma);
  return 0;
}
