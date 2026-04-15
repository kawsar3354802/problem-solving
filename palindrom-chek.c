 #include<stdio.h>
 #include<string.h>
 int main() {
    char str[100];
    scanf("%s",str);
    int len,flag=1;
    len=strlen(str);
    for (int i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("string is a palindrom\n");
    }
    else{
        printf("string is not a palindrom\n");
    }
    return 0;
 }