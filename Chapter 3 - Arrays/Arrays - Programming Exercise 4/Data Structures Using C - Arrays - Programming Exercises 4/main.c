//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercises 4
//
//  Write a program that calculates the sum of squares of the elements
//
//  Created by Stephen Allison on 08/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE (10U)

void fillArray(int array[]);
void squaresOfElements(int array[]);
uint sumOfElements(int array[]);


int main() {
    
    int array[ARRAY_SIZE] = {0};
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    
    fillArray(array);
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    
    squaresOfElements(array);
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    
    printf("%d\n",sumOfElements(array));
}

void fillArray(int array[ARRAY_SIZE])
{
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        array[i] = rand() % 11;
    }
}

void squaresOfElements(int array[ARRAY_SIZE])
{
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        array[i] = (int)pow(array[i], 2);
    }
}

uint sumOfElements(int array[ARRAY_SIZE])
{
    uint sum = 0u;
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        sum += array[i];
    }
    
    return sum;
}


