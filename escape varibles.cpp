// using to learn escape variables
#include<stdio.h>

int main()
{
	// \n is used to seperate two line
	printf("line 1\nline 2\n");
	
	printf("Hello\bWorld\n");
	printf("Hello\tWorld\n");
	printf("COMP 102 Students\rHello\n");
	printf("Hello\fWorld\n");
	printf("This is a backstab \\ \n");
	printf("This is a single quote: \'\n");
	printf("This is a double quote: \"\n");
	printf("Hello\vWorld\n");
	printf("What\? This is a question\?\n");
	
	// this array is terminted by 0. this is similar to ending a sentence with fullstop
	char str[]="Hello\0World";
	printf("%s\n",str);

	//you can make a sound from the system if it is supported, or maybe not. let's try
	printf("Beep!\a\n");
}
