#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct IntListNode * IntList;

struct IntListNode{
	int element;
	IntList next;
};

const IntList intNil = NULL;

int isPerfectSq(int n);
int first (IntList list);
IntList rest (IntList list);
IntList cons(int newElement, IntList oldList);



const int MAX = 2500000;


int main(){
	int a, b, sq;
	IntList* successPair = calloc((MAX + 1), sizeof(IntList));
	for (a = 2; a < MAX; a++){
		for (sq = 1; sq < sqrt(a); sq++){
			b = a - (sq * sq);
			if(isPerfectSq(a+b)){
				successPair[a] = cons(b, successPair[a]);
				printf("Pair at %d, %d\n", a, b);
			}
		}
	}

	int i;
	IntList xyPair, yzPair, xzPair;
	for (i = 0; i < MAX; i++){
		xyPair = successPair[i];
		while(xyPair != intNil){
			yzPair = successPair[first(xyPair)];
			while(yzPair != intNil){
				xzPair = successPair[i];
				while(xzPair != intNil && first(xzPair) <= first(yzPair)){
					if (first(xzPair) == first(yzPair)){
						printf("Success! %d + %d + %d = %d\n", i, first(xyPair), first(yzPair), (i + first(xyPair) + first(yzPair)));
					}
					xzPair = rest(xzPair);
				}
				yzPair = rest(yzPair);
			}
			xyPair = rest(xyPair);
		}
	}

	return 0;
}

int isPerfectSq(int n){
	if(sqrt(n) == floor(sqrt(n))){
		return 1;
	}
	return 0;
}





int first (IntList list){
	return list->element;
}

IntList rest (IntList list){
	return list->next;
}

IntList cons(int newElement, IntList oldList) {
	IntList newList = calloc(1, sizeof(struct IntListNode));
	newList->element = newElement;
	newList->next = oldList;
	return newList;
}
