#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and colum for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and colum for second matrix :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error !! colum of first matrix not equal to row of second matrix");

        printf("Enter rows and colum for first matrix :");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for second matrix :");
        scanf("%d %d",&r2,&c2);
    }

    //take input for first matrix
    printf("\nEnter elements for first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }

    //take input for second matrix
    printf("\nEnter element for second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    //multiplying matrix
    for(i=0;i<r1;i++);
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
            sum = sum + first[i][k] * second[k][j];

            }
            result[i][j] = sum;
            sum = 0;

        }
    }

    //printing first matrix
    printf("\n\nFirst matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            printf("%d ",first[i][j]);
        printf("\n");
    }


    //printing second matrix
    printf("\n\nsecond matrix\n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
            printf("%d ",second[i][j]);
            printf("\n");
    }


    //printing result matrix
    printf("\n\nResult matrix\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c2;j++)
        {
              printf("%d\t",result[i][j]);
        }
            printf("\n");
    }





}
