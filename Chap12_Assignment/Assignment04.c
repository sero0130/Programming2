/*
*파일명 : Assignment04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : ID PW 저장된 파일을 크기 10인 LOGIN 구조체 배열로 읽어오고, 로그인 성공 아님 로그인 실패 출력.
*작성일 : 20251110
*문제 번호 : 12-04
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USER 10

typedef struct login {
    char ID[50];
    char PW[50];
}LOGIN;

void assignment04(void);
void loadUSER(LOGIN login[]);

int main(void)
{
    assignment04();

    return 0;
}

/*
* 함수명 : assignment04
* 기능 : ID 입력받아 확인후 PW 입력받은 후 로그인 성공 또는 실패 출력
* 매개변수 : void
* 반환값 : void
*/

void assignment04(void)
{
    LOGIN login[MAX_USER];
    loadUSER(login);

    char ID[50];
    char PW[50];

    printf("ID?");
    scanf("%s", ID);

    for (int i = 0; i < MAX_USER; i++)
    {
        if (strcmp(login[i].ID, ID) == 0)
        {
            printf("PW?");
            scanf("%s", PW);
            if (strcmp(login[i].PW, PW) == 0)
            {
                printf("로그인 성공");
                break;
            }
            else
            {
                printf("비밀번호가 틀렸습니다.");
            }
        }
        else
        {
            printf("아이디를 찾을 수 없음");
        }
    }

    return;
}

/*
* 함수명 : loadUSER
* 기능 : ID PW 불러와서 구조체에 입력
* 매개변수 : LOGIN login[]
* 반환값 : count
*/

void loadUSER(LOGIN login[])
{
    FILE* fp = fopen("D:/txt/password.txt", "r");
    int count = 0;

    if (fp == NULL)
    {
        printf("파일을 열지 못했습니다.");
        return;
    }

    while ((count < MAX_USER) &&
        (fscanf(fp, "%s %s", login[count].ID, login[count].PW) != EOF))
    {
        count++;
    }

    fclose(fp);
    return;
}