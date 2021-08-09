//Function to check the greater between two numbers

#include<stdio.h>
int countit(int a, int b);	//This is where the function is being declared

int main()
{
	int a, b, solution;
	
	printf("Enter the first number: ");
	scanf("%d", &a);
	
	printf("Enter the second number: ");
	scanf("%d", &b);
	
	solution = countit(a, b);	//This is where the function is being called
	
	return 0;
}

int countit(int a, int b)	//This is where the function is being defined
{
	//comparing the two numbers using the IF statement
	if(a>b){
		printf("%d is greater than %d", a, b);
	}
	else{
		printf("%d is greater than %d", b, a);
	}
	
}
