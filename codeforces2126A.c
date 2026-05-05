// https://codeforces.com/problemset/problem/2126/A
 #include<stdio.h>
 int main(){
 int t,min;
 scanf("%d",&t);
 for(int i=0;i<t;i++){
  min =100;
  int x;
  scanf("%d",&x);
  while(x>0){
    int digit=x%10;
    if(digit<min){
      min=digit;
    }
    x=x/10;
  }
  printf("%d\n",min);
   
 }
  
  return 0;
}
