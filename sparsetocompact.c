
// C++ program for Sparse Matrix Representation
// using Array
#include<stdio.h>

int main()
{
    // Assume 4x5 sparse matrix
    int sparseMatrix[50][50],r,c,m,n;
    printf("enter r,c");
    scanf("%d%d",&m,&n);

    printf("enter sparse matrix");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&sparseMatrix[i][j]);
    }

    int size = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (sparseMatrix[i][j] != 0)
                size++;

    // number of columns in compactMatrix (size) must be
    // equal to number of non - zero elements in
    // sparseMatrix
    int compactMatrix[3][size];

    // Making of new matrix
    int k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (sparseMatrix[i][j] != 0)
            {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<size; j++)
            printf("%d ", compactMatrix[i][j]);

        printf("\n");
    }
    return 0;
}
