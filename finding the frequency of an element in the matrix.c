#include<stdio.h>
int main ()
{
    int a[3][3],key;
    int i,j,count=0;

    printf("enter the elemts of the matrix");

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

        printf("enter the element to find\n");
        scanf("%d",& key);

        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
            {
                if(a[i][j]==key)
                count++;
            }
        }
        printf("the frequency of key is :%d",count);
    return 0;