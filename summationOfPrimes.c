#include <stdio.h>

int PRIMES_BELOW = 2000000;
int main(){
	int i;
	long sum = 0;

	for (i = 2; i < PRIMES_BELOW; i++){
		if (isPrime(i)){
			sum += i;
			printf("%d\n", i);
		}
	}
	
	printf("%ld\n", sum);
	return 0;
}

int isPrime(int num){
	int i;	
	for (i = 2; i <= (num/2); i++){
		if (num % i == 0){
			return 0;	
		}
	}
	return 1;
}
