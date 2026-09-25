 #include<stdio.h>
 #include<string.h>
 int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int l;
        char c;
        scanf("%d %c",&l ,&c);
    char str[l];
    scanf("%s",str);
    int count =0;
    
     for(int i=0;i<l/2;i++){
        if(str[i]!=str[l-i-1]){
            if(str[i]==c){
                str[l-1-i]=c;
                count ++;
            }
            else if(str[l-1-i]==c){
                str[i]=c;
                count ++;

            }
            else{
                str[i]=c;
                count ++;
                str[l-1-i]=c;
                count ++;

            }
        }
     }
     printf("%d\n",count);
   
}
    return 0;
 }
 