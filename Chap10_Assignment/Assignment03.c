/*
*파일명 : Assignment03.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : LOGIN 구조체 배열에 저장되어있는 ID를 찾고 PW를 입력받아 일치하는지 확인하는 프로그램
*작성일 : 20251001
*문제 번호 : 10-03
*버전 : v0.1
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
* 함수명 : Assignment03
* 기능 : ID를 입력받아 LOGIN 구조체 배열에서 찾고, PW를 입력받아 일치하는지 확인
* 반환값 : 없음
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
		printf("ID가 없습니다.\n");
	}
	else
	{
		char input_pw[MAX_LEN];
		printf("PW? : ");
		scanf("%s", input_pw);
		int check2 = checkPW(user, check1, input_pw);
		if (check2 == 1)
		{
			printf("로그인 성공\n");
		}
		else
		{
			printf("패스워드가 틀렸습니다.\n");
		}
	}
	
}

/*
* 함수명 : findID
* 기능 : LOGIN 구조체 배열에서 입력받은 ID를 찾아 인덱스 반환, 없으면 -1 반환
* 반환값 : ID가 있으면 인덱스, 없으면 -1
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
* 함수명 : checkPW
* 기능 : LOGIN 구조체 배열에서 인덱스에 해당하는 PW와 입력받은 PW가 일치하는지 확인
* 반환값 : 일치하면 1, 아니면 0
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