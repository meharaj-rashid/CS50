#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main (void)

{
    string answer = get_string("What is your name? ");
    printf("Hello, %s\n",answer);
}