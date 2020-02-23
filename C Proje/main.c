#include "matrixOps.c"

int main()
{
    int rowCount, columnCount, range;

    printf("Enter the row counts\n");
    scanf("%d", &rowCount);
    printf("Enter the column counts\n");
    scanf("%d", &columnCount);
    printf("Enter the value intervals \n");
    scanf("%d", &range);
    createMatrix(rowCount,columnCount,range);
}