/*
*���ϸ� Assignment01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ ���ڿ��� �Է¹޾Ƽ� ���鹮���� ������ ���� ���α׷��� �ۼ�
*�ۼ��� : 20251011
*���� ��ȣ : 09-01
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0901(void);
int count_spaces(const char* str);

int main(void)
{
	assignment0901();

	return 0;
}

/*
* �Լ� �̸�: assignment0901
* ���: ������ ���ڿ��� �Է¹޾Ƽ� ���鹮���� ������ ���� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0901(void)
{
	char str[SIZE] = { 0 };

	printf("���ڿ� �Է�: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	int space_count = count_spaces(str);

	printf("���鹮���� ����: %d\n", space_count);

	return;
}

/*
* �Լ� �̸�: count_spaces
* ���: ���ڿ����� ���鹮���� ������ ���� �Լ�
* ��ȯ ��: ���鹮���� ���� (int)
*/

int count_spaces(const char* str)
{
	int count = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	return count;
}