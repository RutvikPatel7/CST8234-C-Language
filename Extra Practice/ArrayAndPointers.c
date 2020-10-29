#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    int rowSize = 2;
    int columnSize = 4;
    int row, column;
    
    int array2D[rowSize][columnSize];

    int counter = 100;
    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            array2D[row][column] = counter++ ;
        }
    }

    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            printf("%d, ", array2D [row][column]);
        }
    }
    printf("\n");


    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            printf("array notation = %p, pointer notation = %p\n", &array2D[row][column], (int *)array2D + row * columnSize + column);
        }
    }

    printf("\n");

    printf("***************************************");

    printf("\n");

    int **pArray2D;
    pArray2D = (int**) malloc(rowSize * sizeof(int*));

    for (row = 0; row < rowSize; row++ ) {
            *(pArray2D + row) = (int *) malloc(sizeof(columnSize * sizeof(int)));
    }

    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            *((int *)pArray2D + row * columnSize + column) = counter++;
        }
    }

    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            printf("%d ", *((int *)pArray2D + row * columnSize + column));
        }
    }

    printf("\n");

    for (row = 0; row < rowSize; row++ ) {
        for (column = 0; column < columnSize; column++ ) {
            printf("pointer to pointer = %p\n",  (int *)pArray2D + row * columnSize + column);
        }
    }

    printf("\n");

    printf("%p\n", &pArray2D);
    printf("%p\n", pArray2D);
    printf("%d\n", *( (int *) pArray2D));
    
    printf("***************************************");
}
