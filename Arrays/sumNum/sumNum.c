#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
// exercicio nao dado em sala somente teste 
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Erro \n");
        return 1;
    }

    int num = atoi(argv[1]);
    int resultado = num + 5; 

    printf("%d + 5  = %d\n", num, resultado);
}
