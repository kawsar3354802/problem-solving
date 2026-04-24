#include<stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    if(c<0){
        printf("Freezing water\n");

    }
    else if(c>=0 && c<=10){
        printf("Very Cold Water\n");
    }
    else if(c>10 && c<=20){
        printf("Cold weather\n");
    }
    else if(c>20 && c<=30){
        printf("Normal Weather\n");
    }
    else if (c>30 && c<=40){
        printf("Its Hot\n");
    }
    else {
        printf("Its Very Hot\n");
    }
    return 0;
}