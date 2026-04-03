#include<stdio.h>
int main ()
{
    int a[3][3],n;
    int i,j,sum=0;
    printf("enter the order of square matrix");
    scanf("%d ",&n);

    printf("enter the elements\n: ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

        {
            scanf("%d",&a[i][j]);
    }
    }
    //diagonal sum//
    for(i=0;i<n;i++){
        sum=sum+a[i][i];
    }
    printf("sum of diagonal elements = %d\n",sum);
    return 0;