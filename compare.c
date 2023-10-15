#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    int x=get_int("What is X? " );
    int y=get_int("What is Y? ");

    if(x>y)
    {
        printf("X is greater than Y.!");
    }
    else if(x<y)
    {
        printf("X is less than Y");
    }
    else
    {
        printf("X is equal to Y..!");
    }
    

}
