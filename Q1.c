#include<stdio.h>
int main(){
	int i,j,k,count=0;
	printf("Enter Range:");
	scanf("%d",&i);
	printf("These are prime between (1-%d)\n",i);
	for(j=2;j<=i;j++){
		for(k=i;k>1;k--){
			if(j%k==0){
				count++;
			}
			
		}
		if(count==1){
			printf("%d\t",j);
		}
		count=0;
	}
	return 0;
}
