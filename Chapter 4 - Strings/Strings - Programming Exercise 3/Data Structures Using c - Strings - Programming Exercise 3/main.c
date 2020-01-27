//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 3
//
//  Write a program in C that compares first n characters of one string with first n characters of another string.
//
//  Created by Stephen Allison on 25/03/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void compareStringChar(char *firstString, char* secondString, uint8_t stringLength);

int main() {

    char firstString[] = "hello world!";
    char secondString[] = "hello wogld!";
    
    uint8_t stringLength = strlen(firstString);
    
    compareStringChar(firstString, secondString,stringLength);
    
    
    
    return 0;
}

void compareStringChar(char *firstString, char* secondString, uint8_t stringLength)
{
    for ( int i = 0u; i < stringLength; i++)
    {
        if (firstString[i] == secondString[i])
        {
            printf("the %d character in firstString (%c) and secondString (%c) are a match\n", stringLength, firstString[i], secondString[i]);
        }
        else
        {
           printf("the %d character in firstString (%c) and secondString (%c) do not match\n", stringLength, firstString[i], secondString[i]);
        }
    }
}
