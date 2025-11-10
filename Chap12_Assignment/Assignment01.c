/*
*파일명 : Assignment01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 파일 이름을 입력받아 파일의 내용을 라인번호와 함께 출력
*작성일 : 20251110
*문제 번호 : 12-01
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void assignment01(void);
void readNprintln(const char * filename);

int main(void)
{
    assignment01();

    return 0;
}

/*
* 함수명 : assignment01
* 기능 : 파일 이름을 입력받아 함수를 사용해 파일의 내용을 라인번호와 출력
* 매개변수 : 없음
* 반환값 : 없음
*/
void assignment01(void)
{
    char str[50] = { 0 };
    scanf("%s", str);
    readNprintln(str);

    return;
}


/*
* 함수명 : readNprintln
* 기능 : 파일 이름을 매개 변수로 받아 파일의 내용을 라인번호와 출력
* 매개변수 : 파일이름
* 반환값 : 없음
*/

void readNprintln(const char * filename)
{
    int i = 1;
    FILE *fp = fopen(filename,"r");

    if(fp == NULL)
    {
        printf("파일을 열지 못했습니다.");
        return;
    }

    //파일 바이트 수 구하기
    fseek(fp, 0, SEEK_END); 
    long fsize = ftell(fp);
    rewind(fp);

    //메모리 할당하기
    char *buffer = (char *)malloc(fsize + 1);
    if(buffer == NULL)
    {
        printf("메모리 할당 실패");
        return;
    }

    while( fgetc(fp) != EOF)
    {
        fgets(buffer, fsize, fp);
        printf("%d: %s", i, buffer);
        i++;
    }

    fclose(fp);
    free(buffer);

    return;
}