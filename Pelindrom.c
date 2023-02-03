#include<stdio.h>
int main()
{
    int temp,sum=0,num,r;
    printf("Enter any number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp %10;
        sum = sum *10 + r;
        temp = temp / 10;
    }

    if(num==sum)
        printf("pelindrom number ");
    else
        printf("Not pelindrom number");


    getch();

}
