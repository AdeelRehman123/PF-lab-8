#include<stdio.h>
int main(){
	int i,j,k,count =0;
	printf("Enter start from:");
	scanf("%d",&i);
	printf("These are odd (%d - 1)\n",i);
	if(i%2==0){
		i=i+1;
		for (j = i; j > 1; j -= 2) {
            for (k = j-2; k > 1; k -= 2) {
                printf("%d ", k);
        }
        printf("\n"); 
    }
	}
	else if(i%2!=0){
		for (j = i; j > 1; j -= 2) {
            for (k = j; k > 1; k -= 2) {
                printf("%d ", k);
        }
        printf("\n"); 
	}
    }
    return 0;
}
