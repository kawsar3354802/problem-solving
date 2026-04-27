/*beecrowd | 1145
Logical Sequence 2
Adapted by Neilor Tonin, URI  Brazil

Timelimit: 1
Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers.

Input
The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).

Output
Each sequence must be printed in one line, with a blank space between each number, like the following example.*/

#include <stdio.h>
 
int main() {
 
   int x,y;
   scanf("%d %d",&x,&y);
   for (int i=1;i<=y;i++){
       printf("%d",i);
       if(i%x==0){
           printf("\n");
       }
       else{
           printf(" ");
       }
   }
    return 0;
}