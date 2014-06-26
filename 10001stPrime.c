#include <stdio.h>

int TH_PRIME = 10001;

int main(){
	int i;
	for (i = 2; TH_PRIME != 0; i++){
		if (isPrime(i)){
			TH_PRIME--;
		}
	}
	printf("%d\n", i - 1);

	return 0;
}

int isPrime(int num){
	int i;	
	for (i = 2; i < num; i++){
		if (num % i == 0){
			return 0;	
		}
	}
	return 1;
}
