/*
Q. Define a structure Book with members book_id, book_title, author, price.
a)Define a variable of type Book.
b)Print the book details.
*/

struct book	{
		char author[20],book_title[20];
		int book_id;
		float price;
		};

#include<stdio.h>

int main(){

		struct book b;
		printf("\t\tEnter the values\n");
		printf("Enter the Book Id:\t");
		scanf("%d",&b.book_id);
		printf("Enter the Title:\t");
		scanf("%s",b.book_title);
		printf("Enter the Author:\t");
		scanf("%s",b.author);
		printf("Enter the Price:\t");
		scanf("%f",&b.price);
		printf("\n\n \t\t The details are\n\n\n");
		printf("Book Id is: %d \n",b.book_id);
		printf("Book title is : %s \n",b.book_title);
		printf("Author is : %s \n",b.author);
		printf("Price of the book is : %f \n",b.price);
	return 0;
}
	
