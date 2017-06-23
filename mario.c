#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x;

do
{
    printf("Please put in the height of the pyramid. The height must be a positive integer, no greater than 23: ");
    x = get_int();
}
while (x<0 || x>23);

for (int i = 0; i < x; i++)
{
    for(int y = 0; y < x-i-1; y++)
        {
            printf(" ");
        }
        
        	for(int z = x - i - 1; z < x; z++)
		{
			printf("#");
			
		}
	printf("  ");
	
		for(int z = x - i - 1; z < x; z++)
{
			printf("#");
}
			printf("\n");
}
}
