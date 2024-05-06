#include <stdio.h>
#include <locale.h>

int main () {
  //Allows to print UTF-8 characters such as "é, à, ç , etc."
  setlocale(LC_ALL, "");
  int n, c, i;
  printf("Digite um número: \n");
  scanf("%d", &n);
  printf("\nOs números primos entre 1 e %d são: \n", n);
  for(c = 2; c < n; c++){
    int prime = 1;
    if(c != n && c!= 1){
      for(i = 1; i < c; i++){
        if(i != c && i != 1 && c%i == 0) prime = 0;
      }
    }
    if(prime == 1) printf("%d\n", c);
  }
  return 0;
}