/*
Q. Sum of Natural Numbers Using Recursion
*/

#include <stdio.h>
int sum(int n);

int main()
{
    int num,res;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    res=sum(num);

    printf("sum=%d", res);
}

int sum(int num)
{
    if (num!=0)
        return num + sum(num-1); // sum() function calls itself
    else
        return num;
}
