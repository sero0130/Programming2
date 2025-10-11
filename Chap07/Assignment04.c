/*
*���ϸ� Assignment04.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���� �ּڰ� �ִ��� ã�� �ε����� �Բ� ����ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 07-04
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0704(void);
int find_min_max(int arr[], int size);

int main(void)
{
	assignment0704();

	return 0;
}

/*
 * �Լ��� : assignment0704
 * ��� : ������ �迭 ���� �� �ּڰ� �ִ� ã�� �Լ� ȣ��
 * ��ȯ�� : void
 */

void assignment0704(void)
{
	// ������ �迭 ���� 
	int arr[SIZE] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	// �Լ� ȣ��
	find_min_max(arr, SIZE);

	return;
}

/*
 * �Լ��� : find_min_max
 * ��� : ������ �迭�� ���� �ּڰ� �ִ��� ã�� �ε����� �Բ� ����ϴ� �Լ�
 * ��ȯ�� : 0
 */
int find_min_max(int arr[], int size)
{
	int min = arr[0], max = arr[0];
	int min_index = 0, max_index = 0;

	// �ִ� �ּ� ã��
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}
		else
		{
			max = arr[i];
			max_index = i;
		}
	}
	// �ּڰ��� �ִ�, �ε��� ���
	printf("�ּڰ�: %d, �ε���: %d\n", min, min_index);
	printf("�ִ�: %d, �ε���: %d\n", max, max_index);

	return 0;
}