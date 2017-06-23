#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main (void)
{
float money;
int count = 0;

do
{
    printf("How much change do I owe you? Please enter a non-negative number: ");
    money=get_float();
}
while (money < 0);

//converting dollar to cents 

    int c = round(money * 100.00);
		
		while ( c >= 25)
{	
    c = c - 25;
    count++;
}
		while (c >= 10) 
		{
			
    c = c - 10;
    count++;
		}
		while (c >= 5) {
			
    c = c - 5;
    count++;
		}		
		while (c >= 1) {
			
    c = c - 1;
    count++;
		}
    	printf("%d\n", count);
    	
}
