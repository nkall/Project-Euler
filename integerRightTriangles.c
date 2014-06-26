#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int a, b;
	float c;

	for (i = 1; i <= 1000; i++){
		for (a = 1; a < i; a++){
			for(b = 1; b <= a; b++){
				c = sqrt((a*a) + (b*b));
				if (ceilf(c) == c && i == a+b+c){
					printf("%d = %d+%d+%f\n", i, a, b, c);
				}
			}
		}
	}


	return 0;
}
