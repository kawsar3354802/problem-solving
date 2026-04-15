#include<stdio.h>
int main (){
    int arr[10]={7,99,37,101,77,88,45,98,96,55};
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
     int m= -1;
    for (int i=0;i<10;i++){
        if(arr[i]==max){
            continue;
        }
        for(int j=0;j<10;j++){
            if(arr[j]==max){
                continue;
            }
            if(arr[j]>m){
                m=arr[j];
            }
        }
    }
    printf("2nd max is  %d",m);
    return 0;
}