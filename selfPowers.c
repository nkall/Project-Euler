#include <stdio.h>

long long trimDigits(long long n);

const int SERIES_MAX = 1000;
int main(){
	int i, j;
	long long power;
	long long sum = 0;

	for (i = 1; i <= SERIES_MAX; i++){
		power = i;
		for (j = 1; j < i; j++){
			power *= i;
			power = trimDigits(power);	
		}
		sum += power;
		sum = trimDigits(sum);
		printf("%lld\n", power);
	}
	printf("\n%lld\n", sum);

	return 0;
}

long long trimDigits(long long n){
	if (n > 9999999999){
		n = n % 100000000000;
	}
	return n;
}
