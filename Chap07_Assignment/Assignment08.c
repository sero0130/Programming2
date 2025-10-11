/*
*파일명 Assignment08.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 상품가격이 저장된 배열에 대해 할인율(%)을 입력받아 할인된 가격을 출력하는 프로그램
*작성일 : 20251011
*문제 번호 : 07-08
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

void assignment0708(void);

int main(void)
{

	assignment0708();

	return 0;
}

/*
 * 함수명 : assignment0708
 * 기능 : 상품가격이 저장된 배열에 대해 할인율(%)을 입력받아 할인된 가격을 출력하는 함수
 * 반환값 : void
 */

void assignment0708(void)
{
	int org_prices[SIZE];
	int prices[SIZE];
	double discount = 0.0;
	printf("상품 가격을 입력하세요 (5개): ");
	scanf("%d %d %d %d %d", &org_prices[0], &org_prices[1], &org_prices[2], &org_prices[3], &org_prices[4]);
	printf("할인율(%%)?: ");
	scanf("%lf", &discount);
	
	for (int i = 0; i < SIZE; i++)
	{
		prices[i] = org_prices[i] - (org_prices[i] * (discount / 100));
		printf("가격: %d --> 할인가: %d\n", org_prices[i], prices[i]);
	}

	return;
}

