#include <stdio.h>
#include <math.h>

const int MAX = 10000000;
int divisorNum[10000000 + 1];

int main(){
	int i, j;
	divisorNum[1] = 1;
	for (i = 2; i < MAX; i++){
		divisorNum[i] = 2;
	}
	for(i = 2; i <= MAX/2; i++){
		for (j = 2*i; j < MAX; j+=i){
			divisorNum[j]++;
		}
	}

	int consecCount = 0;
	for (i = 1; i < MAX - 1; i++){
		if (divisorNum[i] == divisorNum[i+1]){
			consecCount++;
		}
	}
	printf("%d\n", consecCount);
	return 0;
}
