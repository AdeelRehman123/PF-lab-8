#include<stdio.h>
int main(){
	int i,j,k,sum=0,sum2=0;
	int arr[2][2][2] = {{{2,3},{4,5}},{{6,7},{4,2}}};
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("%d",arr[i][j][k]);
				if(i==1){
					sum2+=arr[i][j][k];
				}
				else if(i==0){
					sum+=arr[i][j][k];
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("Sum of first page:%d\n",sum);
	printf("sum of second page:%d",sum2);
	return 0;
}
