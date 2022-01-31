#include<stdio.h>
#include<string.h>
main()
{
  FILE*fp;
  char ch;
  fp=fopen("abc.txt","r");
  if(fp==NULL)
  {
  	printf("Unable to open the file ");
  }
  else
  {
  	while(!feof(fp))
  	{
  		ch=getc(fp);
  		printf("%c\n",ch);
	}
	fclose(fp);
	printf("\n data printed successfully");
  }	
  getch();
  return 0;
}
