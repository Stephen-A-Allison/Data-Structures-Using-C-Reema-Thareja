//
//  main.c
//  Data Structures Using c - Arrays - Programming Exercise 3
//
//  Write a program to interchange the second element with the second last element.
//
//  Created by Stephen Allison on 08/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE (10u)

void fillArray(int array[]);
void swapSecondAndSecondFromLastElements(int array[]);


int main() {

    int array[ARRAY_SIZE] = {0};
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
    fillArray(array);
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
    swapSecondAndSecondFromLastElements(array);
    
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        printf("%d\t", array[i]);
    }
}

void fillArray(int array[ARRAY_SIZE])
{
    for(int8_t i = 0u; i < ARRAY_SIZE; i++)
    {
        array[i] = rand() % 51u;
    }
}

void swapSecondAndSecondFromLastElements(int array[ARRAY_SIZE])
{
    int secondElement;
    int secondFromLastElement;
    
    secondElement = array[1];
    secondFromLastElement = array[ARRAY_SIZE - 2u];
    
    array[1] = secondFromLastElement;
    array[ARRAY_SIZE - 2u] = secondElement;
}
