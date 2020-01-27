//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 8
//
//  Write a program to add two 3 X 3 matrix using pointers.
//
//  Created by Stephen Allison on 10/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_DIMENSIONALS (3U)

void fillArray(int (*array)[ARRAY_DIMENSIONALS]);
void sumArray(int (*firstArray)[ARRAY_DIMENSIONALS], int (*secondArray)[ARRAY_DIMENSIONALS], int (*sumArray)[ARRAY_DIMENSIONALS]);
void printArray(int (*array)[ARRAY_DIMENSIONALS]);

int main() {
    
    int firstArray[ARRAY_DIMENSIONALS][ARRAY_DIMENSIONALS] = {0};
    int secondArray[ARRAY_DIMENSIONALS][ARRAY_DIMENSIONALS] = {0};
    int sumOfArray[ARRAY_DIMENSIONALS][ARRAY_DIMENSIONALS] = {0};
    
    printArray(firstArray);
    fillArray(firstArray);
    printArray(firstArray);
    printf("\n");
    printArray(secondArray);
    fillArray(secondArray);
    printArray(secondArray);
    printf("\n");
    printArray(sumOfArray);
    sumArray(firstArray, secondArray, sumOfArray);
    printArray(sumOfArray);
    
}

void printArray(int (*array)[ARRAY_DIMENSIONALS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONALS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONALS; j++)
        {
           printf("%d\t", *(*(array+i)+j));
        }
        printf("\n");
    }
    
}

void fillArray(int (*array)[ARRAY_DIMENSIONALS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONALS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONALS; j++)
        {
            *(*(array+i)+j) = rand() % 11u;
        }
    }
}

void sumArray(int (*firstArray)[ARRAY_DIMENSIONALS], int (*secondArray)[ARRAY_DIMENSIONALS], int (*sum)[ARRAY_DIMENSIONALS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONALS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONALS; j++)
        {
            *(*(sum+i)+j) = *(*(firstArray+i)+j) + *(*(secondArray+i)+j);
        }
    }
}
