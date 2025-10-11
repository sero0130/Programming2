/*
*���ϸ� Assignment08.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �迭�� Ư�� ������ ä��� �Լ��� �ִ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 08-08
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void assignment0808(void);
void fillArray(int * arr, int size, int value);

int main(void)
{
		assignment0808();
		
		return 0;
}

/*
* �Լ� �̸�: assignment0808
* ���: ������ �迭�� Ư�� ������ ä��� �Լ��� �ִ� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0808(void)
{
	int arr[SIZE] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int value = 0;
	int* ptr = arr;

	printf("�迭�� ä�� �� �Է�: ");
	scanf("%d", &value);

	fillArray(ptr, size, value);
	printf("�迭: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}

/*
* �Լ� �̸�: fillArray
* ���: ������ �迭�� Ư�� ������ ä��� �Լ�
* ��ȯ ��: ���� (void)
*/

void fillArray(int* arr, int size, int value)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = value;
	}
}