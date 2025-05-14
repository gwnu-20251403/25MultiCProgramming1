#include <stdio.h>

int sum(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}


int main() {
	int a = 15;
	int b = 3;

	printf("SUM of %d and %d is %d\n", a, b, sum(a, b));
	printf("SUB of %d and %d is %d\n", a, b, sub(a, b));
	printf("MUL of %d and %d is %d\n", a, b, mul(a, b));
	printf("DIV of %d and %d is %d\n", a, b, div(a, b));

	return 0;
}