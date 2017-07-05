/* 
Q. Get the marks (an integer) from the user as input and output the grades along with the number of conditional expressions executed for determining the grades. Assign grades according to the following table.
A+ : 95- 100
A : 90-94 
B+ : 80 - 89
B : 75 -79
C+ : 70 - 74
C : 60 - 69
D- : 50-59
P : 40- 49
F : below 40


*/

#include<stdio.h>

int main()
{
 	int a,b,c,d,sum=0;
	int avg=0;
	char grade;
	printf("\n Enter your marks: ");
	scanf("%d",&a);
	printf("\n Enter your marks: ");
	scanf("%d",&b);
	printf("\n Enter your marks: ");
	scanf("%d",&c);
	printf("\n Enter your marks: ");
	scanf("%d",&d);
	sum=a+b+c+d;
	avg=sum/4;
	printf("\n Your total marks are : %d",sum);
	printf("\n Your average marks are : %d \n",avg);
	if(avg>=95&&avg<=100)
	grade='A+';
	else if(avg>=90&&avg<=94)
	grade='A';
	else if(avg>=80&&avg<=89)
	grade='B+';
	else if(avg>=75&&avg<=79)
	grade='B';
	else if(avg>=70&&avg<=74)
	grade='C+';
	else if(avg>=60&&avg<=69)
	grade='C';
	else if(avg>=50&&avg<=59)
	grade='D-';
	else if(avg>=40&&avg<=49)
	grade='P';
	else
	grade='F';

	printf("\nSo,your grade is : %c \n",grade);
	return 0;
	
}
