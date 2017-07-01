/* 
Q. Write a program to insert an element into an array at a given position.
*/



#include<stdio.h>
	
int main()
{
	int a[20],num,index;
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
	printf("Enter the num : ");
	scanf("%d",&num);
	printf("Enter index :");
	scanf("%d",&index);
	
	
	for (int i=0;i<10;i++)
	{
	if(i>=index)
	{
	for(int j=10;j>=index;j--)
	{
	 a[j]=a[j-1];
	}break;}
	else continue;
	}
	a[index]=num;	
	printf("\n\n The changed array is  : \n");
	for (int i=0;i<=10;i++)
	{
	
	printf("%d \n",a[i]);
	}
	
	return 0;
}
