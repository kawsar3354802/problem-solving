#include<stdio.h>
int main (){
    int array []={7,7,4,6,3,6,3};
    int n=7;
    int count=0;
    for(int i=0;i<n;i++){
        int isunick =1;
        for  (int j=0;j<i;j++){
            if(array[i]==array[j])
            {
                isunick =0;
                break ;
            }
        }
        if(isunick){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}