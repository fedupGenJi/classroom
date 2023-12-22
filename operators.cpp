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
	
	//Q2A
/*(	if(a==b)
	{
		printf("EQUAL\n");
	}
	else if(a!=b)
	{
		printf("NOT EQUAL\n");
	
		if(a>b)
		{
			printf("The 1st number is greatest");
		}
		else if(b>a)
		{
			printf("The 2nd number is greatest");
		}
		printf("\n\n");
	}
*/
 	//using terminal
    if(a==b)
    {
    	printf("EQUAL\n");
	}
	else
	{
	a>b?printf("A greater\n"):printf("B greater\n");
	}
	
	//Q2B
	if(a>0 && b>0)
	{
		printf("Both are greater than 0.");
	}
	else if(a>0 || b>0)
	{
		printf("One of them is greater than 0.\n");
		if(a>0)
		{
			printf("Only the 1st number is greater than 0.");
		}
		else if(b>0)
		{
			printf("Only the 2nd number is greater than 0.");
		}
	}
	else if(a==0 && b==0)
	{
		printf("Both are equal to zero.");
	}
	else if(a==0 || b==0)
	{
		printf("One of them is equal to zero.\n");
		if(a==0 && b!=0)
		{
			printf("Only the 1st number is equal than 0.");
		}
		else if(a!=0 && b==0)
		{
			printf("Only the 2nd number is equal than 0.");
		}
	}
	else if(a<0 && b<0)
	{
		printf("Both are less than 0.");
	}
	else if(a<0 || b<0)
	{
		printf("One of them is less than 0.\n");
		if(a<0)
		{
			printf("Only the 1st number is less than 0.");
		}
		else if(b<0)
		{
			printf("Only the 2nd number is less than 0.");
		}
	}
	return 0;
}
