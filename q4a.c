#include<stdio.h>
#include<conio.h>

void main()
{
	  int x,y,z;
	 
	for(x=5;x>=1;x--)
	{
		for(y=x;y<=4;y++)
		{
			printf(" ");
		}
		
		for(z=x;z>=1;z--)
		{
			
			if(z%2==0)
			{
			   printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}