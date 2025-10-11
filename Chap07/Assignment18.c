/*
*���ϸ� Assignment18.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ������ �����ϱ�(�ߺ�X) �Է��� ���������� ������ ���ҵ��� ���
*�ۼ��� : 20251011
*���� ��ȣ : 07-18
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment0718(void);
int checkdup(int arr[], int length);

int main(void)
{
	assignment0718();
	
	return 0;
}

/*
 * �Լ��� : assignment0718
 * ��� : �ִ� 10���� ������ ���Ҹ� ������ �� �ִ� ������ �����ϱ�(�ߺ�X) �Է��� ���������� ������ ���ҵ��� ���
 * ��ȯ�� : void
 */
void assignment0718(void)
{
	int arr[SIZE];

	for (int i = 0; i < SIZE;)
	{
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &arr[i]);

		int chk = checkdup(arr, i);
		if (chk != -1)
		{
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", chk);
			for (int j = 0; j < i; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
			continue;
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", arr[j]);
		}

		printf("\n");
		i++;
	}
}

/*
 * �Լ��� : checkdup
 * ��� : �迭�� �ߺ��� ���Ұ� �ִ��� Ȯ���ϴ� �Լ�
 * ��ȯ�� : �ߺ��� ������ �ε���, ������ -1 ��ȯ
 */
int checkdup(int arr[], int length)
{
	for (int i = 0; i <= length; i++)
	{
		for (int j = i + 1; j <= length; j++)
		{
			if (arr[i] == arr[j])
			{
				arr[j] = NULL;
				return i;
			}
		}
	}
	return -1;
}