/*
*���ϸ� Assignment12.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �迭�� Ű ���� ���� �޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� ���� �� �����ϴ� �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 08-12
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0812(void);
int find_all_in_array(int* arr, int* key, int size, int* pidx);

int main(void)
{
	assignment0812();

	return 0;
}

/*
* �Լ� �̸�: assignment0812
* ���: ������ �迭�� Ű ���� ���� �޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� ���� �� �����ϴ� �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0812(void)
{
	int arr[SIZE] = { 12,45,62,12,99,83,23,12,72,37 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int index[SIZE] = { 0 };
	int key = 0;
	int* ptr = arr;
	int* pidx = index;
	int* pkey = &key;

	printf("ã�� ��? ");
	scanf("%d", pkey);
	int count = find_all_in_array(ptr, pkey, size);
	printf("ã�� �׸��� ��� %d���Դϴ�.\n", count);
	printf("ã�� �׸��� �ε���: ");
	for (int i = 0; i < count; i++)
	{
		printf("%d ", index[i]);
	}
	printf("\n");

	return;
}

/*
* �Լ� �̸�: find_all_in_array
* ���: ������ �迭�� Ű ���� ���� �޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� ���� �� �����ϴ� �Լ�
* ��ȯ ��: ã�� �׸��� ���� (int)
*/

int find_all_in_array(int* arr, int* key, int size, int* pidx)
{
	int i;
	int count = 0;
	for (i = 0; i < size; i++)
	{
		if (*(arr + i) == *key)
		{
			*(pidx + count) = i;
			count++;
		}
	}
	return count;
}
