#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int p,w,s[3];
        scanf("%d",&p);
        for (int i=0;i<3;i++){
            scanf("%d",&s[i]);
        }
        int max=0;
        for(int i=0;i<3;i++){
            if(p-s[i]>max){
                max=p-s[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}