/*
Q.Write a C program that prints all the natural
numbers from 1 to n, where n is the number entered by 
the user.
*/

#include<stdio.h>

int main()
{
	int i,n;
	printf("\n\nEnter range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n %d \n",i);
	}
	return 0;
	}

