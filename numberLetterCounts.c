#include <stdio.h>

int numberOfLetters(int num);
int countHundreds(int num);
int countOnesAndTens(int num);
int countTeens(int num);

int main(){
	int i;
	int totalLetters = 0;

	for (i = 1; i <= 1000; i++){
		totalLetters += numberOfLetters(i);
	}
	printf("\n%d\n", totalLetters);
	return 0;
}

int numberOfLetters(int num){
	int letterCount = 0;
	
	if ((num % 100) / 10 == 1){
		letterCount = countTeens(num % 100);
	} else {
		letterCount = countOnesAndTens(num % 100);
	}
	letterCount += countHundreds(num / 100);
	if (num % 100 == 0){
		letterCount -= 3;
	}
	printf("%d: %d\n", num, letterCount);
	return letterCount;
}

int countHundreds(int num){
	int letterCount = 0;
	if (num == 10){
		return 14;
	} else if (num < 10 && num > 0){
		letterCount = countOnesAndTens(num);
		letterCount += 10;  //hundred and
	}
	return letterCount;
}

int countOnesAndTens(int num){
	int letterCount = 0;

	switch(num % 10){
		case 1:
		case 2:
		case 6:
			letterCount += 3; //one & two & six
			break;
		case 3:
		case 7:
		case 8:
			letterCount += 5; //three & seven & eight
			break;
		case 4:
		case 5:
		case 9:
			letterCount += 4; // four & five & nine
			break;
	}

	switch(num / 10){
		case 2:
		case 3:
		case 8:
		case 9:
			letterCount += 6; //twenty & thirty & eighty & ninety
			break;
		case 4:
		case 5:
		case 6:
			letterCount += 5; //forty & fifty & sixty
			break;
		case 7:
			letterCount += 7; //seventy
			break;
	}
	return letterCount;
}

int countTeens(int num){
	switch(num % 10){
		case 0:
			return 3; //ten
		case 1:
		case 2:
			return 6; //eleven & twelve
		case 3:
		case 4:
		case 8:
		case 9:
			return 8; //thirteen & fourteen & eighteen & nineteen
		case 5:
		case 6:
			return 7; //fifteen & sixteen
		case 7:
			return 9; //seventeen
	}
}
