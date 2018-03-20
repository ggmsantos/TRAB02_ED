/*
	Função: Ler um numero e se for positiivo mostrar o quadrado e a raiz quadrada
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  int num, q, raizq;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  if (num > 0){

    q = (num * num);
    raizq = sqrt(num);

    printf("O numero ao quadrado: %d", q);
    printf("Raiz quadrada: %d", raizq);
  } else {
    if (num < 0){
      printf("Operacao Invalida");
    }
  }

  return 0;
}
