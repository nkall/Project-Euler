#include <stdio.h>

const int REMAINDER_LIMIT = 20;

int main(){
	int i, j;
	for (i = REMAINDER_LIMIT; 1; i++){
		for (j = 2; j <= REMAINDER_LIMIT; j++){
			if (i % j != 0){
				break;
			}
			if (j == REMAINDER_LIMIT){
				printf("%d\n", i);
				return 0;
			}
		}
	}
	return -1;
}
