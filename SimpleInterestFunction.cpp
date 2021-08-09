//Function for simple Interest
#include<stdio.h>

float SimpleInterest(float principal, int time, float rate);	//Declaring the function

int main()
{
	int time;
	float principal, rate, SI;
	
	printf("Enter the Principal Amount: ");
	scanf("%f", &principal);
	
	printf("Enter the interest rate: ");
	scanf("%f", &rate);
	
	printf("Enter the time period: ");
	scanf("%d", &time);
	
	SI = SimpleInterest(principal, rate, time);	//Calling the function
	printf("Your Simple Interest on %.2f in %dyears is %.2f", principal, time, SI);
	
	return 0;
}

float SimpleInterest(float principal, int time, float rate)	//Deifning the function

{
	float SI;
	SI = (principal * rate * time) / 100;
	
	return SI;
}
