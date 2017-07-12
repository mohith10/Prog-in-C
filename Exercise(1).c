/*
Program using ARRAY
AUTHOR: Mohit Hooda
Q.Create an Integer array A of size 15. Write functio
ns to perform the following 
operations on the array: 
a)Insert element into array next to the last occupied 
b)Delete the last inserted element. 
c)Check if the array is completely occupied. 
d)Check if the array is empty. 
e)Display the content of the array 
Write a main program to insert two more elements in
to the array A, delete 5 
elements, and check the empty and full conditions o
f the array. After each 
insertion and deletion operation display the conten
ts of the array. 

Sample Array A=[5,10,15,20,25,30,35,40,45,50] 
After calling function insert(100) a) A=[5,10,15,20,25,30,35,40,45,50,100] 
After calling function delete() b) A=[5,10,15,20,25,30,35,40,45,50] 
*/


#include<stdio.h>


int insert(int a[],int size)
{
	printf("\nEnter the number you want to ENTER :");
	int num;
	scanf("%d",&num);
	a[size]=num;
	size++;
	int i;
	printf("Array is: \n");
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}
	return size;
}
int delete(int a[],int size)
{
	printf("The last number is getting deleted from array.......deleted !");
	printf("\nArray is:\n");
	a[size]=0;
	size--;
	int i;
	for(i=0;i<size;i++)
		{
			printf("%d \t",a[i]);
		}
	return size;
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
	if(size==15)
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
	int a[]={5,10,15,20,25,30,35,40,45,50};
	int size=10;
	char c;
	printf("Hello! You want to try anything....\na.Insert \nb.Delete\nc.Check Full \nd.Check Empty\ne.Display array\no.For Exit)");
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
		printf("\nWant to try something new :");
		scanf("%c",&c);
	}

return 0;
}















	
