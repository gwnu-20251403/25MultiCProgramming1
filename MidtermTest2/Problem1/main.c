#include<stdio.h>

int PassOrFail(int score) {
	if (score >= 50) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int isPass = PassOrFail(20);
	if (isPass) {
		printf("����� �����ϴ�!");
	}
	else {
		printf("����� �ֽ��ϴ�");
	}
	return 0;
}