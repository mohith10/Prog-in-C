/* 
Q.Write a program to find out whether a particular element is in the integer array using
Linear search.
*/



#include<stdio.h>
	
int main()
{
	int a[20],key,pos;
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
	scanf("%d",&key);
	
	
	
	for (int i=0;i<10;i++)
	{
	if(a[i]==key)
	{
	pos=i;
	 
	break;
	}
	else continue;
	}
	
	printf("%d found at position %d  \n",pos+1);
	
	
	return 0;
}
