/*
*파일명 Assignment03.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램
*작성일 : 20251011
*문제 번호 : 09-03
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0903(void);
void toggle_case(char* str);

int main(void)
{
	assignment0903();
	
	return 0;
}

/*
* 함수 이름: assignment0903
* 기능: 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0903(void)
{
	char str[SIZE] = { 0 };

	printf("문자열 입력: ");

	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	toggle_case(str);

	printf("변환된 문자열: %s\n", str);

	return;
}

/*
* 함수 이름: toggle_case
* 기능: 입력받은 문자열의 소문자는 대문자로, 대문자는 소문자로 변환하는 함수
* 반환 값: 없음 (void)
*/

void toggle_case(char* str)
{
	char* ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
		}
		ptr++;
	}
	return;
}