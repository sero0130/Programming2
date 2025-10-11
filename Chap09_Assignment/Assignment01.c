/*
*파일명 Assignment01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 한줄의 문자열을 입력받아서 공백문자의 개수를 세는 프로그램을 작성
*작성일 : 20251011
*문제 번호 : 09-01
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0901(void);
int count_spaces(const char* str);

int main(void)
{
	assignment0901();

	return 0;
}

/*
* 함수 이름: assignment0901
* 기능: 한줄의 문자열을 입력받아서 공백문자의 개수를 세는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0901(void)
{
	char str[SIZE] = { 0 };

	printf("문자열 입력: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	int space_count = count_spaces(str);

	printf("공백문자의 개수: %d\n", space_count);

	return;
}

/*
* 함수 이름: count_spaces
* 기능: 문자열에서 공백문자의 개수를 세는 함수
* 반환 값: 공백문자의 개수 (int)
*/

int count_spaces(const char* str)
{
	int count = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	return count;
}