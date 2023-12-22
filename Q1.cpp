#include<stdio.h>
int main()
{
	
	int a,b;
	//inputting
	printf("Enter two numbers:");
	scanf("%i %i",&a,&b);
	if(a!=0 && b!=0)
	{
	//Q1
	printf("\nThe greater number would be priorotised as 1st\n\n");
	//sum
	printf("The sum is %i\n",a+b);
	//difference
	printf("The difference is %i\n",a>b?a-b:b-a);
	//multiplication
	printf("The product is %i\n",a*b);
	//division
	printf("On division: %f \t",a>b?(float)a/(float)b:(float)b/(float)a);
	//modular division
	printf("Remainder: %i\n\n",a>b?a%b:b%a);
	}	
	else
	{
	//sum
	printf("The sum is %i\n",a+b);
	//difference
	printf("The difference is %i\n",a>b?a-b:b-a);
	//multiplication
	printf("The product is %i\n",a*b);
	//division
	printf("The division can't be performed as the smaller number can't be zero.\n");
	}
	return 0;
}
