#include <stdio.h>

int main()
{
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    printf("%p\n", matriz);
    printf("%p\n", matriz[0]);
    printf("%p\n", &matriz[0][0]);

    int i, j;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%p\n", &matriz[i][j]);
        }
    }

    return 0;
}