#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	float d=0;
	printf("Enter the co efficient (a): \n");
	scanf("%d", &a);
	printf("Enter the co effiecient (b): \n");
	scanf("%d", &b);
	printf("Enter the constant (c): \n");
	scanf("%d", &c);
	if(a==0){
		if(b==0){
			printf("Not a valid equation. \n");
		}
		else{
			float x=-c/b;
			printf("Linear equation root x= %f\n", x);
		}
	}
	else{
		float d=(b*b)-(4*a*c);
		if(d>0){
			float x1=(-b+sqrt(d))/(2*a);
			float x2=(-b-sqrt(d)/(2*a);
			printf("The real roots in this condition are %f and %f \n", x1, x2);
		}
		else if(d==0){
			float x=-b/2*a;
			printf("The one repeated loop in this condition is %f\n", x);
		}
		else{
			float x1=-b/2*a;
			float x2=sqrt(fabs(d))/2*a;
			printf("The complex roots for this condition are %f+%fi and %f-%fi \n", x1, x2, x1, x2);
		}
	} 
	return 0;
}
