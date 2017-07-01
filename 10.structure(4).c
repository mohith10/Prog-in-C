/*
Q. Define a structure Bank with members accountno, name, type(Savings/Current), balance.
a) Store 5 customer details [Use structure array].
b) Using a function search( )that takes structure array as argument and account_no, search if that account_no exist or not. If so print the details.
c) Using another function sort_balance( ), sort the structure array on the basis of balance and print the details.
*/

struct bank	{
		char name[20];
		int accountno;
		char type;
		float balance;
		
		};


#include<stdio.h>
void search(struct bank b[],int);
void sort(struct bank b[]);
int main(){

		struct bank b[5];
		for(int i=0;i<3;i++)
	{
		printf("\t\tEnter the values\n");
		printf("Enter the Account no:\t");
		scanf("%d",&b[i].accountno);
		printf("Enter the Name:\t");
		scanf("%s",b[i].name);
		printf("Enter the Account type (C/S)\t");
		scanf(" %c",&b[i].type);
		printf("Enter the Balance:\t");
		scanf("%f",&b[i].balance);
		
	}
		int search_id;
	printf("Enter the account No you want\n to SEARCH for:\t\t");
		scanf("%d",&search_id);
		search(b,search_id);
		sort(b);
		return 0;
	}
	void search(struct bank b[],int search_id)
	{ 	int f=0;
		for(int i=0;i<3;i++)
	{	if(search_id==b[i].accountno)
		{ f++;
		printf("\n\n \t\t The details are\n\n\n");
		printf("Account No is: %d \n",b[i].accountno);
		printf("Account Holder is : %s \n",b[i].name);
		printf("Account Type : %c \n",b[i].type);
		printf("Balance Is : %f \n",b[i].balance);
		break;
		}
		else continue;
		}
		if (f==0)
		{ printf("\n\n Entered Record DOES'NT EXIST!! ");}
		
	
}
		void sort(struct bank b[])
	{
		struct bank t;//t for temporary variable
		for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
	{
		if(b[i].balance>b[j].balance)
		{	t=b[i];
			b[i]=b[j];
			b[j]=t;
		} else continue;
}
}
		printf("\n\n \t\t The Sorted details are\n\n\n");
		for(int i=0;i<3;i++)
	{
		
		printf("Account No is: %d \n",b[i].accountno);
		printf("Account Holder is : %s \n",b[i].name);
		printf("Account Type : %c \n",b[i].type);
		printf("Balance Is : %f \n",b[i].balance);
		printf("\n\n");
	}
}
		






		
	












