#include <stdio.h>

int main(void) {
  int n1;

  printf("Digite um número: ");
  scanf("%d", &n1);

  if(n1 == 5 || n1 == 200 || n1 == 400){
    printf("O número %d é igual a 5, 200 ou 400", n1);
  }
  else if(n1 >= 500 && n1 <= 1000) {
    printf("O número %d está entre 500 e 1000", n1);
  }
  else {
    printf("O número %d não está entre 500 e 1000", n1);
  }

return 0;
}