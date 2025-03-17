#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    // pointer variable
    int *p = &n;
    // printing the address of N ,this one is allocated in *p
    printf("%p\n", p);
    // printing the address of N withot creating p
    printf("%p\n", &n);
    // printing what is inside of N's address
    printf("%\n", *p);


}
