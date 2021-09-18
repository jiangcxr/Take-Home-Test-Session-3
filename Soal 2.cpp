#include <stdio.h>

int main() {
	char input;
	scanf("%c", &input);
	if(input=='A' || input=='E' || input=='I' || input=='O' || input=='U' || input=='a' || input=='e' || input=='i' || input=='o' || input=='u') {
		printf("Vowel");
	} else {
		printf("Consonant");
	}
	return 0;
}
