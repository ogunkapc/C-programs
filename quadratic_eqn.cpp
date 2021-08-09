//C Program to solve for the roots of a quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, d;
	float root1, root2;
	
	printf("Express the equation in the form ax^2+bx+c = 0\n");
	printf("Enter the value for a: ");
	scanf("%f", &a);
	
	printf("Enter the value for b: ");
	scanf("%f", &b);
	
	printf("Enter the value for c: ");
	scanf("%f", &c);
	
	d = b * b - (4 * a * c);
	
	root1 = (-b + sqrt(d)) / 2 * a;
	printf("the first root = %.2f\n", root1);
	
	root2 = (-b - sqrt(d)) / 2 * a;
	printf("the second root = %.2f\n", root2);
	
	return 0; 
}
