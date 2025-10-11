/*
*파일명 Assignment02.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 배열원소를 가리키는 포인터와 포인터 연산을 이용해 실수형 배열의 모든 원소를 출력하는 프로그램 작성(크기 10)
*작성일 : 20251011
*문제 번호 : 08-02
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void assignment0802(void);
void printArray(const double* arr, int size);

int main(void)
{
	assignment0802();

	return 0;
}

/*
* 함수 이름: assignment0802
* 기능: 실수형 배열의 모든 원소를 출력하는 함수
* 반환 값: 없음 (void)
*/

void assignment0802(void)
{
	double arr[SIZE] = { 0.1, 0.2, 0.3, 0.4,0.5, 0.6, 0.7, 0.8, 0.9, 1.3  };
	int size = sizeof(arr) / sizeof(arr[0]);
	double* ptr = arr;

	printArray(ptr, size);

}

/*
* 함수 이름: printArray
* 기능: 포인터와 포인터 연산을 이용해 배열의 모든 원소를 출력하는 함수
* 반환 값: 없음 (void)
*/

void printArray(const double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.2lf", *(arr + i));
	}
	return;
}
