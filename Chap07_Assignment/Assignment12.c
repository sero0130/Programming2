/*
*파일명 Assignment12.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 기차표 예매 프로그램 작성 (좌석 10개, 예매할 때 마다 좌석 상태 출력 예약 가능 O 불가 X)
*작성일 : 20251011
*문제 번호 : 07-12
*버전 : v0.1
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
* 함수명 : assignment0712
* 기능 : 기차표 예매 프로그램 작성 (좌석 10개, 예매할 때 마다 좌석 상태 출력 예약 가능 O 불가 X)
* 반환값 : void
*/
void assignment0712(void)
{
	char seats[SEAT] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' }; // 좌석 상태 초기화
	int choice = 0;
	int count = 0;

	// 좌석 예매 반복
	while (1)
	{
		// 좌석 상태 출력
		printf("현재 좌석 : ");
		print_seat_status(seats, SEAT);
		printf("예매할 좌석 수 :");
		scanf("%d", &choice);

		// 예매할 좌석 수가 0보다 작거나 SEAT보다 크면 다시 입력
		for (int i = 0; i < choice; i++)
		{
			seats[count] = 'X';
			count++;
			printf("%d ", count);
		}
		printf("번 좌석을 예매했습니다.");

		// 조건 검사
		if (count == SEAT)
		{
			break;
		}
	}
}

/*
* 함수명 : print_seat_status
* 기능 : 좌석 상태를 출력하는 함수
* 반환값 : void
*/
void print_seat_status(char seats[], int size)
{
	// 좌석 상태 출력
	printf("[");
	for (int i = 0; i < size; i++)
	{
		printf("%c ", seats[i]);
	}
	printf("]\n");
}