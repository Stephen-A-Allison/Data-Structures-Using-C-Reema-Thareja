//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 10
//
//  Write a program to count the total number of non-zero elements
//  in a two-dimensional array.
//
//  Created by Stephen Allison on 14/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_DIMENSIONS (5U)

void printArray(int (*array)[ARRAY_DIMENSIONS]);
void fillArray(int (*array)[ARRAY_DIMENSIONS]);
int zerosInArray(int (*array)[ARRAY_DIMENSIONS]);

int main() {
    
    int array[ARRAY_DIMENSIONS][ARRAY_DIMENSIONS] = {0};
    
    printArray(array);
    fillArray(array);
    printArray(array);
    
    printf("The total number of non-zeros elements within the two dimensional array is %d.\n", zerosInArray(array));

}

void fillArray(int (*array)[ARRAY_DIMENSIONS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            *(*(array+i)+j) = rand() % 11u;
        }
    }
}

void printArray(int (*array)[ARRAY_DIMENSIONS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            printf("%d\t", *(*(array+i)+j));
        }
        printf("\n");
    }
}

int zerosInArray(int (*array)[ARRAY_DIMENSIONS])
{
    int sum = 0;
    
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            if( *(*(array+i)+j) != 0 )
            {
                sum++;
            }
        }
    }
    return sum;
}
