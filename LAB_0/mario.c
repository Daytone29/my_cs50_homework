#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int in;
/*We select possible options for incorrect input*/
    do
    {
        in = get_int("Height: "); //function for input from cs50 library
    }
    while (9 < in || in <= 0);
  
    for (int i = 1; i <= in; ++i)  //create max hight from input
    {
        for (int j = in; j > 0; --j)  //count the number of spacec and heshes
            if (j > i)
                printf("%c", ' ');
            else
                printf("%c", '#');
        putchar('\n');  //function dor division`s rows
    }
}
