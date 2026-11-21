#include<stdio.h>
void calculate_bonus(float basic_salary,int rating){
    float bonus ;
    if(rating >=5){
        bonus=basic_salary*0.2;
        
    }
    else if(rating==4 &&rating<5){
        bonus=basic_salary*0.15;
    }
    else if(rating ==3 && rating <4){
        bonus=basic_salary*0.1;
    }
    else{
        bonus=0;
    }
    printf("bonus = %f\n",bonus);
}
void calculate_salary(float basic_salary,int rating){
   float final_salary;
   if(rating >=5){
        final_salary=basic_salary*(1+0.2);
        
    }
    else if(rating==4 &&rating<5){
        final_salary=basic_salary*(1+0.15);
    }
    else if(rating ==3 && rating <4){
        final_salary=basic_salary*(1+0.1);
    }
    else{
        final_salary=basic_salary;
    }
    printf("Final salary = %f\n",final_salary);

}
int main() {
    char name[20];
    char department[20];
    float basic_salary;
    
    
    int rating;
    int N;
    printf("Enter the number of employ \n");
    scanf("%d",&N);
    for (int i=0;i<N;i++){
    printf("Enter the employ name \n");
    fgets(name,sizeof(name),stdin);
    getchar();
     printf("Enter the department \n");
    fgets(department ,sizeof(department),stdin);
    
    

 printf("Enter basic salary\n");
    scanf("%f",&basic_salary);

 printf("Enter the rating\n");
    scanf("%d",&rating);
    printf("Employe name %s\n",name);
    printf("Department %s\n",department);
    calculate_bonus(basic_salary,rating);
    calculate_salary(basic_salary,rating);
}
    return 0;

}
