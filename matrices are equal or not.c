#include<stdio.h>
int main ()
{
    int a[5][5],b[5][5];
    int i,j,r,c,flag=1;
    
    printf("enter the number of rows and columns");
    scanf("%d %d",&r,&c);

    printf("enter the elemnts of matrix a\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",& a[i]);
        }
    }
    printf("enter the elements of matrix b\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i];)
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
    
    if (a[i][j]!=b[i][j])
    {
    flag=0;
    break;
    }
}
    }
    if(flag==0)
   {
    printf("the given matrices are not equal");
   }
   else
   {
    printf("the given matrices are equal");
   }

    return 0;
}