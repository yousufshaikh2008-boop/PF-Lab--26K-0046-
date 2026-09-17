# include<stdio.h>
int main(){
	int n1, n2, n3;
	printf("Enter the first number: \n");
	scanf("%d", &n1);
	printf("Enter the second number: \n");
	scanf("%d", &n2);
	printf("Enter the third number: \n");
	scanf("%d", &n3);
	
	if ((n1>n2)&&(n1>n3)){
        printf("The largest number is %d\n", n1);
    }
    else if((n2>n1)&&(n2>n3)){
        printf("The largest number is %d\n", n2);
    }
    else if((n3>n1)&&(n3>n2)){
        printf("The largest number is %d\n", n3);
    }
    else{
        printf("Any of the two are equal or all");
    }
    return 0;
}
