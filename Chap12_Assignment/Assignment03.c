/*
*파일명 : Assignment03.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 파일의 이름을 입력받아 파일 내의 문자 개수를 종류별로 세기(대소문자 구분 안함)
*작성일 : 20251110
*문제 번호 : 12-03
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void assignment03(void);
void readNumAlphabet(const char * filename);

int main(void)
{
    assignment03();

    return 0;
}

/*
* 함수명 : assignment03
* 기능 : 파일 이름 입력받아 함수에 전달
* 매개변수 : 없음
* 반환값 : 없음
*/

void assignment03(void)
{
    char name[50] = { 0 };
    printf("파일 경로를 입력하세요.");
    scanf("%s", name);
    readNumAlphabet(name);

    return;
}

/*
* 파일 이름을 매개변수로 받아 파일 내의 문자 개수를 종류별로 세는 함수
*/

void readNumAlphabet(const char * filename)
{
    int count[26] = { 0 };
    FILE *fp = fopen(filename,"r");
    if(fp == NULL)
    {
        printf("파일을 열지 못했습니다.");
        return;
    }

    // 파일 바이트 수 구하기
    fseek(fp,0,SEEK_END);
    long fsize = ftell(fp);
    rewind(fp);

    // 동적 메모리 할당
    char *buff = (char *)malloc(fsize + 1);
    if(buff == NULL)
    {
        printf("메모리할당 실패");
        return;
    }

    // 파일을 읽고 문장에서 알파벳 개수 찾기
    while(fgetc(fp) != EOF)
    {
        fgets(buff,fsize,fp);
        
        for(long i = 0; buff[i] != '\0'; i++) {
            char ch = tolower(buff[i]);

            if(ch >= 'a' && ch <= 'z')
            {
                count[ch -'a'] ++;
            }
        }
        printf("%s\n", buff);
    }

    //알파벳 출력
    for(int i = 0;i < 26; i++)
    {
        if(count[i] > 0)
        {
            printf("%c : %d  ", i + 'a', count[i]);
        }
    }

    fclose(fp);
    free(buff);

    return;
}