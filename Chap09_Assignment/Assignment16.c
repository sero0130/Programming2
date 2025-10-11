/*
*���ϸ� Assignment16.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �α��λ���ڷκ��� ���̵� �н����� �Է¹޾� �α��� ó��, 3�� �õ� �Ŀ��� �ùٸ� �Է��� ������ �α��� ���� ���� �޽��� ��� ���α׷�(����� ���̵�� 5��	, �н����嵵 5��)
*�ۼ��� : 20251011
*���� ��ȣ : 09-16
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define USER_COUNT 5
#define MAX_ATTEMPTS 3

void assignment0916(void);
int validate_login(const char* username, const char* password, const char valid_usernames[][SIZE], const char valid_passwords[][SIZE], int user_count);
void get_input(char* username, char* password);

int main(void)
{
	assignment0916();
	
	return 0;
}

/*
* �Լ� �̸�: assignment0916
* ���: �α��λ���ڷκ��� ���̵� �н����� �Է¹޾� �α��� ó��, 3�� �õ� �Ŀ��� �ùٸ� �Է��� ������ �α��� ���� ���� �޽��� ��� ���α׷�(����� ���̵�� 5��	, �н����嵵 5��)
* ��ȯ ��: ���� (void)
*/

void assignment0916(void)
{
	const char valid_usernames[USER_COUNT][SIZE] = { "user1", "user2", "user3", "user4", "user5" };
	const char valid_passwords[USER_COUNT][SIZE] = { "pass1", "pass2", "pass3", "pass4", "pass5" };
	char username[SIZE] = { 0 };
	char password[SIZE] = { 0 };
	int attempts = 0;
	int login_success = 0;

	while (attempts < MAX_ATTEMPTS && !login_success)
	{
		get_input(username, password);
		if (validate_login(username, password, valid_usernames, valid_passwords, USER_COUNT))
		{
			printf("�α��� ����!\n");
			login_success = 1;
		}
		else
		{
			printf("�ٽ� �õ��ϼ���.\n");
			attempts++;
		}
	}
	if (!login_success)
	{
		printf("�α��ο� �����߽��ϴ�.\n");
	}
	return;
}

/*
* �Լ� �̸�: validate_login
* ���: �Է¹��� ���̵�� �н����尡 ��ȿ���� �˻��ϴ� �Լ�
* ��ȯ ��: ��ȿ�ϸ� 1, �ƴϸ� 0 (int)
*/

int validate_login(const char* username, const char* password, const char valid_usernames[][SIZE], const char valid_passwords[][SIZE], int user_count)
{
	for (int i = 0; i < user_count; i++)
	{
		if (strcmp(username, valid_usernames[i]) == 0 && strcmp(password, valid_passwords[i]) == 0)
		{
			return 1; // �α��� ����
		}
	}
	return 0; // �α��� ����
}

/*
* �Լ� �̸�: get_input
* ���: ����ڷκ��� ���̵�� �н����带 �Է¹޴� �Լ�
* ��ȯ ��: ���� (void)
*/

void get_input(char* username, char* password)
{
	printf("���̵�: ");
	fgets(username, SIZE, stdin);

	username[strcspn(username, "\n")] = 0;
	printf("�н�����: ");

	fgets(password, SIZE, stdin);
	password[strcspn(password, "\n")] = 0;
	return;
}