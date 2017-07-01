/* 
Q.Write a program that prints all the even numbers from 1 to 
m (m not included).
.
*/

#include<stdio.h>

int main()
{
	int i,m;
	printf("\n\nEnter range: ");
	scanf("%d",&m);
	for(i=1;i<m;i++)
	{
		if(i%2==0)
		{
		printf("\n %d \n",i);
		}

	}
	
	return 0;
	}

