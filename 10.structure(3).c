/*
Q.Define a structure Employee with members employeeno, name, position(Manager(M),Supervisor(S),Ordinary(O)), bpay(basic pay).
a) Read a value n from the user and store n number of employee details.
b)Use function Read( ) to read the employee details.
c) Use function Display( ) print the employee details.
d) Use a function  which should give user a varieties of choices on the basis of which will display the employee details. i.e, empno or emp_name or position or basic pay. If position is selected all the employees belonging to that category should be displayed. If basic pay  is selected all the employees within that basic pay should be displayed.

*/
struct employee	{
		char name[20];
		int employeeno;
		char pos;
		float bpay;
		
		};


#include<stdio.h>
void read(struct employee e[],int);
void display(struct employee e[],int);
void search1(struct employee e[],int,char);
void search2(struct employee e[],int,float);

int main(){
		int n,select;
		char selpos;float selbpay;
		printf("How many emoloyees you want to enter \t ");
		scanf("%d",&n); 
		struct employee e[5];
		read(e,n);
		display(e,n);
		printf("On what basis you want to search ? \n ( 1:Postion 2:Basic Pay) \t:");
		scanf("%d",&select);
		if(select==1)
		{	
			printf("Enter the Position you want to search(m/s/o)?\t");
			scanf(" %c",&selpos);
			search1(e,n,selpos);
		}
		else
		 {	
			printf("Enter the Basic Pay you want to search?\t");
			scanf(" %f",&selbpay);
			search2(e,n,selbpay);
		}
		return 0;
		}
	void read(struct employee e[],int n)
		{
		for(int i=0;i<n;i++)
		{
		printf("\t\tEnter the values\n");
		printf("Enter the Employee no:\t");
		scanf("%d",&e[i].employeeno);
		printf("Enter the Name:\t");
		scanf("%s",e[i].name);
		printf("Enter the Position(m/s/o)\t");
		scanf(" %c",&e[i].pos);
		printf("Enter the Basic Pay:\t");
		scanf("%f",&e[i].bpay);
		
		}}
	
	
	void search1(struct employee e[],int n,char selpos)
	{ 	
		int f;
		printf("Selected Details are:");
		for(int i=0;i<n;i++)
	{	
		if(selpos==e[i].pos)
		{ 
		f++;
		printf("Employee No is: %d \n",e[i].employeeno);
		printf("Employee Name is : %s \n",e[i].name);
		printf("Employee position is : %c \n",e[i].pos);
		printf("Basic Pay Is : %f \n",e[i].bpay);
		printf("\n\n");
		
		}
		else continue;
		}
		if (f==0)
		{ 
		printf("\n\n Entered Record DOES'NT EXIST!! ");}
		}
	
	void search2(struct employee e[],int n,float selbpay)
	{ 	
		int f;
		printf("Selected Details are:");
		for(int i=0;i<n;i++)
		{	
		if(selbpay==e[i].bpay)
		{ 
		f++;
		printf("Employee No is: %d \n",e[i].employeeno);
		printf("Employee Name is : %s \n",e[i].name);
		printf("Employee position is : %c \n",e[i].pos);
		printf("Basic Pay Is : %f \n",e[i].bpay);
		printf("\n\n");
		
		}
		else continue;
		}
		if (f==0)
		{ printf("\n\n Entered Record DOES'NT EXIST!! ");}
		
	
		}
		void display(struct employee e[],int n)
		{	
			printf("\n\n \t\t The details are\n\n\n");
		for(int i=0;i<n;i++)
		{
		printf("Employee No is: %d \n",e[i].employeeno);
		printf("Employee Name is : %s \n",e[i].name);
		printf("Employee position is : %c \n",e[i].pos);
		printf("Basic Pay Is : %f \n",e[i].bpay);
		printf("\n\n");
		}
}
		






		
	








