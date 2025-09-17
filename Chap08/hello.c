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
	//�Է°� �������� üũ
	if (a == NULL || b == NULL)
	{
		return NULL;
	}

	//�� �� ��ȯ
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

// ���: 1���� �Ǽ� �迭�� �Է¹޾� �ֿܼ� ����Ѵ�
// �Լ��� : print_array_double
// �Է�: double Ÿ�� 1���� �迭 �ּ�
// �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ: ����

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