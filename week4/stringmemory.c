#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // printing the string
    string s = "Hi!";
    printf("%s\n", s);
    // printing what is inside s - (address)
    printf("%p\n", s);
    // printing what is inside the first letter [0]]
    printf("%p\n", &s[0]);
    // printing what is inside the  [1]
    printf("%p\n", &s[1]);
    // printing what is inside the [2]
    printf("%p\n", &s[2]);
    // printing what is inside the  [3]
    printf("%p\n", &s[3]);
}
