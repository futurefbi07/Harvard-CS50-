
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


// main funtion does not take any arguments
int main(void)
{
    // get name of user
        printf("What is your name?: \n");
        string s = get_string();

    // print the first initial
    printf("%c", toupper(s[0]));
    
       // loop 
    for ( int i = 0, n = strlen(s); i < n; i++)
        {
        // check space and end of characters
        if (s[i] == ' ' && s[i + 1] != '\0') 
            {
            // print other initials
            printf("%c",toupper(s[i + 1])); 
            
            }
        }
        
            printf("\n");
}