/*
*파일명 Assignment04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 배열 원소를 가리키는 포인터를 이용해 실수형 배열의 평균을 구하는 프로그램
*작성일 : 20251011
*문제 번호 : 08-04
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0804(void);
double calAvg(const double* arr, int size);

int main(void)
{
	assignment0804();

	return 0;
}

/*
* 함수 이름: assignment0804
* 기능: 배열 원소를 가리키는 포인터를 이용해 실수형 배열의 평균을 구하는 함수
* 반환 값: 없음 (void)
*/

void assignment0804(void)
{
	double arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	double* ptr = arr;
	int size = sizeof(arr) / sizeof(arr[0]);

	double avg = calAvg(ptr, size);
	printf("평균: %lf\n", avg);

}

/*
* 함수 이름: calAvg
* 기능: 배열 원소를 가리키는 포인터를 이용해 실수형 배열의 평균을 구하는 함수
* 반환 값: 평균값 (double)
*/

double calAvg(const double* arr, int size)
{
	double sum = 0.0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}

	return sum / size;
}