/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*10. Write a program to reverse a given number*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, rev = 0;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	while(num != 0)
	{
		int rem = num % 10;

		num = num / 10;
		
		rev = rev * 10 + rem;
	}
	printf("Reverse : %d",rev);
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/