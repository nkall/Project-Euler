#include <stdio.h>

int isPalindrome(int a, int b);

int main(void){
	int i, j;
	int maxPal;
	for(i = 100; i < 1000; i++){
		for(j = 100; j < 1000; j++){
			if(isPalindrome(i, j)){
				printf("Palindrome product %d found (%d, %d)\n", i*j, i, j);
				if(i*j > maxPal){
					maxPal = i*j;
				}
			}
		}
	}
	printf("Max palindrome product %d\n", maxPal);

	return 0;
}

int isPalindrome(int a, int b){
	int product = a*b;
	if (product < 100000){
		if(product / 10000 == product % 10 && (product % 10000) / 1000  == (product % 100) / 10){
			return 1;
		}
		return 0;
	}else{
		if(product / 100000 == product % 10 && (product % 100000) / 10000 == (product % 100) / 10 &&
			(product % 10000) / 1000 == (product % 1000) / 100){
				return 1;
			}
		return 0;
	}
}
