/*
*���ϸ� Assignment08.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ��ǰ������ ����� �迭�� ���� ������(%)�� �Է¹޾� ���ε� ������ ����ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 07-08
*���� : v0.1
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
 * �Լ��� : assignment0708
 * ��� : ��ǰ������ ����� �迭�� ���� ������(%)�� �Է¹޾� ���ε� ������ ����ϴ� �Լ�
 * ��ȯ�� : void
 */

void assignment0708(void)
{
	int org_prices[SIZE];
	int prices[SIZE];
	double discount = 0.0;
	printf("��ǰ ������ �Է��ϼ��� (5��): ");
	scanf("%d %d %d %d %d", &org_prices[0], &org_prices[1], &org_prices[2], &org_prices[3], &org_prices[4]);
	printf("������(%%)?: ");
	scanf("%lf", &discount);
	
	for (int i = 0; i < SIZE; i++)
	{
		prices[i] = org_prices[i] - (org_prices[i] * (discount / 100));
		printf("����: %d --> ���ΰ�: %d\n", org_prices[i], prices[i]);
	}

	return;
}

