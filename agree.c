#include <stdio.h>
#include <cs50.h>
#include<cs50.c>

int main(void)
{
    char answer= get_char("Do you agree.? ");
    if(answer=='y'|| answer=='Y')
    {
        printf("Agreed.!\n");
    }
    else if (answer=='n'||answer=='N')
    {
        printf("Not Agreed !\n");
    }
}