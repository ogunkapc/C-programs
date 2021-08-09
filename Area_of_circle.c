//Area of a circle
#include<stdio.h>

int main()
{
	int r;
	float pi = 3.142, Area;
	printf("Enter your radius: \n");
	scanf("%d", &r);
	
	Area = pi*r*r;
	printf("The area of the circle of radius %dcm is %.2fcm squared\n", r, Area);
	
	return 0;
}
