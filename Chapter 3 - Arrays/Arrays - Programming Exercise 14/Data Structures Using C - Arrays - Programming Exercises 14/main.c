//
//  main.c
//  Data Structures Using C - Arrays - Programming Exercises 14
//
//  Write a menu driven program to read and display a pxqxr matrix. Also,
//  find the sum, transpose, and product of the two pxqxr matrices.
//
//  Created by Stephen Allison on 29/01/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>

#define DIMENSIONS (3U)

void matrixRead(int array[DIMENSIONS][DIMENSIONS][DIMENSIONS]);

void matrixDisplay(int array[DIMENSIONS][DIMENSIONS][DIMENSIONS]);

void matrixSum(int firstArray[DIMENSIONS][DIMENSIONS][DIMENSIONS], int secondArray[DIMENSIONS][DIMENSIONS][DIMENSIONS], int sumArray[DIMENSIONS][DIMENSIONS][DIMENSIONS]);

void matrixTranspose(int (*Array)[][DIMENSIONS][DIMENSIONS]);
void matrixProduct(int (*firstArray)[][DIMENSIONS][DIMENSIONS], int (*secondArray)[][DIMENSIONS][DIMENSIONS], int (*productArray)[][DIMENSIONS][DIMENSIONS]);

int main() {

    uint option;
    
    int firstArray[DIMENSIONS][DIMENSIONS][DIMENSIONS] = {0};
    int secondArray[DIMENSIONS][DIMENSIONS][DIMENSIONS] = {0};
    int sumArray[DIMENSIONS][DIMENSIONS][DIMENSIONS] = {0};
    
    printf("This is a menu driven program Please select for the following options.\n");
    printf("Select 1 to read in matrix A.\n");
    printf("Selcet 2 to read in matrix B.\n");
    printf("Select 3 to Display matrix.\n");
    printf("Select 4 to sum  matrices A + B\n");
    printf("Select 0 to end the program.\n");
    
    do{
        int dm;
        printf("Please enter an selection\n");
        
        scanf("%u", &option);
        
        switch (option)
        {
            case 1:
                printf("Please enter the elements values for matrix A\n");
                matrixRead(firstArray);
                break;
                
            case 2:
                printf("Please enter the elements values fot matrix B\n");
                matrixRead(secondArray);
                break;
                
            case 3:
                printf("Which matrix would you like to display\n");
                
                printf("Select A to display matrix A.\n");
                
                printf("Select B to display matrix B.\n");
                
                dm = getchar();
                
                if( dm == 'A' || dm == 'a' )
                {
                    printf("Matrix A\n");
                    matrixDisplay(firstArray);
                }
                if(dm == 'B' || dm == 'b')
                {
                    printf("Matrix B\n");
                    matrixDisplay(secondArray);
                }
                break;
                
            case 0:
                printf("The menu driven program will now terminate.\n");
                break;
                
            default:
                printf("Please re-enter another option, the selection you entered is invalid.\n");
                break;
        }
        
    }while(option != 0);
    
    
    //matrixRead(firstArray);
    //matrixRead(secondArray);
    
    //matrixDisplay(sumArray);
    //matrixSum(firstArray, secondArray, sumArray);
    //matrixDisplay(sumArray);
    

}

void matrixRead(int array[DIMENSIONS][DIMENSIONS][DIMENSIONS])
{
    int element = 0u;
    
    for (uint8_t i = 0u; i < DIMENSIONS; i++)
    {
        for (uint8_t j = 0u; j < DIMENSIONS; j++)
        {
            for (uint8_t k = 0u; k < DIMENSIONS; k++)
            {
                printf("Please enter element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &element);
                //printf("\n");
                *(*(*(array+i)+j)+k) = element;
            }
        }
    }
}

void matrixDisplay(int array[DIMENSIONS][DIMENSIONS][DIMENSIONS])
{
    for (uint8_t i = 0u; i < DIMENSIONS; i++)
    {
        for (uint8_t j = 0u; j < DIMENSIONS; j++)
        {
            for (uint8_t k = 0u; k < DIMENSIONS; k++)
            {
                printf("%d\t", *(*(*(array+i)+j)+k));
            }
        }
        printf("\n");
    }
}

void matrixSum(int firstArray[DIMENSIONS][DIMENSIONS][DIMENSIONS], int secondArray[DIMENSIONS][DIMENSIONS][DIMENSIONS], int sumArray[DIMENSIONS][DIMENSIONS][DIMENSIONS])
{
    for (uint8_t i = 0u; i < DIMENSIONS; i++)
    {
        for (uint8_t j = 0u; j < DIMENSIONS; j++)
        {
            for (uint8_t k = 0u; k < DIMENSIONS; k++)
            {
                *(*(*(sumArray+i)+j)+k) = *(*(*(firstArray+i)+j)+k) + *(*(*(secondArray+i)+j)+k);
            }
        }
    }
}
