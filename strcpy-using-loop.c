#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,100,stdin);
    char  name2[100];
     int len= strlen(name);
     for (int i=0;i<len;i++){
        name2[i]=name[i];
     }
     printf("%s",name2);
     return 0;
}