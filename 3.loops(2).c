/* 
Q. Write a program to find the sum of all the first n 
numbers.
*/

#include<stdio.h>

int main()
{
	int i,n,sum=0;
	printf("\n\nEnter range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n The sum is : %d \n",sum);
	return 0;
	}

