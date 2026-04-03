#include<stdio.h>
int main ()
{
    char str[50];
    int i,length=0;
    char temp;
    
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    
    while(str[length]!='\0')
    {
        length++;
    }
    if(str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }
     for(i=0;i<length/2;i++){
         temp=str[i];
         str[i]=str[length-i-1];
         str[length-i-1]=temp;
     }
     printf("reversed string=%s\n",str);
     return 0;
}

    
