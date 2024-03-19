#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

long int fact(int);

int main() 
{
	int num, result;
	printf("\n정수를 입력하세요: ");
	scanf_s("%d", &num);
	result = fact(num);
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", num, result);
	getchar(), getchar();
}

long int fact(int num) {
	int value;
	if (num <= 1) {
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!!");
		return 1;
	}
	else {
		printf("\n fact(%d) 함수 호출!", num);
		value = (num * fact(num - 1));
		printf("\n fact(%d)값 %ld 반환!!", num, value);
		return value;
	}
}
