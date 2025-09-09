#include <stdio.h>

int test_copy_array(void);
void copy_array(int from[], int to[], int sz);

int main(void)
{
	test_copy_array();
}

#ifdef DEBUG
int test_copy_array(void)
{
#define LEN 5
	int a[] = { 1, 2, 3, 4, 5 };
	int b[LEN] = { 0 };

	int size = sizeof(b) / sizeof(b[0]);
	copy_array(a, b, LEN);
	for (int i = 0; i < LEN;)
	{
		if(b[i] != a[i])
		{
			return -1;
		}
	}
}

#endif DEBUG
void copy_array(int from[], int to[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		to[i] = from[i];
	}
}