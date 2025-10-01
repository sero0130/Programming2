/*
*파일명 Assignment18.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 음원 사이트 플레이리스트 구현 등록된 SONG 구조체 배열이 있을때 전체 곡 목록을 보여주고 플레이리스트에 추가할 노래를 번호로 선택
						   추가할 때마다 곡 목록과 전체 재생시간 얼마인지 출력(최대 5곡등록)
*작성일 : 20251001
*문제 번호 : 10-18
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct song
{
	char title[50];      // 곡 제목
	char artist[50];     // 아티스트
	char janre[30];      // 장르
	int duration;        // 곡 길이 (초 단위)
} SONG;

void printSong(SONG song);
void printPlaylist(SONG playlist[], int count);
int addToPlaylist(SONG playlist[], int* count, SONG song);
int assignment1005(void);

int main(void)
{
	assignment1005();

	return 0;
}

int assignment1005(void)
{
	int num = 0;
	SONG songs[] = {
		{"thank u, next", "Ariana Grande", "pop", 208},
		{"Attention", "Charlie Puth", "pop", 211},
		{"별 보러 가자", "박보검", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I\'m Fine", "방탄소년단", "hip-hop", 209},
		{"봄날", "방탄소년단", "hip-hop", 274},
		{"Awake", "방탄소년단", "ballad", 226},
		{"아낙네", "MINO", "hip-hop", 241}
	};
	SONG playlist[5]; // 플레이리스트
	int count = 0; // 플레이리스트에 추가된 곡 수
	printf("<<  전체 곡 목록  >>\n");
	for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++)
	{
		printf("%d. ", i + 1);
		printSong(songs[i]);
	}
	printf("\n플레이리스트에 추가할 곡의 번호를 입력하세요 (종료: 0): ");
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break; // 종료
		}
		if (num < 1 || num > sizeof(songs) / sizeof(songs[0]))
		{
			printf("잘못된 번호입니다. 다시 입력하세요: ");
			continue; // 잘못된 입력 처리
		}

		if (addToPlaylist(playlist, &count, songs[num - 1]))
		{
			printf("곡이 추가되었습니다.\n");
			printPlaylist(playlist, count);
			int totalDuration = 0;
			for (int i = 0; i < count; i++)
			{
				totalDuration += playlist[i].duration;
			}
			printf("전체 재생 시간: %d초\n", totalDuration);
		}
		else
		{
			printf("플레이리스트가 가득 찼습니다.\n");
		}

		printf("\n플레이리스트에 추가할 곡의 번호를 입력하세요 (종료: 0): ");
	}
	if (count == 0)
	{
		printf("플레이리스트에 추가된 곡이 없습니다.\n");
	}
	else
	{
		printf("\n플레이리스트가 종료되었습니다.\n");
		printPlaylist(playlist, count);
		int totalDuration = 0;
		for (int i = 0; i < count; i++)
		{
			totalDuration += playlist[i].duration;
		}
		printf("전체 재생 시간: %d초\n", totalDuration);
		return 0;
	}
}

void printSong(SONG song)
{
	printf("%s					", song.title);
	printf("%s					", song.artist);
	printf("%s					", song.janre);
	printf("%d초\n", song.duration);
}

void printPlaylist(SONG playlist[], int count)
{
	printf("\n<<  플레이리스트  >>\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d. ", i + 1);
		printSong(playlist[i]);
	}
}

int addToPlaylist(SONG playlist[], int* count, SONG song)
{
	if (*count >= 5)
	{
		return 0; // 실패
	}
	playlist[*count] = song;
	(*count)++;
	return 1; // 성공
}