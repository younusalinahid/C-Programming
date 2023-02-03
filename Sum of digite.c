#include<stdio.h>
int main()
{
    int sum=0,num,temp,r;

    printf("Enter any number : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum *10 + r;
        temp = temp / 10;
    }
    printf("The sum of digit is %d",sum);


    getch();
}
