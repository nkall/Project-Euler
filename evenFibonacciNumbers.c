#include <stdio.h>

const int EXCEED = 4000000;

int main(){
	int term1 = 1;
	int term2 = 2;
	int sum = 0;

	while (term1 < EXCEED && term2 < EXCEED){
		if (term1 < term2) {
			if (term2 % 2 == 0){
				sum = sum + term2;
			}
			term1 = term1 + term2;
		} else {
			if (term1 % 2 == 0){
				sum = sum + term1;
			}
			term2 = term1 + term2;
		}
	}
	printf("%d\n", sum);

	return 0;
}
