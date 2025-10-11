/*
*파일명 Assignment02.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 문자배열을 매개변수로 전달받아 공백문자를 모두 제거하는 remove_spaces 함수를 작성하고 이를 호출하는 프로그램
*작성일 : 20251011
*문제 번호 : 09-02
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0902(void);
void remove_spaces(char* str);

int main(void)
{
	assignment0902();

	return 0;
}

/*
*함수 이름: assignment0902
*기능: 문자배열을 매개변수로 전달받아 공백문자를 모두 제거하는 remove_spaces 함수를 작성하고 이를 호출하는 프로그램
*반환 값: 없음 (void)
*/

void assignment0902(void)
{
	char str[SIZE] = { 0 };

	printf("문자열 입력: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	remove_spaces(str);

	printf("공백 제거 후 문자열: %s\n", str);

	return;
}

/*
* 함수 이름: remove_spaces
* 기능: 문자배열을 매개변수로 전달받아 공백문자를 모두 제거하는 함수
* 반환 값: 없음 (void)
*/

void remove_spaces(char* str)
{
	char* read_ptr = str;
	char* write_ptr = str;
	while (*read_ptr)
	{
		if (*read_ptr != ' ')
		{
			*write_ptr = *read_ptr;
			write_ptr++;
		}
		read_ptr++;
	}
	*write_ptr = '\0';
	return;
}