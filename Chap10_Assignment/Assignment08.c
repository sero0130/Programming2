/*
*파일명 : Assignment08.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 카페 판매 제품 정보 나타내는 PRODUCT 구조체 정의 및 입력받아 저장 후 출력하는 프로그램
*작성일 : 20251001
*문제 번호 : 10-08
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LEN 20

typedef struct {
	char name[MAX_LEN];
	int price;
	int stock;
} PRODUCT;

void Assignment08(void);
PRODUCT inputProduct(void);
void printProduct(PRODUCT p);

int main(void)
{
	Assignment08();

	return 0;
}

/*
* 함수명 : Assignment08
* 기능 : 제품 정보 입력받아 출력
* 반환값 : 없음
*/

void Assignment08(void)
{
	PRODUCT p = inputProduct();
	printProduct(p);
}

/*
* 함수명 : inputProduct
* 기능 : 제품명, 가격, 재고를 입력받아 PRODUCT 구조체에 저장 후 반환
* 반환값 : PRODUCT 구조체
*/

PRODUCT inputProduct(void)
{
	PRODUCT p;
	printf("제품명? : ");
	scanf("%s", p.name);
	printf("가격? : ");
	scanf("%d", &p.price);
	printf("재고? : ");
	scanf("%d", &p.stock);

	return p;
}

/*
* 함수명 : printProduct
* 기능 : PRODUCT 구조체의 내용을 출력
* 반환값 : 없음
*/

void printProduct(PRODUCT p)
{
	printf("제품명: %s ", p.name);
	printf("가격: %d ", p.price);
	printf("재고: %d\n", p.stock);
}