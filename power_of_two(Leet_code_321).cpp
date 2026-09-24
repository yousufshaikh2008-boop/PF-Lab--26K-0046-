#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: \n");
	scanf("%d", &n);
	if((n&1)==0){
		printf("%d is an even number \n", n);
		if(n>0&&(n&(n-1))==0){
			printf("%d is the power of 2 \n", n);
		}else{
			printf("%d is not the power of 2 \n", n);
		}
	}
	else{
		printf("%d is a odd number \n", n);
		if(n>0&&(n&(n-1))==0){
			printf("%d is the power of 2 \n", n);
		}else{
			printf("%d is not the power of 2 \n", n);
		}
	}
	return 0;
}
