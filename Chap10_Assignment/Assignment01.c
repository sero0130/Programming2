/*
*���ϸ� : Assignment01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����ϰ� �̸� �Է¹޾� �����ϰ� ����ϴ� ���α׷�(�н����� ���� �� ��ŭ * ���)
*�ۼ��� : 20251001
*���� ��ȣ : 10-01
*���� : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_LEN 20


typedef struct {
	char id[MAX_LEN];
	char password[MAX_LEN];
} LOGIN;


void Assignment01(void);
LOGIN inputID(void);
void print_asterisk(char* p);


int main(void)
{
	Assignment01();

	return 0;
}

/*
* �Լ��� : Assignment01
* ��� : ID �� PW �Է¹޾� ���
* ��ȯ�� : ����
*/

void Assignment01(void)
{
	LOGIN user = inputID();
	printf("ID: %s\n", user.id);
	printf("PW: ");
	print_asterisk(user.password);
}

/*
* �Լ��� : inputID
* ��� : ���̵�� �н����带 user ����ü�� �Է¹޾� ��ȯ
* ��ȯ�� : user ����ü
*/

LOGIN inputID(void)
{
	LOGIN user;
	printf("ID? : ");
	scanf("%s", user.id);
	printf("Password? : ");
	scanf("%s", user.password);

	return user;
}

/*
* �Լ��� : print_asterisk
* ��� : PW ���̸�ŭ * ���
* ��ȯ�� : ����
*/

void print_asterisk(char*p)
{
	while (*p != NULL)
	{
		printf("*");
		p++;
	}
}