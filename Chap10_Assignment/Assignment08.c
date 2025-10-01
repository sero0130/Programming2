/*
*���ϸ� : Assignment08.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ī�� �Ǹ� ��ǰ ���� ��Ÿ���� PRODUCT ����ü ���� �� �Է¹޾� ���� �� ����ϴ� ���α׷�
*�ۼ��� : 20251001
*���� ��ȣ : 10-08
*���� : v0.1
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
* �Լ��� : Assignment08
* ��� : ��ǰ ���� �Է¹޾� ���
* ��ȯ�� : ����
*/

void Assignment08(void)
{
	PRODUCT p = inputProduct();
	printProduct(p);
}

/*
* �Լ��� : inputProduct
* ��� : ��ǰ��, ����, ��� �Է¹޾� PRODUCT ����ü�� ���� �� ��ȯ
* ��ȯ�� : PRODUCT ����ü
*/

PRODUCT inputProduct(void)
{
	PRODUCT p;
	printf("��ǰ��? : ");
	scanf("%s", p.name);
	printf("����? : ");
	scanf("%d", &p.price);
	printf("���? : ");
	scanf("%d", &p.stock);

	return p;
}

/*
* �Լ��� : printProduct
* ��� : PRODUCT ����ü�� ������ ���
* ��ȯ�� : ����
*/

void printProduct(PRODUCT p)
{
	printf("��ǰ��: %s ", p.name);
	printf("����: %d ", p.price);
	printf("���: %d\n", p.stock);
}