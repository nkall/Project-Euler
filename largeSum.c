#include <stdio.h>

int main(int argc, char* argv[]){
	FILE *infile;
	infile = fopen(argv[1], "r");

	int c;
	int i = 0, j = 0;
	int digit[100][50];
	while ((c = fgetc(infile)) != EOF) {
		if (c == '\n'){
			i++;
			j = 0;
		} else {
			digit[i][j] = (c - '0');
			j++;
		}
	}

	int remainder = 0;
	int sum;
	for (j = 49; j >= 0; j--){
		sum = remainder;
		for (i = 0; i < 100; i++){
			sum += digit[i][j];
		}
		remainder = (sum / 10);
		printf("%d\n", sum);
	}


	fclose(infile);
	return 0;
}
