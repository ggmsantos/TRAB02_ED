/*
	Função: Exibir todos os numeros inteiros pares de 1 ate N, digitado pelo
  usuário
	Autor: Gabriel Maciel dos Santos
	Data: 16/03/18
*/

#include <stdio.h>

int main(){

  int i, num;

  printf("Digite um número:\n");
  scanf("%d", &num);

  //Se for positivo
  if (num > 0){
    for (i = 1; i <= num; i++){
      if (i % 2 == 0){
        printf("%d\n", i);
      }
    }
  // Se for negativo
  } else {
    for (i = 1; i >= num; i--){
      if (i % 2 == 0){
        printf("%d\n", i);
      }
    }
  }

  return 0;
}
