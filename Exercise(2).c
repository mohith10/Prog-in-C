/*
Program using ARRAY
AUTHOR: Mohit Hooda
Create a character array B of size 15. Write functions to perform the following 
operations on the array 
a)Insert element into array next to the last occupied.
b)Delete the first inserted element. 
c)Check if the array is completely occupied. 
d)Check if the array is empty. 
e)Display the content of the array 
Write a main program to insert two more elements into the array B, delete 5 
elements, and check the empty and full conditions of the array. After each 
insertion and deletion operation display the contents of the array 

Sample Array B=[A,B,C,D,E,F,G,H,I,J] 
After calling function insert(P) B=[A,B,C,D,E,F,G,H,I,J,P] 
After calling function delete b) B=[B,C,D,E,F,G,H,I,J,P] 
*/


#include<stdio.h>


int insert(char a[],int size)
{
	printf("\nEnter the alphabet you want to ENTER : ");
	char num;
	scanf(" %c",&num);
	a[size]=num;
	size++;
	int i;
	printf("Array is: \n");
	for(i=0;i<size;i++)
		{
			printf("%c\t",a[i]);
		}
	return size;
}
int delete(char a[],int size)
{
	printf("The first number is getting deleted from array.......deleted !");
	int i;
	for(i=1;i<size;i++)
	{
		a[i-1]=a[i];
	}
		
	printf("\nArray is:\n");
	a[size]=0;
	size--;
	
	for(i=0;i<size;i++)
		{
			printf("%c \t",a[i]);
		}
	return size;
}
void checkEmpty(char a[],int size)
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
void checkFull(char a[],int size)
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

void displayArray(char a[],int size)
{
	printf("Array is :\n");
	int i;
	for(i=0;i<size;i++)
		{
			printf("%c\t",a[i]);
		}
}

int main()
{
	char a[]={'a','b','c','d','e','f','g','h','i','j'};
	int size=10;
	char c;
	printf("Hello! You want to try anything....\na.Insert \nb.Delete\nc.Check Full \nd.Check Empty\ne.Display array\no.For Exit  \n\n");
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

