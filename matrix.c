#include <stdio.h>

void sum(int massiv1[2][2], int massiv2[2][3], int matrix[2][3]);

int main(void)
{
        int matrix[2][3] = {{0, 0, 0},
                            {0, 0, 0}};

        int massiv1[2][2] = {{3, 5},
                            {2, 1}};

        int massiv2[2][3] = {{8, 2, 3},
                            {1, 7, 2}};

        sum(massiv1, massiv2, matrix);
        
        for (int x = 0; x < 2; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                printf("%d ", matrix[x][y]);
            }
        printf("\n");
        }
}

void sum(int massiv1[2][2], int massiv2[2][3], int matrix[2][3])
{
    for (int i1 = 0, i2 = 0, x = 0; i1 < 2 && i2 < 2 && x < 2; i1++, x++)
    {
        for(int j1 = 0, j2 = 0, y = 0; j1 < 2 && j2 < 3 && y < 3; j2++, y++)
        {
            matrix[x][y] = massiv1[i1][j1] * massiv2[i2][j2] + massiv1[i1][j1+1] * massiv2[i2+1][j2];
        }
    }
}