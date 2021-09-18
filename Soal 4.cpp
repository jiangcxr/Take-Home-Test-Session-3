#include <stdio.h>

int main() {
	int inputNumber;
	scanf("%d", &inputNumber);
	if(inputNumber < 10 && inputNumber >= 1){
		printf("1");
	} else if(inputNumber >= 10 && inputNumber < 100){
		printf("2");
	} else if(inputNumber >= 100 && inputNumber < 1000) {
		printf("3");
	} else {
		printf("More than 3 digits");
	}
	return 0;
}
