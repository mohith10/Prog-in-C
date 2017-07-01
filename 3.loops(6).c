/* 
Parts of theprogram that reads an integer until 900 is encountered. Also it countsthe number of 
positive, negative and zeroes entered by the user.
*/

#include<stdio.h>

int main()
{
	
	int pos_count=0,neg_count=0,ze_count=0,n;
	while(1)
	{
	printf("\n\nEnter the no.: ");
	scanf("%d",&n);
	
	if(n==900)
	{
	break;
	}
	else if (n>0)
	{
	pos_count++;
	}
	else if (n<0)
	{
	neg_count++;
	}
	else 
	{
	ze_count++;
	}
	}
	printf("\nNo. of positive no are %d ",pos_count);
	printf("\nNo. of negative no are %d ",neg_count);
	printf("\nNo. of zeroes  are %d ",ze_count);
	return 0;
}
	
