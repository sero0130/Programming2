/*
*파일명 : Assignment11.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : PRODUCT 구조체 배열을 이용해 제품명을 입력받아 검색 후 주문 처리하는 프로그램 작성
*작성일 : 20251001
*문제 번호 : 10-11
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LEN 20

typedef struct {
	char name[MAX_LEN];
	int price;
	int stock;
} PRODUCT;


void Assignment11(void);
int findProduct(PRODUCT arr[], int size, char* name);
int OrderProduct(PRODUCT arr[], int index, int number);
void printProduct(PRODUCT p);


int main(void)
{
	Assignment11();

	return 0;
}

/*
* 함수명 : Assignment11
* 기능 : 제품명 입력받아 검색 후 주문 처리
* 반환값 : 없음
*/

void Assignment11(void)
{
	int check1 = 0;
	PRODUCT products[5] = {
		{"아메리카노", 4000, 10},
		{"카페라떼", 4500, 8},
		{"카푸치노", 5000, 5},
		{"에스프레소", 3500, 15},
		{"바닐라라떼", 5500, 7}
	};

	char input_name[MAX_LEN];
	while (1)
	{
		printf("제품명? : ");
		scanf("%s ", input_name);

		int size = sizeof(products) / sizeof(products[0]);

		int index = findProduct(products, size, input_name);
		
		if (input_name == ".")
		{
			printf(products);
		}

		if (input_name == "종료")
		{
			break;
		}

		if (index == -1)
		{
			printf("제품이 없습니다.\n");
		}
		else
		{
			int order_num;
			printf("주문할 수량? : ");
			scanf("%d", &order_num);
			check1 = OrderProduct(products, index, order_num);
			if (check1 == -1)
			{
				printf("재고가 부족합니다.\n");
			}
			else
			{
				printf("결제 금액: %d원 %s 재고: %d\n", products[index].price * order_num, products[index].name, products[index].stock);
			}
		}
	}
}

/*
* 함수명 : findProduct
* 기능 : 제품명 입력받아 PRODUCT 구조체 배열에서 찾고, 인덱스 반환
* 반환값 : 인덱스, 없으면 -1 반환
*/

int findProduct(PRODUCT arr[], int size, char* name)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

/*
* 함수명 : OrderProduct
* 기능 : 제품 재고 확인 후 주문 수량만큼 재고 차감, 재고 부족시 -1 반환
* 반환값 : 재고 충분시 0, 부족시 -1
*/

int OrderProduct(PRODUCT arr[], int index, int number)
{
	if (arr[index].name == 0 || number <= 0)
	{
		return -1;
	}
	if (arr[index].stock >= number)
	{
		arr[index].stock -= number;
		return 0;
	}
	else
	{
		return -1;
	}
}

/*
* 함수명 : printProduct
* 기능 : 제품 정보 출력
* 반환값 : 없음
*/

void printProduct(PRODUCT p)
{
	printf("%s %d원 재고:%d\n", p.name, p.price, p.stock);
}

