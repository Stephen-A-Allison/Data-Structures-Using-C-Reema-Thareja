//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 7
//
//  Write a program to compute the sum of the elements that are
//  stored on the main diagonal of a matrix using pointers.
//
//  Created by Stephen Allison on 09/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_ROWS (5U)
#define ARRAY_COLUMN (5U)

void fillArray(int (*array)[ARRAY_ROWS]);
int sumOfDiagonal(int (*array)[ARRAY_ROWS]);

int main() {
    
    int array[ARRAY_ROWS][ARRAY_COLUMN] = {0};
    
    for (int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for (int8_t j = 0u; j < ARRAY_COLUMN; j++)
        {
            printf("%d\t", *(*(array+i)+j));
        }
        printf("\n");
    }
    
    fillArray(array);
    
    for (int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for (int8_t j = 0u; j < ARRAY_COLUMN; j++)
        {
            printf("%d\t", *(*(array+i)+j));
        }
        printf("\n");
    }
    
    printf("the sum of the diagonal is %d\n",sumOfDiagonal(array));
    
}

void fillArray(int (*array)[ARRAY_ROWS])
{
    for (int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for (int8_t j = 0u; j < ARRAY_COLUMN; j++)
        {
            *(*(array+i)+j) = rand() % 101u;
        }
    }
}

int sumOfDiagonal(int (*array)[ARRAY_ROWS])
{
    int sum = 0;
    
    for (int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for (int8_t j = 0u; j < ARRAY_COLUMN; j++)
        {
            if( i == j )
            {
               sum += *(*(array+i)+j);
            }
        }
    }
    return sum;
}
