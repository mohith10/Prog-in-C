/* 
Q. Write a program to find the quotient of an integer number without using ‘/’ operator.

*/

#include<stdio.h>

int main()
{
 	int a,n,count=0;
	printf("\n Enter a no: ");
	scanf("%d",&a);
	printf("\n Enter by which no you want to divide: ");
	scanf("%d",&n);
	
	while(a>0)
	{
	a=a-n;
	count++;
	}
	printf("Quotient is : %d \n",count);
	return 0;
	
}

