/* 
Q. Write a program to find the second biggest number using an array of n numbers.
*/



#include<stdio.h>
	
int main()
{
	int a[20],temp;
	printf("\n Enter the Array of 10 numbers(no duplicate) \n\n ");
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
	if (a[i]>a[j])
	{ 
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	}
	else continue;
	}}
	
	secondmax=a[8];
	printf(" The second largest no is : %d ",secondmax);
	
	return 0;
}
