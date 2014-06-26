#include <stdio.h>

int FIRST_NTRL = 100;
int main(){
	int i;
	int sumSquares = 0, squaresSum = 0;
	for (i = 1; i <= FIRST_NTRL; i++){
		sumSquares += (i*i);
		squaresSum += i;
	}
	squaresSum *= squaresSum;
	printf("%d - %d = %d\n", squaresSum, sumSquares, (squaresSum - sumSquares));

	return 0;
}
