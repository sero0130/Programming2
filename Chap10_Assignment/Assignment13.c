/*
*파일명 : Assignment13.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 직사각형 정보를 나타내는 RECT 구조체 정의 점 좌표는 POINT 구조체 이용해서 직사각형 정보를 입력받아 출력하는 프로그램
*작성일 : 20251001
*문제 번호 : 10-13
*버전 : v0.1
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct {
	int x;
	int y;
} POINT;

typedef struct {
	POINT bottomLeft;
	POINT topRight;
} RECT;


void Assignment13(void);
void printRect(RECT r);
POINT inputPoint(void);

int main(void)
{
	Assignment13();

	return 0;
}

/*
* 함수명 : Assignment13
* 기능 : 직사각형 좌 하단점, 우 상단점 입력받아 출력
* 반환값 : 없음
*/

void Assignment13(void)
{
	RECT r;
	printf("직사각형의 좌 하단점(x,y)? : ");
	r.bottomLeft = inputPoint();
	printf("직사각형의 우 상단점(x,y)? : ");
	r.topRight = inputPoint();
	
	printRect(r);
}

/*
* 함수명 : printRect
* 기능 : 직사각형 정보 출력
* 반환값 : 없음
*/

void printRect(RECT r)
{
	printf("좌 하단점(%d, %d), 우 상단점(%d, %d)\n", r.bottomLeft.x, r.bottomLeft.y, r.topRight.x, r.topRight.y);
}

/*
* 함수명 : inputPoint
* 기능 : 점 좌표를 입력받아 POINT 구조체에 저장 후 반환
* 반환값 : POINT 구조체
*/
POINT inputPoint(void)
{
	POINT p;
	scanf("%d %d", &p.x, &p.y);
	return p;
}