#include <stdio.h>
#include <cs50.h>

int main (void)
{
int x; 
int y;
do
{
printf("Please enter the number of minutes it generally takes you to take to shower: "); 
x = get_int(); 
}
while (x<0);
y = x * 12; 

printf("You use generally use bottles to shower: %i\n", y); 

if	(x	<	y)	
	
    printf("Save the environment. Try to use less water");
}