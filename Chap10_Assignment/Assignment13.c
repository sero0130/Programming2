/*
*���ϸ� : Assignment13.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���簢�� ������ ��Ÿ���� RECT ����ü ���� �� ��ǥ�� POINT ����ü �̿��ؼ� ���簢�� ������ �Է¹޾� ����ϴ� ���α׷�
*�ۼ��� : 20251001
*���� ��ȣ : 10-13
*���� : v0.1
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
* �Լ��� : Assignment13
* ��� : ���簢�� �� �ϴ���, �� ����� �Է¹޾� ���
* ��ȯ�� : ����
*/

void Assignment13(void)
{
	RECT r;
	printf("���簢���� �� �ϴ���(x,y)? : ");
	r.bottomLeft = inputPoint();
	printf("���簢���� �� �����(x,y)? : ");
	r.topRight = inputPoint();
	
	printRect(r);
}

/*
* �Լ��� : printRect
* ��� : ���簢�� ���� ���
* ��ȯ�� : ����
*/

void printRect(RECT r)
{
	printf("�� �ϴ���(%d, %d), �� �����(%d, %d)\n", r.bottomLeft.x, r.bottomLeft.y, r.topRight.x, r.topRight.y);
}

/*
* �Լ��� : inputPoint
* ��� : �� ��ǥ�� �Է¹޾� POINT ����ü�� ���� �� ��ȯ
* ��ȯ�� : POINT ����ü
*/
POINT inputPoint(void)
{
	POINT p;
	scanf("%d %d", &p.x, &p.y);
	return p;
}