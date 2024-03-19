#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[100];
	int length;

	printf("문자열을 입력하세요: ");
	scanf_s("%s", str, sizeof(str));
	printf("\n");

	length = strlen(str);

	printf("입력된 문자열은\n\"%s\"\n입니다.\n", str);
	printf("\n");
	printf("입력된 문자열 길이 = %d", length);

	return 0;

}