/*
*���ϸ� Assignment11.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���簢���� ���̿� �ѷ��� ���ϴ� �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
*�ۼ��� : 20251011
*���� ��ȣ : 08-11
*���� : v0.1
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
* �Լ� �̸�: assignment0811
* ���: ���簢���� ���̿� �ѷ��� ���ϴ� �Լ��� �ۼ��ϰ� �̸� ȣ���ϴ� ���α׷�
* ��ȯ ��: ���� (void)
*/

void assignment0811(void)
{
	int x = 0, y = 0;
	int* px = &x, * py = &y;
	printf("����?");
	scanf("%d", px);
	printf("����?");
	scanf("%d", py);
	get_rect_info(px, py);

	return;
}

/*
* �Լ� �̸�: get_rect_info
* ���: ���簢���� ���̿� �ѷ��� ���ϴ� �Լ�
* ��ȯ ��: 0 (int)
*/

int get_rect_info(int * px, int * py)
{
	int area = 0, perimeter = 0;
	area = (*px) * (*py);
	perimeter = 2 * (*px + *py);
	printf("����: %d, ", area);
	printf("�ѷ�: %d\n", perimeter);

	return 0;
}