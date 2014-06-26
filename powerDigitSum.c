#include <stdio.h>
const int ARRAY_MAX = 1000;
const int EXPONENT = 1000;

int main(void){
	int digit[ARRAY_MAX];
	int arrayCount = 0;
	int i, j;
	int remainder;

	digit[0] = 1;
	for (i = 0; i < EXPONENT; i++){
		remainder = 0;
		for(j = 0; j <= arrayCount; j++){
			digit[j] = (digit[j] * 2) + remainder;
			if (digit[j] > 9){
				if (j == arrayCount){
					arrayCount++;
				}
				remainder = digit[j] / 10;
				digit[j] %= 10;
			} else {
				remainder = 0;
			}
		}
	}
	long sum = 0;
	for (i = arrayCount; i >= 0; i--){
		printf("%d", digit[i]);
		sum += digit[i];
	}
	printf("\nSum:%ld\n", sum);

	return 0;
}


