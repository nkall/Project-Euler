#include <stdio.h>

const int ARRAY_MAX = 1000;
int main(int argc, char *argv[]){
	FILE *infile;
	infile = fopen(argv[1], "r");

	int i = 0;
	int c;
	int num[ARRAY_MAX];
	while ((c = fgetc(infile)) != EOF && i < ARRAY_MAX) {
		num[i] = (c - '0');
		i++;
	}
	getProduct(num);

	fclose(infile);
	return 0;
}

int getProduct(int num[]){
	int i;
	int currProduct, maxProduct = 0;
	for (i = 4; i < ARRAY_MAX; i++){
		currProduct = (num[i] * num[i-1] * num[i-2] * num[i-3] * num[i-4]);
		if (currProduct > maxProduct){
			maxProduct = currProduct;
			printf("%d\n", maxProduct);
		}
	}
	return maxProduct;
}
