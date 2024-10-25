#include<stdio.h>
int main() {
	int i,j;
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    for ( i = 0; i <2; i++){
    for ( j = 0; j <2; j++) {
    result[i][j] = mat1[j][i] + mat2[j][i];
}
}

    for ( i = 0; i <2;  i++) {
    for ( j = 0; j <2;  j++) {
    printf("%d\t", result[i][j]);
}
    printf("\n");
}
    return 0;
}
