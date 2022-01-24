#include<stdio.h>
#include<stdlib.h>
main()
{
 int*ptr=NULL,i;
 ptr=(int*)malloc(5*sizeof(int*));
 for(i=0;i<5;i++)
 {
    printf("Enter the value of *(ptr+%d)",i);
	scanf("%d",(ptr+i));
 }
 for(i=0;i<5;i++)
 {
 	 printf("The value of *(ptr+0):%d\n",*(ptr+i));
 }
 free(ptr);
 ptr=NULL;
 	
}
