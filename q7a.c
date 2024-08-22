#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	for(x=1;x<=5;x++)
	{  
		for(y=1;y<=5;y++)
		{
			if(x==1 || x==3)
			{
				printf("*");
			}
			else if(x==2 && y==1 || x==2 && y==5)
			{
				printf("*");
			}
			else if (y==1 || y==1)
			{
				printf("*");
			} 
			else 
			{
				printf(" ");
			}
       }
       printf("\n");
    } 
}
	 