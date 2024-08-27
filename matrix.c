#include <stdio.h>

void sum(int massiv1[2][3], int massiv2[2][3], int matrix[2][3]);

int main(void)
{
        int matrix[2][3] = {{0, 0, 0},
                            {0, 0, 0}};

        int massiv1[2][3] = {{1, 1, 1},
                            {0, 0, 0}};

        int massiv2[2][3] = {{0, 0, 0},
                            {1, 1, 1}};
                            
        sum(massiv1, massiv2, matrix);
        
        for (int x = 0; x < 2; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                printf("%d", matrix[x][y]);
            }
        printf("\n");
        }
}

void sum(int massiv1[2][3], int massiv2[2][3], int matrix[2][3])
{
    for (int i = 0, k = 0, x = 0; i < 2 && k < 2 && x < 2; i++, k++, x++)
    {
        for(int j = 0, f = 0, y = 0; j < 3 && f < 3 && y < 3; j++, f++, y++)
        {
            matrix[x][y] = massiv1[i][j] + massiv2[k][f];
        }
    }
}