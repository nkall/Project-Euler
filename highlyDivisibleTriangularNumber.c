#include <stdio.h>

int main(){
	int i, j;
	long triangle;
	for (i = 1; 1; i++){
		triangle = 0;
		for (j = 1; j <= i; j++){
			triangle += j;
		}

		printf("%ld\n", triangle);	
		if (numFactors(triangle) >= 500){
			return 0;
		}
	}
	return -1;
}

int numFactors(int num){	
	int i;
	int factors = 0;
	for (i = 2; i <= (num/2); i++){
		if (num % i == 0){
			factors++;	
		}
	}
	return (factors + 1);
}
