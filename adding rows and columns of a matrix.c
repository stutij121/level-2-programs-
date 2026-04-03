#include<stdio.h>
int main ()
{
    int a[2][2],i,j;
    int m,n;

    printf("enter the number of rows and columns of the matrix");
    scanf("%d %d ",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    //row sum //
    printf("\nsum of the rows:\n");
    for(i=0;i<m;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
         sum=sum+a[i][j];
        }
        printf("sum of rows  = %d\n,sum");
    }
    //column sum//
    printf("\n sum of columns\n");
    for(j=0;j<n;j++)
    {
        int sum =0;
        for(i=0;i<m;i++)
        {
            sum=sum+a[i][j];
        }
        printf(" sum of columns  = %d\n",sum);

    }
    return 0;

}
