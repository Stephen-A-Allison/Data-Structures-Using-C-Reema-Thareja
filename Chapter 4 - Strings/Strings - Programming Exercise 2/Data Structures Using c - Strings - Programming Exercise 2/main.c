//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 2
//
//  Write a program in C to concatenate first n characters of a string with another string.
//
//  Created by Stephen Allison on 20/03/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>

void concatenate(char *firstString, int firstLength, char *secondString, char *outputString);

int main() {

    char firstString[] = "Hello World!";
    char secondString[] = "Goodbye World!";
    char outputString[100] = " ";
    int  firstLength = 7;
    
    concatenate(firstString, firstLength, secondString, outputString);
    
    puts(outputString);
    
    return 0;
}

void concatenate(char *firstString, int firstLength, char *secondString, char *outputString)
{
    uint8_t i = 0u;
    uint8_t j = 0u;
    
    char subString[10];
    
    for (i = 0u; i < firstLength; i++)
    {
        subString[i] = firstString[i];
    }
    subString[i+1] = '\0';
    
    i = 0;
    while (subString[i] != '\0')
    {
        outputString[i] = subString[i];
        
        i++;
    }
    
    while (secondString[j] != '\0')
    {
        outputString[i-1] = secondString[j];
        
        i++;
        j++;
    }
    
}
