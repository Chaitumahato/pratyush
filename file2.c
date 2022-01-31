#include<stdio.h>
#include<string.h>
main()
{
	FILE*fp;
	char ch[20];
	fp=fopen("xyz.txt","w");
	if(fp==NULL)
	{
		printf("Doesn`t create the file");
	}
	else
	{
		printf("Enter somethings\n");
		gets(ch);
		fputs(ch,fp);
		fclose(fp);
		printf("Data inserted");
	}
	getch();
	return 0;
	
}
