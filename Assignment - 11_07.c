/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*7. Write a program to count digits in a given number*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, count = 0;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		int rem = num % 10;
		num = num / 10;
		count++;
	}
	printf("Total Digit : %d",count);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/