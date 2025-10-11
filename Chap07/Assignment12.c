/*
*���ϸ� Assignment12.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ����ǥ ���� ���α׷� �ۼ� (�¼� 10��, ������ �� ���� �¼� ���� ��� ���� ���� O �Ұ� X)
*�ۼ��� : 20251011
*���� ��ȣ : 07-12
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SEAT 10

void assignment0712(void);
void print_seat_status(char seats[], int size);

int main(void)
{
	assignment0712();

	return 0;
}

/*
* �Լ��� : assignment0712
* ��� : ����ǥ ���� ���α׷� �ۼ� (�¼� 10��, ������ �� ���� �¼� ���� ��� ���� ���� O �Ұ� X)
* ��ȯ�� : void
*/
void assignment0712(void)
{
	char seats[SEAT] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' }; // �¼� ���� �ʱ�ȭ
	int choice = 0;
	int count = 0;

	// �¼� ���� �ݺ�
	while (1)
	{
		// �¼� ���� ���
		printf("���� �¼� : ");
		print_seat_status(seats, SEAT);
		printf("������ �¼� �� :");
		scanf("%d", &choice);

		// ������ �¼� ���� 0���� �۰ų� SEAT���� ũ�� �ٽ� �Է�
		for (int i = 0; i < choice; i++)
		{
			seats[count] = 'X';
			count++;
			printf("%d ", count);
		}
		printf("�� �¼��� �����߽��ϴ�.");

		// ���� �˻�
		if (count == SEAT)
		{
			break;
		}
	}
}

/*
* �Լ��� : print_seat_status
* ��� : �¼� ���¸� ����ϴ� �Լ�
* ��ȯ�� : void
*/
void print_seat_status(char seats[], int size)
{
	// �¼� ���� ���
	printf("[");
	for (int i = 0; i < size; i++)
	{
		printf("%c ", seats[i]);
	}
	printf("]\n");
}