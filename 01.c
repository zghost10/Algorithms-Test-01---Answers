#include <stdio.h>
#include <locale.h>

int main (){
	//Allows to print UTF-8 characters such as "é, à, etc."
	setlocale(LC_ALL, "");
	int n, original, digit, reverse = 0;
	printf("Digite um número de 6 algarismos: \n");
	scanf("%d", &n);
	original = n;
	while(n != 0){
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n /= 10;
	}
	if(original == reverse){
		printf("Esse número é palíndromo!\n");
	}else{
		printf("Esse número não é palíndromo!\n");
	}
	return 0;
}