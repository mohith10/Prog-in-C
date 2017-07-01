/*
Q. Write a program to test if the number input is positive, negative or zero.
*/


#include<stdio.h>

int main()
{
 	int n;
	printf("\n Enter a no: ");
	scanf("%d",&n);
	if(n>0)
	{
	printf("It is a positive no\n");
	}
	else if (n<0)
	printf("It is a negative no\n");
	else 
	printf("No IS zero !!\n ");
	return 0;
}

	
