#include <stdio.h>
int main() {
	int letter;
	scanf_s("%d", &letter);
	letter = letter * 10;
	int temp, sum;
	if (letter >= 25) {
		temp = letter / 25;
		sum += temp;
		temp = temp * 25;
		letter = letter - temp;
	}
	if (letter >= 15) {
		temp = letter / 15;
		sum += temp;
		temp = temp * 15;
		letter = letter - temp;
	}
	if (letter >= 10) {
		temp = letter / 10;
		sum += temp;
		temp = temp * 10;
		letter = letter - temp;
	}
	printf("%d", sum);
}