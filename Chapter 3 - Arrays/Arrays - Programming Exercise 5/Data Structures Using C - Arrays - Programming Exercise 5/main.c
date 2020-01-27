//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 5
//
//  Write a program to compute the sum and mean of the elements of
//  a two-dimensional array.
//
//  Created by Stephen Allison on 09/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_ROWS (3U)
#define ARRAY_COLUMNS (5U)

void fillArray(int array[ARRAY_ROWS][ARRAY_COLUMNS]);
int sumOfElements(int array[ARRAY_ROWS][ARRAY_COLUMNS]);
float meanOfElements(int array[ARRAY_ROWS][ARRAY_COLUMNS]);

int main() {
    
    int array[ARRAY_ROWS][ARRAY_COLUMNS] = {0};
    
    for(int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_COLUMNS; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    
    fillArray(array);
    
    for(int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_COLUMNS; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    
    printf("the sum of the elements within the array is %d\n", sumOfElements(array));
    
    printf("the mean of the elements within the array is %.1f\n", meanOfElements(array));

}

void fillArray(int array[ARRAY_ROWS][ARRAY_COLUMNS])
{
    for(int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_COLUMNS; j++)
        {
            array[i][j] = rand() % 101u;
        }
    }
}

int sumOfElements(int array[ARRAY_ROWS][ARRAY_COLUMNS])
{
    uint sum = 0u;
    
    for(int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_COLUMNS; j++)
        {
            sum += array[i][j];
        }
    }
    return sum;
}

float meanOfElements(int array[ARRAY_ROWS][ARRAY_COLUMNS])
{
    float sum = 0.0f;
    
    for(int8_t i = 0u; i < ARRAY_ROWS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_COLUMNS; j++)
        {
            sum += array[i][j];
        }
    }
    return sum/(ARRAY_ROWS * ARRAY_COLUMNS);
}
