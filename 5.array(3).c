/* 
Q. Write a program to interchange the largest and the smallest number in the array.
*/



#include<stdio.h>
	
int main()
{
	int a[10],maxpos,minpos;
	printf("\n Enter the Array \n ");
	for(int i=0;i<10;i++)
	{	
	scanf("%d",&a[i]);
	}
	int max=a[0],min=a[0];
	printf("\n\n The array is  : \n");
	for (int i=0;i<10;i++)
	{
	
	printf("%d \n",a[i]);
	if (max < a[i])
	{ 
	max=a[i];
	maxpos=i;
	}
	else if (min>a[i]) {
	min=a[i] ;
	minpos=i;

	}
	else continue;
	}
	a[minpos]=max;
	a[maxpos]=min;
	printf("\n\n The interchanged array is  : \n");
	for (int i=0;i<10;i++)
	{
	
	
	printf("%d \n",a[i]);
	}
	return 0;
}
