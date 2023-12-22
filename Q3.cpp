#include<stdio.h>
int main()
{
	//Q3
	int a=69,b;
	b = a+5;
	
	//ON a
	printf("%i\n",a);
	printf("Post increment:%i\t",a++);
	printf("%i\n",a);
	printf("Pre increment:%i\t",++a);
	printf("%i\n",a);

	//ONb
	printf("%i\n",b);
	printf("Post decrement:%i\t",b--);
	printf("%i\n",b);
	printf("Pre increment:%i\t",--b);
	printf("%i\n",b);

	return 0;
}
