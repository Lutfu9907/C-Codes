
#include <stdio.h>
#include <stdlib.h>

int max_sum_row(int mat[][20], int m, int n)
{
    int MAX_SUM = 0;
    int max_sum_r = 0;
    int i, j;
    for (i = 0; i < m; ++i)
    {
        int max_sum = 0;
        for (j = 0; j < n; ++j)
        {
            max_sum += mat[i][j];
        }
        if (max_sum > MAX_SUM)
            max_sum_r = i;
        else
            continue;
    }
    return max_sum_r;
}

int main()
{
    int mat[20][20];
    printf("Matrix is: \n");
    int i, j;

    for (i = 0; i < 20; ++i)
    {
        for (j = 0; j < 20; ++j)
        {

            mat[i][j] = rand() % 10;

            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    int max_sum_r = max_sum_row(mat, 20, 20);
    printf("\n\n The row with maximum sum is %d\n", max_sum_r);
    return 0;
}