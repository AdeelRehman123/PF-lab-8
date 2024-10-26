#include<stdio.h>
int main(){
    int i,j,k;
    int arr1[3][3]={1};

    int arr2[3][3]={
        {1,1,1},
        {1,8,1},
        {1,1,1}
    };
    int result[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int IN_x=0,IN_y=0;
    for ( i = 0; i < 3; i++)//rows
    {
        for ( j = 0; j < 3; j++)//cols
        {
            for ( k = 0; k < 3; k++)
            {
                result[IN_x][IN_y]+=arr1[i][k]*arr2[k][j];
            }
            
            IN_y++;
        }
        IN_y=0;
        IN_x++;
    }
    printf("Result matrix:\n");
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

   return 0;
}
