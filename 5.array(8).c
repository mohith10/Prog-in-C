/* 
Q. Write a program to sort an array of elements using Bubble sort.
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
	printf("\n\n The Sorted array is  : \n");
	for (int i=0;i<10;i++)
	{
	
	printf("%d \n",a[i]);
	}
	
	return 0;
}
