#include <stdio.h>
#include <locale.h>

int main () {
  //Allows to print UTF-8 characters such as "é, à, ç , etc."
  setlocale(LC_ALL, "");
  int n, c;
  double sum = 0;
  printf("Digite um número de termos para a soma: \n");
  scanf("%d", &n);
  for(c = 0; c < n; c++){
    if(c%2 == 0){
      sum += ((480-(c*5))/(10+c));
    }else{
      sum -= ((480-(c*5))/(10+c));
    }
  }
  printf("A soma é: %f", sum);
  return 0;
}