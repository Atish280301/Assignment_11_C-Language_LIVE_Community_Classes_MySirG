/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*1. Write a program to calculate sum of first N natural numbers*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, sum;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{
		
		sum = sum + i;
	}
	printf("Sum : %d",sum);
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/