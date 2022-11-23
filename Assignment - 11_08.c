/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*8. Write a program to check whether a given number is a Prime number or not*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, test = 1;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			test = 0;
		}
	}
	if(test)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/