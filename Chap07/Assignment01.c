/*
*���ϸ� Assignment01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ũ�Ⱑ 10�� �迭�� ù��° ���� ���� ������ �Է¹޾� �迭�� ä��� ����ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 07-01
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0701(void);
void fillArray(int arr[], int size, int first, int diff);

int main(void)
{
	assignment0701();
	
	return 0;
}

/*
* �Լ� �̸�: assignment0701
* ���: ù ��° �װ� ������ �Է¹޾� ���� ������ �迭�� ä��� ����ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void assignment0701(void)
{
	int arr[SIZE];
	int first = 0, diff = 0;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("ù ��° ��: ");
	scanf("%d", &first);
	printf("����: ");
	scanf("%d", &diff);

	fillArray(arr, size, first, diff);

	printf("���� ����: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	return;
}

/*
* �Լ� �̸�: fillArray
* ���: �迭�� ���� ������ ä��� �Լ�
* ��ȯ ��: ���� (void)
*/

void fillArray(int arr[], int size, int first, int diff)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = first + (i * diff);
	}

	return;
}