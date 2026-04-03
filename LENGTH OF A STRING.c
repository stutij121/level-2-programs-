#include<stdio.h>
int main ()
{
    char str[100];
    int i=0,length=0;
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    while (str[i]!='\0'){
        length++;
        i++;
    }
    printf("the length of string is:%d",length);

    return 0;
    }
