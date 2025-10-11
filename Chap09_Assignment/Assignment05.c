/*
*���ϸ� Assignment05.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ�  strcmp_ic �Լ��� �ۼ��Ͽ� strcmp�� �������� ����� ��ȯ�ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 09-05
*���� : v0.1
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
* �Լ� �̸�: assignment0905
* ���: ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ�  strcmp_ic �Լ��� �ۼ��Ͽ� strcmp�� �������� ����� ��ȯ�ϴ� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0905(void) 
{
    char s1[SIZE], s2[SIZE];

    printf("ù ��° ���ڿ� : ");
    gets(s1);

    printf("�� ��° ���ڿ� : ");
    gets(s2);

    if (strcmp_ic(s1, s2) == 0)
    {
        printf("%s�� %s�� �����ϴ�.\n", s1, s2);
    }
    else
    {
        printf("%s�� %s�� �ٸ��ϴ�.\n", s1, s2);
    }
}

/*
* �Լ� �̸�: strcmp_ic
* ���: ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� �Լ�
* ��ȯ ��: ������ 0, �ٸ��� ���� �Ǵ� ��� (int)
*/

int strcmp_ic(const char* lhs, const char* rhs) 
{
    while (*lhs && *rhs) 
    {
        char c1 = tolower((unsigned char)*lhs);
        char c2 = tolower((unsigned char)*rhs);

        if (c1 != c2)
            return c1 - c2; // �ٸ��� ���̸� ��ȯ

        lhs++;
        rhs++;
    }

    return *lhs - *rhs; // ������ ������ ���� ���� ��ȯ
}

