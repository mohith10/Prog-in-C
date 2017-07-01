/*Q. Write a program which reads in 10 integers from the user and stores them in an array. Find the largest value in the array and print it.
*/



#include<stdio.h>
	
int main()
{
	int a[20];
	printf("\n Enter the Array \n\n ");
	for(int i=0;i<10;i++)
	{	
	scanf("%d \n",&a[i]);
	}
	int max=a[0];
	printf("\n\n The array is  : \n");
	for (int i=0;i<10;i++)
	{
	
	printf("%d \n",a[i]);
	if (max < a[i])
	{ 
	max=a[i];
	}
	else continue;
	}
	printf("\n The maximum value is : %d ",max);
	return 0;
}
