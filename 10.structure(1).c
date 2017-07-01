/*
Q.Define a structure Student with members roll no, name and avg.

a) Create a variable Std of type Student.
c) Read values for the members of Std
d) Print all the details.
*/
struct student	{
		char name[20];
		int rollno;
		int avg;
		};

#include<stdio.h>

int main(){

		struct student std;
		printf("\t\tEnter the values\n");
		printf("Enter the name:\t");
		scanf("%s",std.name);
		printf("Enter the roll no:\t");
		scanf("%d",&std.rollno);
		printf("Enter the average marks:\t");
		scanf("%d",&std.avg);
		printf("\n\n \t\t The details are\n");
		printf("Name is : %s \n",std.name);
		printf("Roll no is : %d \n",std.rollno);
		printf("Avg marks is : %d \n",std.avg);
		
		return 0;
}
	
