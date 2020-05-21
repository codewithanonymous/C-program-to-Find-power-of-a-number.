/*Program to find power of a number using For Loop */
/*Header Files */
#include<stdio.h>
#include<conio.h>

main()
{
	/*Declaring Variables*/
	int a,b,p=1,i;
	printf("\nEnter two numbers to calculate a power b :");
    printf("\t\n Enter number which will be acting as base : ");
    /*Taking input from user*/
	scanf("%d", &a);
	 printf("\t\n Enter number which will be acting as power : ");
	 /*Taking inputput from User*/
	scanf("%d", &b);
	/*Loop*/
	for(i=1;i<=b;i++)
	p=p*a;
	/*Printing the Response */
	printf("Result is %d", p);
}
