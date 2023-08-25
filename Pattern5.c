#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char A=65;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=n;j++)
	   {
	   	if(i==1||j==1||i==5||j==5)
	   	{
	   	 printf("*");
	    }
	    else
	    {
	    	printf("%c",A);
	    	A++;
		}
	    	}
			printf("\n"); 
	}
	getch();
}
