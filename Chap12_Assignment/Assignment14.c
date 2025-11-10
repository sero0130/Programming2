/*
*파일명 : Assignment14.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 두 개의 2진 파일(.dat)을 읽어 하나의 int 배열로 합치고 새 파일로 저장
*작성일 : 20251110
*문제 번호 : 12-14
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void assignment14(void);
int* loadBinaryFile(const char* filename, int* count);
void saveBinaryFile(const char* filename, int* arr, int count);
int* allocateMemory(int n);
int* combineArrays(int* arr1, int count1, int* arr2, int count2);


int main(void)
{
    assignment14();
    return 0;
}

/*
* 함수명 : assignment14
* 기능 : 두 개의 2진 파일을 읽어서 하나로 합친 뒤 새로운 파일에 저장
* 매개변수 : 없음
* 반환값 : 없음
*/
void assignment14(void)
{
    char file1[50], file2[50], savefile[50];
    int count1 = 0, count2 = 0, total = 0;
    int* arr1 = NULL;
    int* arr2 = NULL;
    int* merged = NULL;

    printf("첫 번째 파일명? ");
    scanf("%s", file1);
    arr1 = loadBinaryFile(file1, &count1);
    printf("정수 %d개를 읽었습니다.\n", count1);

    printf("두 번째 파일명? ");
    scanf("%s", file2);
    arr2 = loadBinaryFile(file2, &count2);
    printf("정수 %d개를 읽었습니다.\n", count2);

    merged = combineArrays(arr1, count1, arr2, count2);
    total = count1 + count2;

    printf("저장할 파일명? ");
    scanf("%s", savefile);
    saveBinaryFile(savefile, merged, total);

    printf("정수 %d개를 저장했습니다.\n", total);

    free(arr1);
    free(arr2);
    free(merged);

    return;
}

/*
* 함수명 : loadBinaryFile
* 기능 : 2진 파일에서 정수를 읽어 동적 메모리에 저장
* 매개변수 : 파일 이름, 읽은 개수를 저장할 변수 포인터
* 반환값 : int 배열 포인터
*/
int* loadBinaryFile(const char* filename, int* count)
{
    FILE* fp = fopen(filename, "rb");
    int* arr = NULL;
    int size = 0;

    if (fp == NULL)
    {
        printf("파일을 열지 못했습니다: %s\n", filename);
        exit(1);
    }

    // 파일 크기 확인
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    *count = size / sizeof(int);
    arr = allocateMemory(*count);

    fread(arr, sizeof(int), *count, fp);
    fclose(fp);

    return arr;
}

/*
* 함수명 : saveBinaryFile
* 기능 : int 배열을 2진 파일로 저장
* 매개변수 : 파일 이름, int 배열 포인터, 배열 크기
* 반환값 : 없음
*/
void saveBinaryFile(const char* filename, int* arr, int count)
{
    FILE* fp = fopen(filename, "wb");
    if (fp == NULL)
    {
        printf("파일을 생성하지 못했습니다: %s\n", filename);
        exit(1);
    }

    fwrite(arr, sizeof(int), count, fp);
    fclose(fp);
}

/*
* 함수명 : allocateMemory
* 기능 : 입력된 크기만큼 int형 메모리를 동적 할당
* 매개변수 : 정수 개수
* 반환값 : 동적 메모리 시작 주소
*/
int* allocateMemory(int n)
{
    int* ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("메모리 할당 실패!\n");
        exit(1);
    }
    return ptr;
}

/*
* 함수명 : combineArrays
* 기능 : 두 배열을 합쳐 하나의 새 배열 생성
* 매개변수 : 배열1, 배열1 크기, 배열2, 배열2 크기
* 반환값 : 합쳐진 배열 포인터
*/
int* combineArrays(int* arr1, int count1, int* arr2, int count2)
{
    int* merged = allocateMemory(count1 + count2);

    for (int i = 0; i < count1; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < count2; i++)
        merged[count1 + i] = arr2[i];

    return merged;
}
