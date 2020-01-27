//
//  main.c
//  Data structures using C - Arrays - Programming Exercise 13
//
//  Write a program using pointers to interchange the second biggest and the second smallest number in the array.
//
//  Created by Stephen Allison on 21/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE (10U)
#define MAX_ELEMENT_SIZE (51U)

void fillArray(int *array);
void printArray(int *array);
void interchange2ndSmallBig(int *array);

int main() {
    
    int array[ARRAY_SIZE] = {0};
    
    fillArray(array);
    
    printArray(array);
    
    interchange2ndSmallBig(array);
    
    printArray(array);
}

void fillArray(int *array)
{
    
    for(uint8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        *(array+i) = rand( ) % MAX_ELEMENT_SIZE;
    }
}

void printArray(int *array)
{
    for(uint8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t", *(array+i));
    }
    printf("\n");
}

void interchange2ndSmallBig(int *array)
{
    int secondBiggest = 0;
    int secondBiggestLocation = 0;
    int biggestElement = 0;
    int biggestLocation = 0;
    
    int smallestElement = MAX_ELEMENT_SIZE;
    int secondSmallest = MAX_ELEMENT_SIZE;
    int smallestLocation = 0;
    int secondSmallestLocation = MAX_ELEMENT_SIZE;
    
    
    for (uint8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        if( *(array+i) > biggestElement)
        {
            biggestElement = *(array+i);
            biggestLocation = i;
        }
   
        if (*(array+i) < smallestElement)
        {
            smallestElement = *(array+i);
            smallestLocation = i;
        }
    }
    
    for (uint8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        if (i != biggestLocation)
        {
            if( *(array+i) > secondBiggest)
            {
                secondBiggest = *(array+i);
                secondBiggestLocation = i;
            }
        }

        if (i != smallestLocation)
        {
            if (*(array+i) < secondSmallest)
            {
                secondSmallest = *(array+i);
                secondSmallestLocation = i;
            }
        }

    }
    
    *(array+secondSmallestLocation) = secondBiggest;
    *(array+secondBiggestLocation) = secondSmallest;
}
