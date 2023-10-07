#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int population,target;
    int years = 0;

    // TODO: Prompt for start size
    do
    {
         population = get_int("Type intial population: ");

    }while(population < 9);
    // TODO: Prompt for end size
    do
    {
        target = get_int("Type target`s population : ");

    }while(target < population);
    // TODO: Calculate number of years until we reach threshold


    while(population < target )
    {

        population = population + population/3 - population/4;
        years++;
    }
    // TODO: Print number of years
    printf("Years: %i \n",years);
}
