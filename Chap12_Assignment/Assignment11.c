/*
*파일명 : Assignment11.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 연락처 저장 파일을 구조체로 받아와 연락처 출력(동적 메모리 사용)
*작성일 : 20251110
*문제 번호 : 12-11
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACT 100

typedef struct contact {
	char name[30];
	char phone[30];
}CONTACT;

void assignment11(void);
int loadFile(const char* filename, CONTACT contacts[], int max);

int main(void)
{
	assignment11();

	return 0;
}

/*
* 함수명 : assignment11
* 기능 : 파일 이름 입력 받고 동적 메모리 할당 그리고 최종 출력
* 매개변수 : 없음
* 반환값 : 없음
*/

void assignment11(void)
{
	char filename[50];
	int count = 0;
	char name[30];

	CONTACT * contacts = NULL;
	contacts = (CONTACT*)malloc(MAX_CONTACT * sizeof(CONTACT));
	if (contacts == NULL)
	{
		printf("메모리 할당 실패");
		return;
	}

	printf("연락처 파일명?");
	scanf("%49s", filename);

	count = loadFile(filename, contacts, MAX_CONTACT);

	if (count <= 0)
	{
		printf("연락처를 불러오지 못했습니다.");
		free(contacts);
		return;
	}

	printf("%d개의 연락처를 로딩했습니다.", count);
	int i = 0;
	while(1)
	{
		printf("이름(.입력시 종료)");
		scanf("%29s", name);
		if (strcmp(((contacts + i)->name), name) == 0)
		{
			printf("%s의 전화번호 %s로 전화를 겁니다...", (contacts + i)->name, (contacts + i)->phone);
		}
		else if (strcmp(".", name) == 0)
		{
			printf("종료합니다.");
			break;
		}
		else
		{
			printf("없는 전화번호 입니다.");
		}
		i++;
	}

	free(contacts);
	return;
}

/*
* 함수명 : loadFile
* 기능 : 파일을 구조체 배열에 넣기
* 매개변수 : 파일 이름, 구조체 배열, 구조체 배열 최대치
* 반환값 : 연락처 수
*/

int loadFile(const char * filename, CONTACT contact[], int max)
{
	
	int count = 0;
	int j = 0;
	CONTACT* contacts = &contact[j];

	FILE* fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다.");
		return 0;
	}

	while ((count < max) && (fscanf(fp, "%s %s", contacts[count].name, contacts[count].phone) == 2))
	{
		count++;
	}
	fclose(fp);

	return count;
}