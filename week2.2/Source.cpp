#include <stdio.h>

int num,a,b;

void func()
{
	for (a=1;a<=num;a++)
	{
		for (b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{

	printf("Enter your number: ");
	scanf_s("%d", &num);

	func();

	return 0;
}