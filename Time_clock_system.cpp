#include<stdio.h>
int main(){
	float time;
	printf("Enter the current time.\n");
	scanf("%d", &time);
	
	if((time>=5)||(time<=11)){
		printf("Greetings! Good Morning.\n");
	}
	else if((time>=12)||(time<=18)){
		printf("Greetings! Good Evening.\n");
	}
	else if((time>18)||(time<=24)){
		printf("Good Night! \n");
	}
	else{
		printf("Invalid Input.\n");
	}
	return 0;
}
