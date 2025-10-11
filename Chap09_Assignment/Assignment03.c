/*
*���ϸ� Assignment03.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 09-03
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0903(void);
void toggle_case(char* str);

int main(void)
{
	assignment0903();
	
	return 0;
}

/*
* �Լ� �̸�: assignment0903
* ���: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0903(void)
{
	char str[SIZE] = { 0 };

	printf("���ڿ� �Է�: ");

	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	toggle_case(str);

	printf("��ȯ�� ���ڿ�: %s\n", str);

	return;
}

/*
* �Լ� �̸�: toggle_case
* ���: �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ��ȯ�ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void toggle_case(char* str)
{
	char* ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		else if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + ('a' - 'A');
		}
		ptr++;
	}
	return;
}