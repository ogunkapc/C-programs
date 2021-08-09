//Program to calculate Simple Interest

#include<stdio.h>
int main()
{
	float PAmount, rate, time_period, SI;
	
	printf("Enter the Principal Amount: \n");
	scanf("%f", &PAmount);
	
	printf("Enter the Rate here: \n");
	scanf("%f", &rate);
	
	printf("Enter the Time Period in Years: \n");
	scanf("%f", &time_period);
	
	//calculating the S.I
	SI = (PAmount * rate * time_period)/100;
	printf("Your simple interest on the principal of %.2f is %.1f", PAmount, SI);
}
