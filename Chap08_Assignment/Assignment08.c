/*
*파일명 Assignment08.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 정수형 배열을 특정 값으로 채우는 함수가 있는 프로그램
*작성일 : 20251011
*문제 번호 : 08-08
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void assignment0808(void);
void fillArray(int * arr, int size, int value);

int main(void)
{
		assignment0808();
		
		return 0;
}

/*
* 함수 이름: assignment0808
* 기능: 정수형 배열을 특정 값으로 채우는 함수가 있는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0808(void)
{
	int arr[SIZE] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int value = 0;
	int* ptr = arr;

	printf("배열을 채울 값 입력: ");
	scanf("%d", &value);

	fillArray(ptr, size, value);
	printf("배열: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

/*
* 함수 이름: fillArray
* 기능: 정수형 배열을 특정 값으로 채우는 함수
* 반환 값: 없음 (void)
*/

void fillArray(int* arr, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = value;
	}
}