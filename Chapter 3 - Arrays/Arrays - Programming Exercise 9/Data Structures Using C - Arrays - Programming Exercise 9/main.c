//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercise 9
//
//  Write a program that computes the product of the elements
//  that are stored on the diagonal above the main diagonal.
//
//  Created by Stephen Allison on 12/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ELEMENT_SIZE (11U)
#define ARRAY_DIMENSIONALS (5U)

void fillArray(int (*array)[ARRAY_DIMENSIONALS]);
void printArray(int (*array)[ARRAY_DIMENSIONALS]);
int diagonalProduct(int (*array)[ARRAY_DIMENSIONALS]);

int main() {
    
    int array[ARRAY_DIMENSIONALS][ARRAY_DIMENSIONALS] = {0};
    
    printArray(array);
    fillArray(array);
    printArray(array);
    printf("\n");
    printf("the product of the diagonal above the main diagonal is %d\n", diagonalProduct(array));

}

void fillArray(int (*array)[ARRAY_DIMENSIONALS])
{
    for(int8_t i = 0u; i < ARRAY_DIMENSIONALS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONALS; j++)
        {
            *(*(array+i)+j) = (int)(1.0 + 10.0 * rand() / RAND_MAX);
        }
    }
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

int diagonalProduct(int (*array)[ARRAY_DIMENSIONALS])
{
    int product = 1;
    
    for(int8_t i = 0u; i < ARRAY_DIMENSIONALS; i++)
    {
        for(int8_t j = 0u; j < ARRAY_DIMENSIONALS; j++)
        {
            if( (i == j)&&(i != 0) )
            {
                product *= *(*(array+i-1)+j);
            }
        }
    }
    return product;
}
