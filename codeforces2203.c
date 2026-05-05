// <!-- https://codeforces.com/contest/2203/problem/A -->
 #include<stdio.h>
 int main(){
  int t,n,m,d,k,l;
  scanf("%d",&t);
  for(int i=1;i<=t;i++){
    scanf("%d %d %d",&n,&m,&d);
   
    l=(d/m)+1;
  
   
    if(n%l==0){
      k=n/l;
    }
    else{
      k=(n/l)+1;
    }
   
  printf("%d\n",k);
 }
  
 return 0;
}