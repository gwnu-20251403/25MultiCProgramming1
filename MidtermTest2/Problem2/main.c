#include<stdio.h>

void SS(int mp, int range) {
	if (mp >= 50 && range > 10)
	{
		printf("주인공 : 너는 점수를 획득했나?");
	}
}

int main() {
	int currentMp = 150;
	int currentRange = 20;
	SS(currentMp, currentRange);
	return 0;
}