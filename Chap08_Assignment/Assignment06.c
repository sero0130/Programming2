/*
*파일명 Assignment06.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 정수형 배열 원소 중 최댓값과 최솟값을 찾는 함수 정의 후 출력하는 프로그램
*작성일 : 20251011
*문제 번호 : 08-06
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	assignment0806();

	return 0;
}

/*
* 함수 이름: get_min_max
* 기능: 정수형 배열 원소 중 최댓값과 최솟값을 찾는 함수
* 반환 값: 없음 (void)
*/

int assignment0806(void)
{
	int arr[SIZE] = { 23, 45, 62, 12, 99 , 83, 23, 50, 72, 37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int min = 0, max = 0;

	int* ptr = arr;
	int* pmn = &min, * pmx = &max;

	get_min_max(ptr, size, pmn, pmx);
	printf("최댓값: %d\n", *pmx);
	printf("최솟값: %d\n", *pmn);


	return 0;
}

/*
* 함수 이름: get_min_max
* 기능: 정수형 배열 원소 중 최댓값과 최솟값을 찾는 함수
* 반환 값: 없음 (void)
*/

void get_min_max(const int* arr, int size, int* min, int* max)
{
	int i;
	*min = *max = arr[0];
	for (i = 1; i < size; i++)
	{
		if (*min > arr[i])
		{
			*min = arr[i];
		}
		if (*max < arr[i])
		{
			*max = arr[i];
		}
	}

	return;
}