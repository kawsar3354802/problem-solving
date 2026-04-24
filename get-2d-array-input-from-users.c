#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int array[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Element %d %d\n",i,array[i][j]);
        }
    }
    return 0;
}