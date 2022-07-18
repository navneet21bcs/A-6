#include <stdio.h>
int main() {
	int x, y, max;
	printf("Enter two positive integers: ");
	scanf("%d %d", &x, &y);
	res = (x > y) ? x : y;

	while (1) {
		if (res % x == 0 && res % y == 0) {
			printf("The LCM obtained from %d and %d is %d.", x, y, res);
			break;
		}
		++max;
	}

	return 0;
}
