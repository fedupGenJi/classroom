#include<stdio.h>
int main()
{
	
	int a,b;
	//inputting
	printf("Enter two numbers:");
	scanf("%i %i",&a,&b);
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
/*    if(a==b)
    {
    	printf("EQUAL\n");
	}
	else
	{
	a>b?printf("A greater\n"):printf("B greater\n");
	}
*/
	printf("The greater is 1st \'%i\' i.e %s\n",a>b,(a>b)?"TRUE":"FALSE");
	printf("The greater is 2nd \'%i\' i.e %s\n",b>a,(b>a)?"TRUE":"FALSE");
	printf("Both are equal \'%i\' i.e %s\n\n",a==b,(a==b)?"TRUE":"FALSE");


/*	if(a>0 && b>0)
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
*/
	printf("Both are greater than 0. \'%i\' i.e %s\n",(a>0 && b>0),(a>0 && b>0)?"TRUE":"FALSE");
	printf("Both are less than 0. \'%i\' i.e %s\n",(a<0 && b<0),(a<0 && b<0)?"TRUE":"FALSE");
	printf("Both are equal to 0. \'%i\' i.e %s\n",(a==0 && b==0),(a==0 && b==0)?"TRUE":"FALSE");
	printf("One of them is greater than 0. \'%i\' i.e %s\n",(a>0 || b>0),(a>0 || b>0)?"TRUE":"FALSE");
	return 0;
}
