#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("Enter any number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact = i*fact;
    }

    printf("%d",fact);




    getchar();
}
