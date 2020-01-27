//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 11
//
//  Write a program to input the elements of a two-dimensional array.
//  Then from this array, make two arrays--
//  one that stores all odd elements of the two-dimensional array
//  and the other that stores all even elements of the array.
//
//  Created by Stephen Allison on 14/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_DIMENSIONS (5U)

void printArray(int (*array)[ARRAY_DIMENSIONS]);
void fillArray(int (*array)[ARRAY_DIMENSIONS]);
void getEvens(int (*array)[ARRAY_DIMENSIONS], int (*evenArray)[ARRAY_DIMENSIONS]);
void getOdds(int (*array)[ARRAY_DIMENSIONS], int (*oddArray)[ARRAY_DIMENSIONS]);

int main() {
    
    int array[ARRAY_DIMENSIONS][ARRAY_DIMENSIONS] = {0};
    int evenArray[ARRAY_DIMENSIONS][ARRAY_DIMENSIONS] = {0};
    int oddArray[ARRAY_DIMENSIONS][ARRAY_DIMENSIONS] = {0};
    
   
    fillArray(array);
    printf("Array.\n");
    printArray(array);
    
    getEvens(array, evenArray);
    printf("Even Array\n");
    printArray(evenArray);
   
    getOdds(array, oddArray);
    printf("Odd Array\n");
    printArray(oddArray);
    
    
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

void fillArray(int (*array)[ARRAY_DIMENSIONS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            *(*(array+i)+j) = (int)(1.0 + 10.0 * rand() / RAND_MAX);
        }
    }
}

void getEvens(int (*array)[ARRAY_DIMENSIONS], int (*evenArray)[ARRAY_DIMENSIONS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            if( (*(*(array+i)+j) % 2) == 0 )
            {
                *(*(evenArray+i)+j) = *(*(array+i)+j);
            }
        }
    }
}

void getOdds(int (*array)[ARRAY_DIMENSIONS], int (*oddArray)[ARRAY_DIMENSIONS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONS; j++)
        {
            if( (*(*(array+i)+j) % 2) != 0 )
            {
                *(*(oddArray+i)+j) = *(*(array+i)+j);
            }
        }
    }
}
