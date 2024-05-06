#include <stdio.h>
#include <locale.h>

int main (){
	//Allows to print UTF-8 characters such as "é, à, etc."
	setlocale(LC_ALL, "");
	int n, first, second;
	printf("Digite um número de 6 algarismos: \n");
	scanf("%d", &n);
	if(n < 100000 || n > 999999){
		printf("Esse número é inválido! O limite é 6 algarismos.\n");
	}
	first = n/1000;
	second = (n - (first*1000));
	if((first-second) == 198 || (first-second) == -198){
		printf("Esse número é palíndromo!\n");
	}else{
		printf("Esse número não é palíndromo!\n");
	}
	return 0;
}