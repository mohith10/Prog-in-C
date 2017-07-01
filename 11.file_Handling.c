/*
Q. Write a program to use fgetc() to read characters from the input file and fputc() to write them to the output file.
*/

#include<stdio.h>

int main()
	{
		FILE *fp,*file2;
		fp=fopen("input.txt","w");
		char c,c1,c2;
		scanf(" %c",&c);
		while(c!='\n')
		{
		fputc(c,fp);
		scanf("%c",&c);
		}
		fclose(fp);
		file2=fopen("output.txt","w");
		fp=fopen("input.txt","r");
		c1=getc(fp);

		while(c1!=EOF)
		{
			fputc(c1,file2);
			c1=getc(fp);
		}
		fclose(fp);
		fclose(file2);
		file2=fopen("output.txt","r");
		c2=getc(file2);
		while(c2!=EOF)
		{
		printf("%c",c2);
		c2=getc(file2);
		}
		fclose(file2);
		return 0;
	}
	
	
		
