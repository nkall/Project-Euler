#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	for (b = 2; b < 1000; b++){
		for (a = 1; a < b; a++){
			c = (a*a) + (b*b);
			if ((a + b + sqrt(c)) == 1000 && isSquareRootable(c)){
				printf("Found %f\n", (a*b*sqrt(c)));
			}
		}
	}

	return 0;
}

int isSquareRootable(int num){
	int i;
	for (i = 1; i <= (num / 2); i++){
		if ((i * i) == num){
			return 1;
		}
	}
	return 0;
}
