#include<stdio.h>
#define PI 3.1416

int main()
{
//interger data type
	int integerVar, truncatedResult;
	integerVar=10;
	printf("Interger Variable= %d\n\n",integerVar);

//float data type
	float floatVar = PI;
	printf("Default float Variable: %f\n",floatVar);
	printf("float Variable with 2 decimal place defined: %.2f\n\n",floatVar);

//character data type
	char charVar = 'A';
	printf("Character Variable: %c\n\n",charVar);

//type casting
	float result= (float)integerVar+floatVar;
	printf("Result after casting: %.2f\n\n",result);

// more type casting
	truncatedResult=(int)result;
	printf("Truncated Result: %d\n\n",truncatedResult);

// automatic type promotion
	int x=5;
	float y=2.5;
	float sum= x+y;
	printf("Valoe of x and y are: %d and %.2f\n",x,y);
	
	return 0;
}
