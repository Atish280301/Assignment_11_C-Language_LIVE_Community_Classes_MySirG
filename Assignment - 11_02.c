/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*2. Write a program to calculate sum of first N even natural numbers*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, sum = 0;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 0; i <= num ; i++)
	{
		if(i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	
	printf("sum : %d",sum);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/
