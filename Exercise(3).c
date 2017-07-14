/*
Program using ARRAY
AUTHOR: Mohit Hooda

Create an Integer array A of size 15. Write functions to perform the following operations on the array: 
a)Insert element into array as per user`s choice
b)Delete the element as per user`s choice
c)Check if the array is completely occupied. 
d)Check if the array is empty. 
e)Display the content of the array 
Write a main program to insert two more elements into the array A, delete 5 
elements, and check the empty and full conditions of the array. After each 
insertion and deletion operation display the contents of the array. 

Sample Array A=[5,10,15,20,25,30,35,40,45,50] 
After calling function insert(100) a) A=[5,10,15,20,25,30,35,40,45,50,100] 
After calling function delete() b) A=[5,10,15,20,25,30,35,40,45,50] 
*/


#include<stdio.h>


int insert(int a[],int size)
{
	int choice,num;
	int i;
	if(size==6)
	{
	printf("Sorry,size exceeded!\n");
	return size;
	}
	printf("\nEnter the position you want to ENTER (1: Beginning 2: End)\n ");
	scanf("%d",&choice);
	if(choice==2)
	{
	printf("\nEnter the number you want to ENTER :");
	scanf("%d",&num);
	a[size]=num;
	size++;
	printf("Array is: \n");
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}

	return size;
	}
	else 
	{
	printf("\nEnter the number you want to ENTER :");
	scanf("%d",&num);
	size++;	
	for(i=size;i>=1;i--)
	{
	a[i]=a[i-1];
	}
	a[0]=num;
	printf("Array is: \n");
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}

	return size;
	}
}
int delete(int a[],int size)
{
	int choice;
	int i;
	printf("\nEnter the position you want to ENTER (1: Beginning 2: End)\n ");
	scanf("%d",&choice);
	if(choice==2)
	{
	printf("The last number is getting deleted from array.......deleted !");
	printf("\nArray is:\n");
	a[size]=0;
	size--;
	
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}
	return size;
	}
	else
	{
		printf("The first number is getting deleted from array.......deleted !");
	for(i=1;i<size;i++)
	{
		a[i-1]=a[i];
	}
		
	printf("\nArray is:\n");
	a[size]=0;
	size--;
	
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}
	return size;
	}
}
void checkEmpty(int a[],int size)
{
	if(size==0)
		{
			printf("Yes,It is empty!\n");
			return;
		}
	else 
		{
			printf("No,It is not empty!\n");
			return;
		}
}
void checkFull(int a[],int size)
{
	if(size==6)
		{
			printf("Yes,It is FULL!\n");
			return;
		}
	else 
		{
			printf("No,It is not FULL!\n");
			return;
		}
}

void displayArray(int a[],int size)
{
	printf("Array is :\n");
	int i;
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}
}

int main()
{
	int a[]={5,10,15};
	int size=3;
	char c;
	printf("Hello! You want to try anything....\na.Insert \nb.Delete\nc.Check Full \nd.Check Empty\ne.Display array\no.For Exit\n");
	scanf("%c",&c);
	while(c!='o')
	{
		if(c=='a')
		{
			size=insert(a,size);
		}
		else if(c=='b')
		{
			size=delete(a,size);
		}
		else if(c=='c')
		{
			checkFull(a,size);
		}
		else if(c=='d')
		{
			checkEmpty(a,size);
		}
		else if(c=='e')
		{
			displayArray(a,size);
		}

		printf(" \nWant to try something new :");
		scanf("%c",&c);
	}

return 0;
}


