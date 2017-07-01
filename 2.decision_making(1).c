/* 
Q.Write a program to determine if a person is eligible for voting. Age has to be eighteen or above for a person to vote.
*/

#include<stdio.h>

int main()
{
 	int age;	
	printf("\n Enter your age : ");
	scanf("%d",&age);
	if(age>=18)
	{
	printf("You are eligible to vote\n");
	}
	else
	printf("You are not eligible\n");
	return 0;
}

	
