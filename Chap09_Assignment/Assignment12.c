/*
*파일명 Assignment12.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 입력받은 문자열에 대해 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전시킨 후 결과를 출력하는 프로그램(입력받은 이동 글자수가 음수면 왼쪽, 양수면 오른쪽)
*작성일 : 20251011
*문제 번호 : 09-12
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0912(void);
void rotate_string(char* str, int n);
void reverse_string(char* str, int start, int end);
int string_length(const char* str);

int main(void)
{
	assignment0912();

	return 0;
}

/*
* 함수 이름: assignment0912
* 기능: 입력받은 문자열에 대해 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전시킨 후 결과를 출력하는 프로그램(입력받은 이동 글자수가 음수면 왼쪽, 양수면 오른쪽)
* 반환 값: 없음 (void)
*/

void assignment0912(void)
{
	char str[SIZE] = { 0 };
	int n = 0;

	printf("문자열 입력: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	printf("이동할 글자 수 입력(음수: 왼쪽, 양수: 오른쪽): ");
	scanf("%d", &n);

	rotate_string(str, n);
	printf("회전된 문자열: %s\n", str);

	return;
}

/*
* 함수 이름: rotate_string
* 기능: 입력받은 문자열에 대해 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전시키는 함수
* 반환 값: 없음 (void)
*/

void rotate_string(char* str, int n)
{
	int len = string_length(str);

	if (len == 0) return;
	n = n % len; // 이동할 글자 수를 문자열 길이로 나눈 나머지로 조정
	
	if (n < 0) // 왼쪽으로 회전
	{
		n = -n; // 양수로 변환
		reverse_string(str, 0, n - 1); // 앞부분 뒤집기
		reverse_string(str, n, len - 1); // 뒷부분 뒤집기
		reverse_string(str, 0, len - 1); // 전체 뒤집기
	}

	else if (n > 0) // 오른쪽으로 회전
	{
		reverse_string(str, 0, len - n - 1); // 앞부분 뒤집기
		reverse_string(str, len - n, len - 1); // 뒷부분 뒤집기
		reverse_string(str, 0, len - 1); // 전체 뒤집기
	}
	
	return;
}

/*
* 함수 이름: reverse_string
* 기능: 문자열의 특정 구간을 뒤집는 함수
* 반환 값: 없음 (void)
*/

void reverse_string(char* str, int start, int end)
{
	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return;
}

/*
* 함수 이름: string_length
* 기능: 문자열의 길이를 구하는 함수
* 반환 값: 문자열의 길이 (int)
*/

int string_length(const char* str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}