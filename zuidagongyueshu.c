#include<stdio.h>
int fun(int a, int b)
{
	int i;
	if (a >= b)
	{
		i = b;
		for (i = b; i > 1;i--)
		if (a%i == 0 && b%i == 0)
			break;
		return i;
	}
	else
	{
		i = a;
		for (i = a; i > 1; i--)
		if (a%i == 0 && b%i == 0)
			break;
		return i;
	}
}
void main()
{
	int a=1, b=1, i;
	int fun(int a, int b);
	printf("输入两个正整数；");
	scanf_s("%d,%d",&a,&b);
	i = fun(a, b);
	printf("%d,%d的最大公约数为:%d\n", a, b, i);
}
