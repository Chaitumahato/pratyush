#include<stdio.h>
main()
{
	int i,j,a,n,number[30];
	printf("Enter the value of n\n");
	scanf("%d",&n);
	
	printf("Enter the number\n");
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	
	for(i=0;i<n;++i)
	{
		for(j=j+1;j<n;++j)
		{
			if(number[i]>number[j])
			
			a = number[i];
			number[i]=number[j];
			number[j]=a;
		}
	}
	printf("The numbers arranged in ascending oder....");
	for(i=0;i<n;++i)
	printf("%d\n",number[i]);
}
