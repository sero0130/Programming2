#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"


extern int last_id;

int main(int argc, char* argv[])
{
	printf("추석 잘 보냈어요\n");

	printf("회원1의 id = %d\n", get_id());
	printf("회원2의 id = %d\n", get_id());
	printf("회원3의 id = %d\n", get_id());

	//printf("last_id = %d\n", last_id++);

	return 0;
}