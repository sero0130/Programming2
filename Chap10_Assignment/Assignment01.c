/*
*파일명 : Assignment01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하고 이를 입력받아 저장하고 출력하는 프로그램(패스워드 글자 수 만큼 * 출력)
*작성일 : 20251001
*문제 번호 : 10-01
*버전 : v0.1
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
* 함수명 : Assignment01
* 기능 : ID 및 PW 입력받아 출력
* 반환값 : 없음
*/

void Assignment01(void)
{
	LOGIN user = inputID();
	printf("ID: %s\n", user.id);
	printf("PW: ");
	print_asterisk(user.password);
}

/*
* 함수명 : inputID
* 기능 : 아이디와 패스워드를 user 구조체에 입력받아 반환
* 반환값 : user 구조체
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
* 함수명 : print_asterisk
* 기능 : PW 길이만큼 * 출력
* 반환값 : 없음
*/

void print_asterisk(char*p)
{
	while (*p != NULL)
	{
		printf("*");
		p++;
	}
}