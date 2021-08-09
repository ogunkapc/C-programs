//Function for dividing two numbers

#include<stdio.h>
int divideit(int num1, int num2);		//This is where the function is being declared

int main()
{
	int number1, number2;
	int res4;		//result
	
	printf("Enter the first number: ");
	scanf("%d", &number1);
	
	printf("Enter the second number: ");
	scanf("%d", &number2);
	
	printf("\n");
	
	res4 = divideit(number1, number2);		//This is where the function is being called
	printf("Dividing %d by %d is %d",number1, number2, res4);
	
	return 0;
}

int divideit(int num1, int num2)		//This is where the function is being defined
{
	int div;
	div = num1 / num2;
	
	return div;
	
}
