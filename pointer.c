#include<stdio.h>
int *Add(int* a,int* b)
{
	int* c;
	*c=*a+*b;
	return &c;
}
int main()
{
	int a=2,b=3;
	int* p;
	p=Add(&a,&b);
	printf("%d\n",*p);
	return 0;
}