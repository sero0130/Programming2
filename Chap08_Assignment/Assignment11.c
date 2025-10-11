/*
*파일명 Assignment11.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 직사각형의 넓이와 둘레를 구하는 함수를 작성하고 이를 호출하는 프로그램
*작성일 : 20251011
*문제 번호 : 08-11
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0811(void);
int get_rect_info(int* px, int* py);

int main(void)
{
	assignment0811();
	
	return 0;
}

/*
* 함수 이름: assignment0811
* 기능: 직사각형의 넓이와 둘레를 구하는 함수를 작성하고 이를 호출하는 프로그램
* 반환 값: 없음 (void)
*/

void assignment0811(void)
{
	int x = 0, y = 0;
	int* px = &x, * py = &y;
	printf("가로?");
	scanf("%d", px);
	printf("세로?");
	scanf("%d", py);
	get_rect_info(px, py);

	return;
}

/*
* 함수 이름: get_rect_info
* 기능: 직사각형의 넓이와 둘레를 구하는 함수
* 반환 값: 0 (int)
*/

int get_rect_info(int * px, int * py)
{
	int area = 0, perimeter = 0;
	area = (*px) * (*py);
	perimeter = 2 * (*px + *py);
	printf("넓이: %d, ", area);
	printf("둘레: %d\n", perimeter);

	return 0;
}