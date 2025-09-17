#include <stdio.h>

void *swapDouble(double* a, double* b);
void print_array_double(double arr[], int size);
void printArrayDouble(double* arr, int size);
int test_swapDouble();


int main(void)
{

	//test_swapDouble();
	test_print_array();

	return 0;
}

int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;
	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("1ERROR\n");
	}
	else
	{
		printf("a = %f, b=%f\n", a, b);
	}
	double* presult0 = (double*)swapDouble((double*)NULL, &b);
	if (presult0 == NULL)
	{
		printf("2ERROR\n");
	}
	return 0;
}

void *swapDouble(double* a, double* b)
{
	//입력값 정상인지 체크
	if (a == NULL || b == NULL)
	{
		return NULL;
	}

	//두 값 교환
	double tmp = *a;
	*a = *b;
	*b = tmp;

	return a;

}
int test_print_array()
{
	double da[] = { 1.0,2.0,3.0, 4.0, 5.0 };
	
	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	printArrayDouble(&da[0], size);

	return 0;
}

// 기능: 1차원 실수 배열을 입력받아 콘솔에 출력한다
// 함수명 : print_array_double
// 입력: double 타입 1차원 배열 주소
// 터미널에 배열의 내용을 예쁘게 출력
// 반환: 없음

void print_array_double(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}

void printArrayDouble(double *arr, int size)
{
	for (int i = 0; i < size; i++,arr++)
	{
		printf("%lf ", * arr);
	}
	printf("\n");
}