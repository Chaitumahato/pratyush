#include<stdio.h>
#include<string.h>
main()
{
	int i,l,j;
	char a[50];
	printf("Enter a string....");
	gets(a);
	l=0;
	while(a[l]!='\0')
	l++;
	for(i=0;i<l;i++)
	{
		for(j=1;j<=i;j++)
		printf("%c",a[j]);
		printf("\n");
	}
}
