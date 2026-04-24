#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
       }
       for (int i=0;i<5;i++){
            int count =0;
            for (int j=0;j<5;j++){
                if(arr[i]==arr[j]){
                    count ++;
                }
                
            }if(arr[i]==arr[i+1]){
                    continue;
            }
                 
            
            printf("the frequency of %d is %d\n",arr[i],count);
       }
       return 0;
}