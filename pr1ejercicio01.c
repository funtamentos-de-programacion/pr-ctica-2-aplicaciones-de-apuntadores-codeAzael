#include <stdio.h>

int main()
{

    int arreglo[5] = {1, 2, 3, 4, 5};

    for (int i = 1; i < 5; i++)
    {
        printf("%p\n", &arreglo[i]);
    }

    return 0;
} 
