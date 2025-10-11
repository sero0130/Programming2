/*
*파일명 Assignment18.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 최대 10개의 정수형 원소를 저장할 수 있는 집합을 구현하기(중복X) 입력을 받을때마다 집합의 원소들을 출력
*작성일 : 20251011
*문제 번호 : 07-18
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0718(void);
int checkdup(int arr[], int length);

int main(void)
{
	assignment0718();
	
	return 0;
}

/*
 * 함수명 : assignment0718
 * 기능 : 최대 10개의 정수형 원소를 저장할 수 있는 집합을 구현하기(중복X) 입력을 받을때마다 집합의 원소들을 출력
 * 반환값 : void
 */
void assignment0718(void)
{
	int arr[SIZE];

	for (int i = 0; i < SIZE;)
	{
		printf("배열에 추가할 원소? ");
		scanf("%d", &arr[i]);

		int chk = checkdup(arr, i);
		if (chk != -1)
		{
			printf("해당 원소가 이미 [%d]에 존재합니다.\n", chk);
			for (int j = 0; j < i; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}

		printf("\n");
		i++;
	}
}

/*
 * 함수명 : checkdup
 * 기능 : 배열에 중복된 원소가 있는지 확인하는 함수
 * 반환값 : 중복된 원소의 인덱스, 없으면 -1 반환
 */
int checkdup(int arr[], int length)
{
	for (int i = 0; i <= length; i++)
	{
		for (int j = i + 1; j <= length; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[j] = NULL;
				return i;
			}
		}
	}
	return -1;
}