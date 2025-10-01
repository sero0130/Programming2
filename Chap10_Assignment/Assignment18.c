/*
*���ϸ� Assignment18.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���� ����Ʈ �÷��̸���Ʈ ���� ��ϵ� SONG ����ü �迭�� ������ ��ü �� ����� �����ְ� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� ����
						   �߰��� ������ �� ��ϰ� ��ü ����ð� ������ ���(�ִ� 5����)
*�ۼ��� : 20251001
*���� ��ȣ : 10-18
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct song
{
	char title[50];      // �� ����
	char artist[50];     // ��Ƽ��Ʈ
	char janre[30];      // �帣
	int duration;        // �� ���� (�� ����)
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
		{"�� ���� ����", "�ں���", "ballad", 316},
		{"How Long", "Charlie Puth", "pop", 198},
		{"I\'m Fine", "��ź�ҳ��", "hip-hop", 209},
		{"����", "��ź�ҳ��", "hip-hop", 274},
		{"Awake", "��ź�ҳ��", "ballad", 226},
		{"�Ƴ���", "MINO", "hip-hop", 241}
	};
	SONG playlist[5]; // �÷��̸���Ʈ
	int count = 0; // �÷��̸���Ʈ�� �߰��� �� ��
	printf("<<  ��ü �� ���  >>\n");
	for (int i = 0; i < sizeof(songs) / sizeof(songs[0]); i++)
	{
		printf("%d. ", i + 1);
		printSong(songs[i]);
	}
	printf("\n�÷��̸���Ʈ�� �߰��� ���� ��ȣ�� �Է��ϼ��� (����: 0): ");
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break; // ����
		}
		if (num < 1 || num > sizeof(songs) / sizeof(songs[0]))
		{
			printf("�߸��� ��ȣ�Դϴ�. �ٽ� �Է��ϼ���: ");
			continue; // �߸��� �Է� ó��
		}

		if (addToPlaylist(playlist, &count, songs[num - 1]))
		{
			printf("���� �߰��Ǿ����ϴ�.\n");
			printPlaylist(playlist, count);
			int totalDuration = 0;
			for (int i = 0; i < count; i++)
			{
				totalDuration += playlist[i].duration;
			}
			printf("��ü ��� �ð�: %d��\n", totalDuration);
		}
		else
		{
			printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
		}

		printf("\n�÷��̸���Ʈ�� �߰��� ���� ��ȣ�� �Է��ϼ��� (����: 0): ");
	}
	if (count == 0)
	{
		printf("�÷��̸���Ʈ�� �߰��� ���� �����ϴ�.\n");
	}
	else
	{
		printf("\n�÷��̸���Ʈ�� ����Ǿ����ϴ�.\n");
		printPlaylist(playlist, count);
		int totalDuration = 0;
		for (int i = 0; i < count; i++)
		{
			totalDuration += playlist[i].duration;
		}
		printf("��ü ��� �ð�: %d��\n", totalDuration);
		return 0;
	}
}

void printSong(SONG song)
{
	printf("%s					", song.title);
	printf("%s					", song.artist);
	printf("%s					", song.janre);
	printf("%d��\n", song.duration);
}

void printPlaylist(SONG playlist[], int count)
{
	printf("\n<<  �÷��̸���Ʈ  >>\n");
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
		return 0; // ����
	}
	playlist[*count] = song;
	(*count)++;
	return 1; // ����
}