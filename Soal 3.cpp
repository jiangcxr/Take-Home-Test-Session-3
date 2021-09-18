#include <stdio.h>

int main() {
	int length, breadth;
	scanf("%d", &length);
	scanf("%d", &breadth);
	int area = length*breadth;
	int peri = (length+breadth)*2;
	
	if(area > peri) {
		printf("Area\n%d", area);
	} else if(area < peri) {
		printf("Peri\n%d", peri);
	} else {
		printf("Eq\n%d", area);
	}
	return 0;
}
