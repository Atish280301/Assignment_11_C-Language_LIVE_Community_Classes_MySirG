/*Assignment - 11 C Language LIVE Community Classes MySirG*/
/*9. Write a program to calculate LCM of two numbers*/
#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    int num1, num2, max_div, flag = 1;  
      
    printf(" Enter any two positive numbers to get the LCM \n");  
    scanf("%d %d", &num1, &num2);  
      
      
    max_div = (num1 > num2) ? num1 : num2;  
      
    while (flag) 
    {  
        if (max_div % num1 == 0 && max_div % num2 == 0)  
        {  
            printf("The LCM of %d and %d is %d. ", num1, num2, max_div);  
            break;  
        }  
        ++max_div; 
    }
	getch(); 
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/