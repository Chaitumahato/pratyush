#include<stdio.h>
#include<conio.h>
int fact (int n);

{

	if (n==0)
	
		return 1;
	
	else
	
	 return n*fact(n-1);	
	
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("The factorial value is %d",fact(n));
}
