/*
Program using ARRAY
AUTHOR: Mohit Hooda
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















	
