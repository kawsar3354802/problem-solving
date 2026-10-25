#include<stdio.h>
int main(){
  int a,b,sum;
   if (scanf("%d %d", &a, &b) != 2) {
    printf("Invalid input\n");
    return 1;
}
  int count =0;
  sum=a+b;
  while(sum!=0){
  count++;
  sum=sum/10;
  }
  printf("%d\n",count);
  return 0;
}