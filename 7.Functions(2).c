/*
Q.Programs to print PRIME number between Given Intervals.
*/

#include<stdio.h>

int check_Prime(int n);
int main()
{
    int n1, n2, i, flag;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);

    for(i=n1+1; i<n2; ++i)
    {
       
        flag = check_Prime(i);

        if(flag == 1)
            printf("%d ",i);
    }
    return 0;
}


int check_Prime(int n)
{
    int j, flag = 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
    return flag;
}
