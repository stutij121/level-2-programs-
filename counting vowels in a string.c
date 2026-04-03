#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i=0,count=0;
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i'||str[i]=='A'||str[i]=='O'||str[i]=='U'||str[i]=='E'||str[i]=='I')
       {
        count++;
       }
       i++;
    }
        printf("the number of vowels in the string are :%d",count);
        return 0;
    }