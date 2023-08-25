#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	   	if(i%2==0)
	   	{
	   		printf("%c",64+i);
		   }
		 else
		 {
		 	printf("%c",96+i);
		   }  
	   }
	   printf("\n");
	}
	getch();
}

OUTPUT-
Enter the number 5
aaaaa
BBBBB
ccccc
DDDDD
eeeee
