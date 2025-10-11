/*
*���ϸ� Assignment12.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �Է¹��� ���ڿ��� ���� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ����Ų �� ����� ����ϴ� ���α׷�(�Է¹��� �̵� ���ڼ��� ������ ����, ����� ������)
*�ۼ��� : 20251011
*���� ��ȣ : 09-12
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

void assignment0912(void);
void rotate_string(char* str, int n);
void reverse_string(char* str, int start, int end);
int string_length(const char* str);

int main(void)
{
	assignment0912();

	return 0;
}

/*
* �Լ� �̸�: assignment0912
* ���: �Է¹��� ���ڿ��� ���� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ����Ų �� ����� ����ϴ� ���α׷�(�Է¹��� �̵� ���ڼ��� ������ ����, ����� ������)
* ��ȯ ��: ���� (void)
*/

void assignment0912(void)
{
	char str[SIZE] = { 0 };
	int n = 0;

	printf("���ڿ� �Է�: ");
	fgets(str, SIZE, stdin);

	str[strcspn(str, "\n")] = 0;

	printf("�̵��� ���� �� �Է�(����: ����, ���: ������): ");
	scanf("%d", &n);

	rotate_string(str, n);
	printf("ȸ���� ���ڿ�: %s\n", str);

	return;
}

/*
* �Լ� �̸�: rotate_string
* ���: �Է¹��� ���ڿ��� ���� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ����Ű�� �Լ�
* ��ȯ ��: ���� (void)
*/

void rotate_string(char* str, int n)
{
	int len = string_length(str);

	if (len == 0) return;
	n = n % len; // �̵��� ���� ���� ���ڿ� ���̷� ���� �������� ����
	
	if (n < 0) // �������� ȸ��
	{
		n = -n; // ����� ��ȯ
		reverse_string(str, 0, n - 1); // �պκ� ������
		reverse_string(str, n, len - 1); // �޺κ� ������
		reverse_string(str, 0, len - 1); // ��ü ������
	}

	else if (n > 0) // ���������� ȸ��
	{
		reverse_string(str, 0, len - n - 1); // �պκ� ������
		reverse_string(str, len - n, len - 1); // �޺κ� ������
		reverse_string(str, 0, len - 1); // ��ü ������
	}
	
	return;
}

/*
* �Լ� �̸�: reverse_string
* ���: ���ڿ��� Ư�� ������ ������ �Լ�
* ��ȯ ��: ���� (void)
*/

void reverse_string(char* str, int start, int end)
{
	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return;
}

/*
* �Լ� �̸�: string_length
* ���: ���ڿ��� ���̸� ���ϴ� �Լ�
* ��ȯ ��: ���ڿ��� ���� (int)
*/

int string_length(const char* str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}