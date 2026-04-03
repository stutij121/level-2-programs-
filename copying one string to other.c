#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[50],str2[50];
    printf("enter a string:");
    fgets(str1,sizeof(str1),stdin);
    strcpy(str2,str1);

    printf("original string:%s",str1);
    printf("copied string:%s",str2);
    return 0;

}