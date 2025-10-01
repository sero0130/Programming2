/*
*���ϸ� : Assignment11.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : PRODUCT ����ü �迭�� �̿��� ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷� �ۼ�
*�ۼ��� : 20251001
*���� ��ȣ : 10-11
*���� : v0.1
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
* �Լ��� : Assignment11
* ��� : ��ǰ�� �Է¹޾� �˻� �� �ֹ� ó��
* ��ȯ�� : ����
*/

void Assignment11(void)
{
	int check1 = 0;
	PRODUCT products[5] = {
		{"�Ƹ޸�ī��", 4000, 10},
		{"ī���", 4500, 8},
		{"īǪġ��", 5000, 5},
		{"����������", 3500, 15},
		{"�ٴҶ��", 5500, 7}
	};

	char input_name[MAX_LEN];
	while (1)
	{
		printf("��ǰ��? : ");
		scanf("%s ", input_name);

		int size = sizeof(products) / sizeof(products[0]);

		int index = findProduct(products, size, input_name);
		
		if (input_name == ".")
		{
			printf(products);
		}

		if (input_name == "����")
		{
			break;
		}

		if (index == -1)
		{
			printf("��ǰ�� �����ϴ�.\n");
		}
		else
		{
			int order_num;
			printf("�ֹ��� ����? : ");
			scanf("%d", &order_num);
			check1 = OrderProduct(products, index, order_num);
			if (check1 == -1)
			{
				printf("��� �����մϴ�.\n");
			}
			else
			{
				printf("���� �ݾ�: %d�� %s ���: %d\n", products[index].price * order_num, products[index].name, products[index].stock);
			}
		}
	}
}

/*
* �Լ��� : findProduct
* ��� : ��ǰ�� �Է¹޾� PRODUCT ����ü �迭���� ã��, �ε��� ��ȯ
* ��ȯ�� : �ε���, ������ -1 ��ȯ
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
* �Լ��� : OrderProduct
* ��� : ��ǰ ��� Ȯ�� �� �ֹ� ������ŭ ��� ����, ��� ������ -1 ��ȯ
* ��ȯ�� : ��� ��н� 0, ������ -1
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
* �Լ��� : printProduct
* ��� : ��ǰ ���� ���
* ��ȯ�� : ����
*/

void printProduct(PRODUCT p)
{
	printf("%s %d�� ���:%d\n", p.name, p.price, p.stock);
}

