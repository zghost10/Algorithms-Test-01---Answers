#include <stdio.h>
#include <locale.h>

int main () {
  //Allows to print UTF-8 characters such as "é, à, ç , etc."
  setlocale(LC_ALL, "");
  int n, c, sum = 0;
  printf("Digite um n�mero inteiro positivo: \n");
  scanf("%d", &n);
  for(c = 1; c < n; c++){
    if(n%c == 0){
		sum += c;
	}
  }
  if(n == sum){
  	  printf("Esse n�mero � perfeito!\n");
  }else{
	  printf("Esse n�mero n�o � perfeito!\n");
  }
  return 0;
}