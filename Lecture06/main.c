#include <conio.h>
#include <stdio.h>

int main() {
	char ch;
	ch = 'a';
	int i = 0;
	while (i < 5) {
		ch = _getch();
		if (ch == 'q'){
			i = i + 5;
		}
		i = i + 1;
	}

	return 0;
}