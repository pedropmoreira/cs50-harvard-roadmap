#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int numbers[] = {20,500,10,5,100,1,50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("The number is in the %i position in the array\n", i );
            return 0;
        }

    }
    printf("Not found\n");
    return 1;

}
