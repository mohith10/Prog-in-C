/* 
Q.Write a progam to print the factorial of a number.
*/

#include<stdio.h>

int main()
{
	int i,n,fact=1;
	
	printf("\n\nEnter the integer : ");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{
	fact=fact*i;
	i--;
	}
	
		printf("\nFactorial of %d is : %d \n",n,fact);
	
	return 0;
	}

