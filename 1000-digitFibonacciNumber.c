#include <stdio.h>

int digitA[1000], digitB[1000];
int digitCountA, digitCountB;
int biggerLetter();
void printNum(int letter);
void handleDigitOverflowA();
void handleDigitOverflowB();

int main(){
	int i;

	digitCountA = 0;
	digitCountB = 0;
	digitA[0] = 1;
	digitB[0] = 1;
	int termNum = 2;

	while (digitCountA != 999 && digitCountB != 999){
		if (!biggerLetter()){
			for (i = 0; i <= digitCountA; i++){
				digitB[i] += digitA[i];
			}
			handleDigitOverflowB();
			printNum(1);
		} else {
			for (i = 0; i <= digitCountB; i++){
				digitA[i] += digitB[i];
			}
			handleDigitOverflowA();
			printNum(0);
		}
	termNum++;
	}
	printf("%d\n", termNum);

	return 0;
}

int biggerLetter(){
	int i;
	if (digitCountA > digitCountB){
		return 0;
	} else if (digitCountB > digitCountA){
		return 1;
	} else {
		for (i = digitCountA; i>=0; i--){
			if (digitA[i] > digitB[i]){
				return 0;
			} else if (digitB[i] > digitA[i]){
				return 1;
			}
		}
	}
}

void printNum(int letter){
	int i;

	if (letter == 0){
		for(i = digitCountA; i >= 0; i--){
			printf("%d", digitA[i]);
		}
		printf("\n");
	} else {
		for (i = digitCountB; i >= 0; i--){
			printf("%d", digitB[i]);
		}
		printf("\n");
	}
}

void handleDigitOverflowA(){
	int i;
	int remainder = 0;
	for (i = 0; i <= digitCountA; i++){
		digitA[i] += remainder;
		if(digitA[i] > 9){
			if (i == digitCountA){
				digitCountA++;
			}
			remainder = digitA[i] / 10;
			digitA[i] = digitA[i] % 10;
		} else {
			remainder = 0;
			if (i == digitCountA && digitCountA < digitCountB){
				digitCountA++;
			}
		}
	}
}

void handleDigitOverflowB(){
	int i;
	int remainder = 0;
	for (i = 0; i <= digitCountB; i++){
		digitB[i] += remainder;
		if(digitB[i] > 9){
			if (i == digitCountB){
				digitCountB++;
			}
			remainder = digitB[i] / 10;
			digitB[i] = digitB[i] % 10;
		} else {
			remainder = 0;
			if (i == digitCountB && digitCountB < digitCountA){
				digitCountB++;
			}
		}	
	}
}
