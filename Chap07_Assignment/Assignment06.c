/*
*파일명 Assignment06.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 크기가 10인 실수형 배열에 대해 원소들을 역순으로 만드는 프로그램
*작성일 : 20251011
*문제 번호 : 07-06
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void assignment0706(void);
void reverse_array(double arr[], int size);

int main(void)
{
	assignment0706();

	return 0;
}

/*
 * 함수명 : assignment0706
 * 기능 : 크기가 10인 실수형 배열에 대해 원소들을 역순으로 만드는 함수 호출
 * 반환값 : void
 */

void assignment0706(void)
{
	double arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	reverse_array(arr, SIZE);

	return 0;
}

/*
 * 함수명 : reverse_array
 * 기능 : 크기가 10인 실수형 배열에 대해 원소들을 역순으로 만드는 함수
 * 반환값 : void
 */

void reverse_array(double arr[], int size)
{
	double array[SIZE] = { 0.0 };

	// 배열을 역순으로 채우기
	for (int i = SIZE - 1; i >= 0; i--)
	{
		array[SIZE - 1 - i] = arr[i];
	}

	// 역순 배열 출력
	for (int i = 0; i < SIZE; i++)
	{
		printf("%lf ", array[i]);
	}

	return;
}