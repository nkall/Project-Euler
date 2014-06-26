#include <stdio.h>

int sumProperDivisors(int n);

int sum[10000];

int main(){
	int i;
	for (i = 1; i < 10000; i++){
		sum[i] = sumProperDivisors(i);
	}

	int total = 0;
	for (i = 1; i < 10000; i++){
		if (sum[i] < 10000 && sum[sum[i]] == i && sum[i] != i){
			printf("%d, %d\n", i, sum[i]);
			total += i;
		}
	}
	printf("%d\n", total);
	return 0;
}

int sumProperDivisors(int n){
	int i;
	int sum = 0;

	for (i = 1; i < n/2 + 1; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	return sum;
}
