#include <stdio.h>
#include <locale.h>

int main () {
  //Allows to print UTF-8 characters such as "é, à, etc."
  setlocale(LC_ALL, "");
  int n, c;
  printf("Digite um número entre 1 e 10: \n");
  scanf("%d", &n);
  if(n < 1 || n > 10){
    printf("Número inválido! Ele deve estar entre 1 e 10.\n");
  }
  for(c = 0; c <= 10; c++){
    printf("%d x %d = %d\n", c, n, c*n);
  }
  return 0;
}