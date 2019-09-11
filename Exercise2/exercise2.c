/* Here, you should entry the required libraries */
#include <stdio.h>


void main(){
	int num1;
	int num2;
	int result=0;

	/* Here, you should write the source code of your program */
	printf("Introduce the first number you want to sum \n" );
	scanf("%d",&num1);
	printf("Introduce the second number you want to sum \n " );
	scanf("%d",&num2);
	result = num1+num2;
	
	printf("the result of the sum is %d", &result);
}
