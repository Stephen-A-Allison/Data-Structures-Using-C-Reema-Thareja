//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 12
//
//  Write a program to read two floating point numbers arrays.
//  Merge the two arrays and display the resultant array in reverse order.
//
//  Created by Stephen Allison on 15/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE (5U)

void fillArray(float array[]);
void printArray(float array[], int arraySize);
void mergeArrays(float firstArray[], float secondArray[], float mergeArray[]);
void reverseArray(float array[], int arraySize);

int main() {
    
    float firstArray[ARRAY_SIZE] = {0};
    float secondArray[ARRAY_SIZE] = {0};
    float mergedArray[ARRAY_SIZE + ARRAY_SIZE] = {0};
    
    fillArray(firstArray);
    printf("First Array\n");
    printArray(firstArray, ARRAY_SIZE);
    printf("\n");
    fillArray(secondArray);
    printf("Second Array\n");
    printArray(secondArray, ARRAY_SIZE);
    printf("\n");
    
    printf("Merged Array(empty)\n");
    mergeArrays(firstArray, secondArray, mergedArray);
    printArray(mergedArray, ARRAY_SIZE + ARRAY_SIZE);
    
    reverseArray(mergedArray, ARRAY_SIZE + ARRAY_SIZE);
    printArray(mergedArray, ARRAY_SIZE + ARRAY_SIZE);
    
}

void fillArray(float array[ARRAY_SIZE])
{
    srand((unsigned int)time(NULL));
    
    for(uint8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        array[i] = ( (float)rand( ) / (float)RAND_MAX ) * 5.0;
    }
}

void printArray(float array[], int arraySize)
{
    for(uint8_t i = 0u; i < arraySize; i++)
    {
        printf("%f\t", array[i]);
    }
    printf("\n");
}

void mergeArrays(float firstArray[ARRAY_SIZE], float secondArray[ARRAY_SIZE], float mergeArray[ARRAY_SIZE + ARRAY_SIZE])
{
    uint8_t i = 0u;
    uint8_t index = 0u;
    
    for(i = 0u; i < ARRAY_SIZE; i++)
    {
        mergeArray[index] = firstArray[i];
        index++;
    }
    
    for(i = 0u; i < ARRAY_SIZE; i++)
    {
        mergeArray[index] = secondArray[i];
        index++;
    }
}

void reverseArray(float array[], int arraySize)
{
    float buffer = 0.0f;
    
    for(uint8_t i = 0u; i < arraySize/2; i++)
    {
        buffer = array[i];
        
        array[i] = array[arraySize-1-i];
        array[arraySize-1-i] =buffer;
    }
    
}

