/*
Write a program to sum the series 
1+1/2+1/3+...+1/n.
*/

#include<stdio.h>

int main()
{
	int i,r;
	float f,sum=0;
	printf("\n\nEnter the range : ");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
	f=1/i;
	sum=sum+f;
	}
	printf("\n Sum is %d \n",sum);
	return 0;
}

