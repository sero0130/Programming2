/*
*���ϸ� Assignment06.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���� ���ҵ��� �������� ����� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 07-06
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

void assignment0706(void);
void reverse_array(double arr[], int size);

int main(void)
{
	assignment0706();

	return 0;
}

/*
 * �Լ��� : assignment0706
 * ��� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���� ���ҵ��� �������� ����� �Լ� ȣ��
 * ��ȯ�� : void
 */

void assignment0706(void)
{
	double arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	reverse_array(arr, SIZE);

	return 0;
}

/*
 * �Լ��� : reverse_array
 * ��� : ũ�Ⱑ 10�� �Ǽ��� �迭�� ���� ���ҵ��� �������� ����� �Լ�
 * ��ȯ�� : void
 */

void reverse_array(double arr[], int size)
{
	double array[SIZE] = { 0.0 };

	// �迭�� �������� ä���
	for (int i = SIZE - 1; i >= 0; i--)
	{
		array[SIZE - 1 - i] = arr[i];
	}

	// ���� �迭 ���
	for (int i = 0; i < SIZE; i++)
	{
		printf("%lf ", array[i]);
	}

	return;
}