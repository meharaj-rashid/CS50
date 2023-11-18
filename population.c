#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //prompts user for a starting population size
    int start_population;
    do
    {
        start_population = get_int("Population size (Size shpuld be greater than 9): ");
    }
    while (start_population<=9);

    // gets the final ending population size from the user
    int end_population;
    do
    {
        end_population = get_int("Targeted population (Size shpuld be greater than start population): ");
    }
    while (end_population<=start_population);

    int new_born=start_population/3;
    printf("new born= %i\n",new_born);
    int deceased_population=start_population/4;
    printf("Deceased= %i\n",deceased_population);

    float final_population= ((start_population+new_born)-deceased_population);
    printf("final population at the end of an year= %f\n",final_population);
    float final=((end_population-final_population)/(new_born-deceased_population))+1;
    printf("Time to get to expected population: %f",final);






}
