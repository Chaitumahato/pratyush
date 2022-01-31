#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	char ch[20];
	int age;
	printf("Enter your name and age\n");
	scanf("%s%d",ch,&age);
	fp=fopen("mno.txt","w");
	if(fp==NULL)
	{
		printf("Unable to open the file");
	}
	else
	{
		fprintf(fp,"%s\t%d",ch,age);
		fclose(fp);
		printf("Data inserted");
	}
	getch();
	return 0;
	
}
