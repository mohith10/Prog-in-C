/* 
Write a program that asks the 
user to enter a number and the output should be to display the result 
which is to multiply the number 10 with the number entered by the us
er. However if the product 
obtained is larger than 100 then the program must exit or quit.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int n,pro;
	while(1)
	{
	printf("\n\nEnter the no.: ");
	scanf("%d",&n);
	pro=n*10;
	if(pro>100)
	{
	break;
	}
	else 
	{
	printf("\n The product is %d",pro);
	}}
	return 0;
}
	
