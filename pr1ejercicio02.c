#include <stdio.h>

int main()
{

    int arreglo[3] = {1, 2, 3};

    printf("%p\n", &arreglo[0]);
    printf("%p\n", arreglo);
    printf("%p\n", &arreglo);

    return 0;
}
