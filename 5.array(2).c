/* 
Q. Write a program to find mean of n numbers using arrays.
*/



#include<stdio.h>
	
int main()
{
	int a[20],size;
	printf("\n Enter size of the Array : \n\n ");
	scanf("%d",&size);
	printf("\n Enter the Array \n\n ");
	for(int i=0;i<size;i++)
	{	
	scanf("%d \n",&a[i]);
	}
	int sum=0;
	printf("\n\n The array is  : \n");
	for (int i=0;i<size;i++)
	{
	
	printf("%d \n",a[i]);
	sum=sum+a[i];
	}
	printf("\n The mean  is : %d ",sum/size);
	return 0;
}
