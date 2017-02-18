
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int fib(int n);
int main(void)
{
	for (int i = 0; i <= 10; ++i)
	{
		printf("Fibonanci of %u is: %u\n", i, fib(i));
	}
	return 0;
}

int fib(int n){
	if (n==0)
	{
		return 0;
	} else if (n == 1)
	{
		return 1;
	} else {
		return fib(n-1)+fib(n-2);
	}
}