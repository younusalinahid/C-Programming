#include<stdio.h>
int main()
{
    int row,col,n;

    printf("Enter n :");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            printf(" ");

        for(col=1; col<=row; col++)
           printf("%c",col+64);

        for(col=row-1; col>=1; col--)

            printf("%c",col+64);

        printf("\n");
    }




    getch();
}

