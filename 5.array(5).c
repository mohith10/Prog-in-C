/* 
Q. Write a program to find whether the array of integers contain a duplicate number. If it’s there print the position of duplicate numbers.
*/



#include<stdio.h>
	
int main()
{
	int a[20],temp;
	printf("\n Enter the Array \n\n ");
	for(int i=0;i<10;i++)
	{	
	scanf("%d",&a[i]);
	}
	int max=a[0],secondmax;
	printf("\n\n The array is  : \n");
	for (int i=0;i<10;i++)
	{
	
	printf("%d \n",a[i]);
	}
	for (int i=0;i<10;i++)
	{
	
	for(int j=i+1;j<10;j++)
	{
	 
	if (a[i]==a[j])
	{ 
	printf("\n Element %d is repeated at position : %d",a[i],j+1);
	break;
	}
	else continue;
	}}
	
	
	return 0;
}
