/*
*파일명 : Assignment13.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 입력한 개수의 정수를 동적 메모리에 저장하고 텍스트 파일과 2진 파일로 각각 저장
*작성일 : 20251110
*문제 번호 : 12-13
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void assignment13(void);
void getInput(int* n, char* filename);
int* allocateMemory(int n);
void generateRandomNumbers(int* arr, int n);
void saveTextFile(const char* filename, int* arr, int n);
void saveBinaryFile(const char* filename, int* arr, int n);


int main(void)
{
    assignment13();
    return 0;
}

/*
* 함수명 : assignment13
* 기능 : 정수 개수 입력, 동적 메모리 할당, 난수 생성, 파일 저장을 수행
* 매개변수 : 없음
* 반환값 : 없음
*/
void assignment13(void)
{
    int n;
    char filename[50];
    int* arr = NULL;

    getInput(&n, filename);
    arr = allocateMemory(n);
    generateRandomNumbers(arr, n);

    saveTextFile(filename, arr, n);
    saveBinaryFile(filename, arr, n);

    printf("%s.txt와 %s.dat를 생성했습니다.\n", filename, filename);

    free(arr);
}

/*
* 함수명 : getInput
* 기능 : 사용자에게 정수의 개수와 파일명을 입력받음
* 매개변수 : 정수 개수 저장 변수 포인터, 파일명 저장 배열
* 반환값 : 없음
*/
void getInput(int* n, char* filename)
{
    printf("정수의 개수? ");
    scanf("%d", n);
    printf("파일명? ");
    scanf("%s", filename);
}

/*
* 함수명 : allocateMemory
* 기능 : 입력받은 정수 개수만큼 int형 메모리 동적 할당
* 매개변수 : 정수 개수
* 반환값 : 동적 메모리 시작 주소 (int 포인터)
*/
int* allocateMemory(int n)
{
    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("메모리 할당 실패!\n");
        exit(1);
    }
    return ptr;
}

/*
* 함수명 : generateRandomNumbers
* 기능 : 동적 메모리에 난수를 생성하여 저장
* 매개변수 : int 배열 포인터, 배열 크기
* 반환값 : 없음
*/
void generateRandomNumbers(int* arr, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000;
    return;
}

/*
* 함수명 : saveTextFile
* 기능 : 정수 배열을 텍스트 파일(.txt)에 저장
* 매개변수 : 파일명, int 배열 포인터, 배열 크기
* 반환값 : 없음
*/
void saveTextFile(const char* filename, int* arr, int n)
{
    char txtname[60];
    sprintf(txtname, "%s.txt", filename);
    FILE* fp = fopen(txtname, "w");
    if (fp == NULL) {
        printf("텍스트 파일 생성 실패!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]);

    fclose(fp);
    return;
}

/*
* 함수명 : saveBinaryFile
* 기능 : 정수 배열을 2진 파일(.dat)에 저장
* 매개변수 : 파일명, int 배열 포인터, 배열 크기
* 반환값 : 없음
*/
void saveBinaryFile(const char* filename, int* arr, int n)
{
    char datname[60];
    sprintf(datname, "%s.dat", filename);
    FILE* fp = fopen(datname, "wb");
    if (fp == NULL) {
        printf("이진 파일 생성 실패!\n");
        exit(1);
    }

    fwrite(arr, sizeof(int), n, fp);
    fclose(fp);
    return;
}