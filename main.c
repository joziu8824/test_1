#include <stdio.h>

void intro_fun(void) 
{
	printf("intro_fun\n");
	return;
}

void fun_1(void) 
{
	printf("fun_1\n");
	return;
}

void fun_2(void) 
{
	printf("fun_2\n");
	return;
}

int main(void)
{
	printf("Program start\n");
	fun_1();
	fun_2();
	printf("Hello world! \n");
	return 0;
}

