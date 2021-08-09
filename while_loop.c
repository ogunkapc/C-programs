// Print numbers from 1 to 5
#include <stdio.h>

int main()
{
    int start, end;
    
	printf("Enter the first number: ");
    scanf("%d", &start);
    
	printf("Enter the last number: ");
    scanf("%d", &end);
    
    printf("\n");
    
    printf("Numbers from %d to %d: \n",start, end);
	  
    while (start <= end)
    {
        printf("%d\n", start);
        start++;
    }

    return 0;
}
