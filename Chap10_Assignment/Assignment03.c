/*
*���ϸ� : Assignment03.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : LOGIN ����ü �迭�� ����Ǿ��ִ� ID�� ã�� PW�� �Է¹޾� ��ġ�ϴ��� Ȯ���ϴ� ���α׷�
*�ۼ��� : 20251001
*���� ��ȣ : 10-03
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LEN 20


typedef struct {
	char id[MAX_LEN];
	char password[MAX_LEN];
} LOGIN;

void Assignment03(void);
int findID(LOGIN arr[], int size, char* id);
int checkPW(LOGIN arr[], int index, char* pw);


int main(void)
{
	Assignment03();

	return 0;
}

/*
* �Լ��� : Assignment03
* ��� : ID�� �Է¹޾� LOGIN ����ü �迭���� ã��, PW�� �Է¹޾� ��ġ�ϴ��� Ȯ��
* ��ȯ�� : ����
*/

void Assignment03(void)
{
	LOGIN user[5] = {
		{"Admin", "1234"},
		{"User1", "abcd"},
		{"User2", "qwer"},
		{"Guest", "Idontknow"},
		{"Test", "test"}
	};

	int Size = sizeof(user) / sizeof(user[0]);
	char input_id[MAX_LEN];
	int check1 = findID(user, Size, input_id);
	if (check1 == -1)
	{
		printf("ID�� �����ϴ�.\n");
	}
	else
	{
		char input_pw[MAX_LEN];
		printf("PW? : ");
		scanf("%s", input_pw);
		int check2 = checkPW(user, check1, input_pw);
		if (check2 == 1)
		{
			printf("�α��� ����\n");
		}
		else
		{
			printf("�н����尡 Ʋ�Ƚ��ϴ�.\n");
		}
	}
	
}

/*
* �Լ��� : findID
* ��� : LOGIN ����ü �迭���� �Է¹��� ID�� ã�� �ε��� ��ȯ, ������ -1 ��ȯ
* ��ȯ�� : ID�� ������ �ε���, ������ -1
*/

int findID(LOGIN arr[], int size, char* id)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(arr[i].id, id) == 0)
		{
			return i;
		}
	}
	return -1;
}

/*
* �Լ��� : checkPW
* ��� : LOGIN ����ü �迭���� �ε����� �ش��ϴ� PW�� �Է¹��� PW�� ��ġ�ϴ��� Ȯ��
* ��ȯ�� : ��ġ�ϸ� 1, �ƴϸ� 0
*/

int checkPW(LOGIN arr[], int index, char* pw)
{
	if (strcmp(arr[index].password, pw) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}