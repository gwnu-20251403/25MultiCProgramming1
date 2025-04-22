#include <stdio.h>
#include <conio.h>

void gotoxy(int x, int y) {
	printf("\033[%d;%dH", y, x);
}

void printCake() {
	printf("            \033[33mO\033[0m             \033[33mO\033[0m              \n");
	printf("            \033[34m|\033[0m             \033[32m|\033[0m              \n");
	printf("   -----------------------------------   \n");
	printf("   |\033[45m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[0m|   \n");
	printf("   |\033[47m                                 \033[0m|   \n");
	printf("   -----------------------------------   \n");
	printf("-----------------------------------------\n");
	printf("|\033[45m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\033[0m|\n");
	printf("|\033[47m                                       \033[0m|\n");
	printf("-----------------------------------------\n");
}

int main() {
	printCake();
	char ch = _getch();
	if (ch == 'h' || ch == 'H') {
		gotoxy(17, 5);
		printf("\033[31;47mHappy\033[0m");
		gotoxy(1, 11);
		ch = _getch();
		if (ch == 'h' || ch == 'H'){
			gotoxy(15, 9);
			printf("\033[32;47mBirthday\033[0m");
			gotoxy(1, 11);
		}
	}
	return 0;
}