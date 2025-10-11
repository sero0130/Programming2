/*
*파일명 Assignment04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 특정 값으로 초기화된 정수형 배열에 대해 최솟값 최댓값을 찾아 인덱스와 함께 출력하는 프로그램
*작성일 : 20251011
*문제 번호 : 07-04
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0704(void);
int find_min_max(int arr[], int size);

int main(void)
{
	assignment0704();

	return 0;
}

/*
 * 함수명 : assignment0704
 * 기능 : 정수형 배열 정의 후 최솟값 최댓값 찾는 함수 호출
 * 반환값 : void
 */

void assignment0704(void)
{
	// 정수형 배열 정의 
	int arr[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	// 함수 호출
	find_min_max(arr, SIZE);

	return;
}

/*
 * 함수명 : find_min_max
 * 기능 : 정수형 배열에 대해 최솟값 최댓값을 찾아 인덱스와 함께 출력하는 함수
 * 반환값 : 0
 */
int find_min_max(int arr[], int size)
{
	int min = arr[0], max = arr[0];
	int min_index = 0, max_index = 0;

	// 최대 최소 찾기
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
		else
		{
			max = arr[i];
			max_index = i;
		}
	}
	// 최솟값과 최댓값, 인덱스 출력
	printf("최솟값: %d, 인덱스: %d\n", min, min_index);
	printf("최댓값: %d, 인덱스: %d\n", max, max_index);

	return 0;
}