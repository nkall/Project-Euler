#include <stdio.h>

const long NUMBER = 600851475143;
int main(){
	long i;
	for (i = 2; i < NUMBER; i++){
		if (NUMBER % i == 0 && isPrime(i)){
			printf("%ld\n", i);
		}
	}

	return 0;
}

int isPrime(long num){
	long i;	
	for (i = 2; i < num; i++){
		if (num % i == 0){
			return 0;	
		}
	}
	return 1;
}
