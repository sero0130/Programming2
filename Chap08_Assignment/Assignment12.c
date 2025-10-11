/*
*파일명 Assignment12.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 정수형 배열과 키 값을 전달 받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장 해 리턴하는 함수를 작성하고 이를 호출하는 프로그램
*작성일 : 20251011
*문제 번호 : 08-12
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0812(void);
int find_all_in_array(int* arr, int* key, int size, int* pidx);

int main(void)
{
	assignment0812();

	return 0;
}

/*
* 함수 이름: assignment0812
* 기능: 정수형 배열과 키 값을 전달 받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장 해 리턴하는 함수를 작성하고 이를 호출하는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0812(void)
{
	int arr[SIZE] = { 12,45,62,12,99,83,23,12,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int index[SIZE] = { 0 };
	int key = 0;
	int* ptr = arr;
	int* pidx = index;
	int* pkey = &key;

	printf("찾을 값? ");
	scanf("%d", pkey);
	int count = find_all_in_array(ptr, pkey, size);
	printf("찾은 항목은 모두 %d개입니다.\n", count);
	printf("찾은 항목의 인덱스: ");
	for (int i = 0; i < count; i++)
	{
		printf("%d ", index[i]);
	}
	printf("\n");

	return;
}

/*
* 함수 이름: find_all_in_array
* 기능: 정수형 배열과 키 값을 전달 받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장 해 리턴하는 함수
* 반환 값: 찾은 항목의 개수 (int)
*/

int find_all_in_array(int* arr, int* key, int size, int* pidx)
{
	int i;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (*(arr + i) == *key)
		{
			*(pidx + count) = i;
			count++;
		}
	}
	return count;
}
