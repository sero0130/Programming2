/*
*파일명 Assignment16.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 로그인사용자로부터 아이디 패스워드 입력받아 로그인 처리, 3번 시도 후에도 올바른 입력이 없으면 로그인 실패 에러 메시지 출력 프로그램(사용자 아이디는 5명	, 패스워드도 5명)
*작성일 : 20251011
*문제 번호 : 09-16
*버전 : v0.1
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
* 함수 이름: assignment0916
* 기능: 로그인사용자로부터 아이디 패스워드 입력받아 로그인 처리, 3번 시도 후에도 올바른 입력이 없으면 로그인 실패 에러 메시지 출력 프로그램(사용자 아이디는 5명	, 패스워드도 5명)
* 반환 값: 없음 (void)
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
			printf("로그인 성공!\n");
			login_success = 1;
		}
		else
		{
			printf("다시 시도하세요.\n");
			attempts++;
		}
	}
	if (!login_success)
	{
		printf("로그인에 실패했습니다.\n");
	}
	return;
}

/*
* 함수 이름: validate_login
* 기능: 입력받은 아이디와 패스워드가 유효한지 검사하는 함수
* 반환 값: 유효하면 1, 아니면 0 (int)
*/

int validate_login(const char* username, const char* password, const char valid_usernames[][SIZE], const char valid_passwords[][SIZE], int user_count)
{
	for (int i = 0; i < user_count; i++)
	{
		if (strcmp(username, valid_usernames[i]) == 0 && strcmp(password, valid_passwords[i]) == 0)
		{
			return 1; // 로그인 성공
		}
	}
	return 0; // 로그인 실패
}

/*
* 함수 이름: get_input
* 기능: 사용자로부터 아이디와 패스워드를 입력받는 함수
* 반환 값: 없음 (void)
*/

void get_input(char* username, char* password)
{
	printf("아이디: ");
	fgets(username, SIZE, stdin);

	username[strcspn(username, "\n")] = 0;
	printf("패스워드: ");

	fgets(password, SIZE, stdin);
	password[strcspn(password, "\n")] = 0;
	return;
}