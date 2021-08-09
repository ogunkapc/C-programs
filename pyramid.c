#include<stdio.h>
int main()
{
	int i, gaps, rows, j=0;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; ++i, j=0){
		for(gaps=1; gaps<=rows -i; ++gaps){
			printf(" ");
		}
		
		while(j !=2*i - 1){
			printf("*");
			++j;
		}
		
		printf("\n");
	}
	
	system ("pause");
	return 0;
}
