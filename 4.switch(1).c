/* 
There are two numbers whose sum or difference or product has to be found. 
Write a menu based 
program which asks the user to enter a OR b or C. If the 
user enters a, then find the sum of two 
numbers, if the user enters b, then find the difference of the two numbers and if the user enters c, 
then find the product of two 
numbers using 
switch statement
. 
*/

#include<stdio.h>

int main()
{
	char ch;
	int a,b;
	printf("\n Enter the first no :");
	scanf("%d",&a);
	printf("\n Enter the second no :");
	scanf("%d",&b);
	printf("\n Enter the choice a for + , b for *,c for- :");
	scanf("%c",&ch);
	switch(ch)
	{
	case'a':
	printf("\n The sum of number %d and %d is : ",a,b,a+b);
	break;
	case'b':
	printf("\n The product of number %d and %d is : ",a,b,a*b);
	break;
	case'c':
	printf("\n The difference of number %d and %d is : ",a,b,a-b);
	break;
	}
	return 0;
	}

