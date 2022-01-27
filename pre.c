#include<stdio.h>
#define ACTION (a,b) a##b*a+b
int main()
{
	printf("%d",ACTION(3,4));
	return 0;
}
