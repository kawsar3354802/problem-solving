#include <stdio.h>
int main()
{
    int  n=4;
    int array[4] = {2,3,4,5};
     for(int i=0;i<(n/2);i++)
     {
        int firstvall = array[i];
        int secondvall= array[n-i-1];
        array[i]=secondvall;
        array[n-i-1]=firstvall;
     }
     for(int j=0;j<n;j++)
     {
        printf("%d\t",array[j]);
     }
     return 0;
}