#include<stdio.h>
#include<conio.h>

main()
{
	int i,sum=0,n;
	float avg;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
		avg = sum/n;
	}
	printf("average of an array:%.2f",avg);
}