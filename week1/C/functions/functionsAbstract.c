#include <stdio.h>
#include <cs50.h>

void meow(int n);

int get_positive_int(void);

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

void meow(int n ){

    for(int i = 0 ; i <n ; i ++) {
        printf("Meow\n");
    }
}

int get_positive_int(void)
{
    int n ;
    do
    {
        n = get_int("Number?\n");
    }while(n <1);

    return n ;
}
