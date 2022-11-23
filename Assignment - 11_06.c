/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*6. Write a program to calculate factorial of a number*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, fact = 1;;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{ 
		fact = fact * i; 
	}
	printf("Factorial : %d ",fact);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/