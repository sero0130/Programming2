/*
*파일명 Assignment05.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 대소문자를 구분하지 않고 문자열을 비교하는  strcmp_ic 함수를 작성하여 strcmp와 마찬가지 결과를 반환하는 프로그램
*작성일 : 20251011
*문제 번호 : 09-05
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

void assignment0905(void);
int strcmp_ic(const char* lhs, const char* rhs);


int main(void) 
{
    assignment0905();

    return 0;
}

/*
* 함수 이름: assignment0905
* 기능: 대소문자를 구분하지 않고 문자열을 비교하는  strcmp_ic 함수를 작성하여 strcmp와 마찬가지 결과를 반환하는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0905(void) 
{
    char s1[SIZE], s2[SIZE];

    printf("첫 번째 문자열 : ");
    gets(s1);

    printf("두 번째 문자열 : ");
    gets(s2);

    if (strcmp_ic(s1, s2) == 0)
    {
        printf("%s과 %s가 같습니다.\n", s1, s2);
    }
    else
    {
        printf("%s과 %s가 다릅니다.\n", s1, s2);
    }
}

/*
* 함수 이름: strcmp_ic
* 기능: 대소문자를 구분하지 않고 문자열을 비교하는 함수
* 반환 값: 같으면 0, 다르면 음수 또는 양수 (int)
*/

int strcmp_ic(const char* lhs, const char* rhs) 
{
    while (*lhs && *rhs) 
    {
        char c1 = tolower((unsigned char)*lhs);
        char c2 = tolower((unsigned char)*rhs);

        if (c1 != c2)
            return c1 - c2; // 다르면 차이를 반환

        lhs++;
        rhs++;
    }

    return *lhs - *rhs; // 끝까지 같으면 길이 차이 반환
}

