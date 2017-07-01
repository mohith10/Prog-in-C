/*
Q. Program to check whether a number is Prime or Not.
*/


#include<stdio.h>

void check_prime(int n)
{
	int f=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=-1;
			break;
		}
	else
		continue;
	}
	
	if(f==0)
		printf("Prime\n");
	else
		printf("Not Prime\n");
}

int main()
{
	int num;
	printf("Enter the NUMBER : ");
	scanf("%d",&num);
	check_prime(num);
	return 0;
}
		
