#include<stdio.h>

int main () {
	int row = 1;
	while (row <= 6) {
		int column = row;
		while (column) {
			printf("*");
			column = column - 1;
		}
		printf("\n");
		row = row + 1;
	}
	return 0;
}