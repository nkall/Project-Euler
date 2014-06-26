#include <stdio.h>
#include <math.h>

int satisfiesConjecture(int isPrime[], int n);
void findPrimes(int isPrime[]);
void printPrimes(int isPrime[]);

const int MAX_VAL = 2000000;

int main(){
	int isPrime[MAX_VAL];
	
	int i;
	for(i = 2; i < MAX_VAL; i++){
		isPrime[i] = 1;
	}
	findPrimes(isPrime);
	//printPrimes(isPrime);
	
	for (i = 2; i < MAX_VAL; i++){
		if((!isPrime[i]) && (i % 2 != 0) && (!satisfiesConjecture(isPrime, i))){
			printf("Woot: %d\n", i);
			return 0;
		}
	}

	return 0;
}

int satisfiesConjecture(int isPrime[], int n){
	int i, j;
	for(i = 2; i < n; i++){
		if (isPrime[i]){
			for(j = 1; j < n; j++){
				if((2 * j * j) + i == n){
					return 1;
				}
			}
		}
	}
	return 0;
}

void printPrimes(int isPrime[]){
	int i;
	for(i = 2; i < MAX_VAL; i++){
		if (isPrime[i]){
			printf("%d\n", i);		
		}
	}
}

void findPrimes(int isPrime[]){
	int i, j;
	for(i = 2; i < sqrt(MAX_VAL); i++){
		if (isPrime[i]){
			for(j = (i*i); j < MAX_VAL; j+=i){
				isPrime[j] = 0;
			}
		}
	}
}
