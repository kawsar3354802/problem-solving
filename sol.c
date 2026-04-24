#include<stdio.h>
int main(){
    int marks[5], count=0;
    printf("marks of 5 student (integar between 0-100)\n");
    
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    int highest=marks[0];
    printf("enter your choice\n");
    printf("Display all student marks\n");
    printf("Find the highest mark\n");
    printf("Count storing above 80\n");
    printf("Exit\n");
    int choice;
    scanf("%d",&choice);
    switch(choice) {
        case 1: for(int i=0;i<5;i++){
            printf("%d\t",marks[i]);
             
            }
            break;
        case 2:for (int i=0;i<5;i++) {
            if(highest<marks[i]){
                highest=marks[i];
            }
            }
            printf("highest marks is %d",highest);
            break;
        case 3:for(int i=0;i<5;i++){
            if(marks[i]>80){
                count++;
            }
        
           
            }
            printf(" number of  avobe 80 marks is %d",count);
            break;
        case 4: printf("Exit");
            break;
        default :printf("invalid choice\n");
            break;
    }
    return 0;
}