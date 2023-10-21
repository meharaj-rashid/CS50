#include <stdio.h>
#include <cs50.h>
#include<cs50.c>

int get_size(void);
void print_size(int n);



int main(void)
{
    // Get size of grid
    int n=get_size();

    // Prints the size of grid
    print_size(n);
}

int get_size(void)
{
    int n;
    do
    {
        n=get_int("Size: ");
    }
    while(n<0);
    return n;

}
   
void print_size(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
   