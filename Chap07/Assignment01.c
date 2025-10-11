/*
*파일명 Assignment01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 크기가 10인 배열에 첫번째 항의 값과 공차를 입력받아 배열을 채우고 출력하는 프로그램
*작성일 : 20251011
*문제 번호 : 07-01
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0701(void);
void fillArray(int arr[], int size, int first, int diff);

int main(void)
{
	assignment0701();
	
	return 0;
}

/*
* 함수 이름: assignment0701
* 기능: 첫 번째 항과 공차를 입력받아 등차 수열로 배열을 채우고 출력하는 함수
* 반환 값: 없음 (void)
*/

void assignment0701(void)
{
	int arr[SIZE];
	int first = 0, diff = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("첫 번째 항: ");
	scanf("%d", &first);
	printf("공차: ");
	scanf("%d", &diff);

	fillArray(arr, size, first, diff);

	printf("등차 수열: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return;
}

/*
* 함수 이름: fillArray
* 기능: 배열을 등차 수열로 채우는 함수
* 반환 값: 없음 (void)
*/

void fillArray(int arr[], int size, int first, int diff)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = first + (i * diff);
	}

	return;
}