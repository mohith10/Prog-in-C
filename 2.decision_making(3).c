/* 
Write a program to read three numbers & calculate their sum & average.
 If sum is in the range of 100 & 200 print the message, “Sum is in the allowed range”.
 Else, print the message, “Sum has exceeded the range”.
*/

#include<stdio.h>

int main()
{
 	int a,b,c,avg,sum;
	printf("\n Enter a no: ");
	scanf("%d",&a);
	printf("\n Enter a no: ");
	scanf("%d",&b);
	printf("\n Enter a no: ");
	scanf("%d",&c);
	sum=a+b+c;
	avg=(a+b+c)/3;
	if((sum>=100)&&(sum<=200))
	{
	printf("Sum is in the allowed range\n");
	}
	
	else 
	printf("Sum has exceeded the range \n ");
	return 0;
}

