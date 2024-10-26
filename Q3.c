#include<stdio.h>

int main(){
    int r=3,c=3,i,j;
    int arr[3][3]={
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };
    int saddle=arr[0][0];
    int row=0,col=0;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(saddle > arr[row][j] && saddle != arr[row][j])
            {
                saddle=arr[row][j];
                col=j;
            }
        }
        for ( i = 0; i < r; i++)
        {
            if (saddle < arr[i][col] && saddle!=arr[i][col])
            {
                saddle=arr[i][col];
                row=i;
            }  
        }
    }
    printf("Saddle point is %d",saddle);
    

   return 0;
}
