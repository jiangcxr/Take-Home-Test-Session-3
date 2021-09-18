#include <stdio.h>

int main() {
	int input1, input2;
	scanf("%d", &input1);
	scanf("%d", &input2);
	
	if(input1 > input2){
		printf("%d", input1 - input2);
	} else {
		printf("%d", input1 + input2);
	}
	return 0;
}
