#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int count =0;
    fgets(word,100,stdin);
    int len=strlen(word);
    for(int i=0;i<len;i++){
        if((word[i]=='a')||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
            count++;
        }
    }
    printf("Number of vowel is %d\n",count);
     return 0;
     
}
