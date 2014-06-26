#include <stdio.h>

int main(){
	long i, j;
	int count, maxCount = 0;
	for (i = 1; i < 1000000; i++){
		j = i;
		count = 1;
		while (j != 1){
			if(isEven(j)){
				j = j / 2;
			} else {
				j = (3 * j) + 1;
			}
			count++;
		}
		if (count > maxCount){
			maxCount = count;
			printf("%ld %d\n", i, count);
		}
	}
	return 0;
}

int isEven(int num){
	return (num % 2 == 0);
}
