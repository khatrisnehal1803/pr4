#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	
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
		printf("a[%d] :%d\n",i,a[i]);
	}
	printf("Length of an array: %d",n);
}