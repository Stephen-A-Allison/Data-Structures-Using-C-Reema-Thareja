//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 11
//
//  Write a program to input an array of strings. Then, reverse the string in the format shown below.
//  "HAPPY BIRTHDAY TO YOU" should be displayed as "YOU TO BIRTHDAY HAPPY"
//
//  Created by Stephen Allison on 20/05/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define ROWS 4U
#define STRING_LENGTH 10U

void reverseString(char arrayString[ROWS][STRING_LENGTH]);

int main() {
    

    char arrayString[ROWS][STRING_LENGTH] = {0};
    
    for (uint8_t i = 0u; i < ROWS; i++)
    {
        printf("Please enter word %d of the string\n",(i+1));
        gets(arrayString[i]);
    }
    
    reverseString(arrayString);
    
    printf("The reveser of the string is %s %s %s %s.\n", arrayString[0], arrayString[1], arrayString[2], arrayString[3]);

    
}

void reverseString(char arrayString[ROWS][STRING_LENGTH])
{
    char buffer[10] = "";
    
    for (uint8_t i = 0u; i < (ROWS/2); i++)
    {
        memcpy(buffer, arrayString[i], sizeof(buffer));
        memcpy(arrayString[i], arrayString[3 - i], sizeof(arrayString[i]));
        memcpy(arrayString[3 - i], buffer, sizeof(buffer));
    }
    
}
