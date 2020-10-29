/*
Name:Rutvik Patel
Student No.:040915445
Assignment: Lab 1
Date : 16/09/2019
Subject : CST8234 All C language
*/
#include<stdio.h>
#include<conio.h>

void main()
{
     int i;
   
    for(i=1;i<=100;i++)
    {
    	printf("%d ",i);    
		
		if((i%5==0) && (i%3==0))
        {
           printf("\tI am multiplied by 3 and 5!!!\n");
        }
        
        else
        {
        	if(i%5==0)
        	{
				printf("\tI am multiplied by 5!!!\n");        	
			}
			
			else
			{
				if(i%3==0)
				{
					printf("\tI am multiplied by 3!!!\n");
				}
				
				else
				{
					printf("\n");
				}
			}
		}
   
    
	}
    getch();

}
