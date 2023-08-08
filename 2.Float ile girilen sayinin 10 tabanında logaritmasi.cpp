#include<stdio.h>
#include<math.h>
int main()
{
	float number , result;
	printf("Enter a number: ");
	scanf("%f" ,&number);
	
	result = log10(number);
	
	printf("the algorithm of the entered number in base 10: %f" ,result);
	
	return 0;
	
}
