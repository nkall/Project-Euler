#include <stdio.h>

int main(){
	int i;
	int sum = 0;
	int gap = 0;
	int gapCount = 0;
	for (i = 1; i <= 1002001; i+=gap){
		sum += i;
		if (gapCount % 4 == 0){
			gap += 2;	
		}
		gapCount++;
	}
	printf("%d\n", sum);
	
	return 0;
}
