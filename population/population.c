#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    if (start == end)
    {
        years = 0;
    }
    else
    {
        do
        {
            start += (start / 3) - (start / 4);
            years++;
        }
        while (start < end);
    }
    // TODO: Print number of years
    printf("Years: %i\n", years);
}
