//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 6
//
//  Write a program to count the number of digits, upper case characters, lower case characters, and special characters in a given string.
//
//  Created by Stephen Allison on 12/04/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void charCountInString(char *string);

int main()
{
    char testString[] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG'S BACK 1234567890.";
    puts(testString);
    charCountInString(testString);
    return 0;
}

void charCountInString(char *string)
{
    int i = 0u;
    int digitCount = 0u;
    int upperCount = 0u;
    int lowerCount = 0u;
    int specialCount = 0u;
    
    do {
        if ( (string[i] >= 48) & (string[i] <= 57))
        {
            digitCount++;
        }
        else if ( (string[i] >= 65) & (string[i] <= 90))
        {
            upperCount++;
        }
        else if ((string[i] >= 97) & (string[i] <= 122))
        {
            lowerCount++;
        }else
            specialCount++;
        i++;
    } while (string[i] != '\0');
    printf("The number of digits within the string is %d.\n", digitCount);
    printf("The number of upper case characters within the string is %d.\n", upperCount);
    printf("The number of lower case characters within the string is %d.\n", lowerCount);
    printf("The number of special characters within the string is %d.\n", specialCount);
}
