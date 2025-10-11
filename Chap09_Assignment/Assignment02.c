/*
*���ϸ� Assignment02.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ڹ迭�� �Ű������� ���޹޾� ���鹮�ڸ� ��� �����ϴ� remove_spaces �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 09-02
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0902(void);
void remove_spaces(char* str);

int main(void)
{
	assignment0902();

	return 0;
}

/*
*�Լ� �̸�: assignment0902
*���: ���ڹ迭�� �Ű������� ���޹޾� ���鹮�ڸ� ��� �����ϴ� remove_spaces �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
*��ȯ ��: ���� (void)
*/

void assignment0902(void)
{
	char str[SIZE] = { 0 };

	printf("���ڿ� �Է�: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	remove_spaces(str);

	printf("���� ���� �� ���ڿ�: %s\n", str);

	return;
}

/*
* �Լ� �̸�: remove_spaces
* ���: ���ڹ迭�� �Ű������� ���޹޾� ���鹮�ڸ� ��� �����ϴ� �Լ�
* ��ȯ ��: ���� (void)
*/

void remove_spaces(char* str)
{
	char* read_ptr = str;
	char* write_ptr = str;
	while (*read_ptr)
	{
		if (*read_ptr != ' ')
		{
			*write_ptr = *read_ptr;
			write_ptr++;
		}
		read_ptr++;
	}
	*write_ptr = '\0';
	return;
}