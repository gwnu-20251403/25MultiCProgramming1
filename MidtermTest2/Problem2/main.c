#include<stdio.h>

void SS(int mp, int range) {
	if (mp >= 50 && range > 10)
	{
		printf("���ΰ� : �ʴ� ������ ȹ���߳�?");
	}
}

int main() {
	int currentMp = 150;
	int currentRange = 20;
	SS(currentMp, currentRange);
	return 0;
}