/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*4. Write a program to calculate sum of squares of first N natural numbers*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, sum, square;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{
		square = pow(i,2);
		sum = sum + square;
	}
	printf("Sum : %d",sum);
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/