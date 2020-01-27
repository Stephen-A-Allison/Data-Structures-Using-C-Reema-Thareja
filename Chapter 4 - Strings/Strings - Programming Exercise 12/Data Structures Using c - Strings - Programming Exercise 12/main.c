//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 12
//
//  Write a program to append a given string in the following format.
//
//  Created by Stephen Allison on 24/05/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char * appendString(char *string, uint stringLength);

int main()
{
    char string[10] = "";
    printf("Please enter the string you wish to append\n");
    gets(string);
    uint stringLength = (uint)strlen(string);
    
    printf("The appended string is now %s", appendString(string, stringLength));

    return 0;
}

char * appendString(char *string, uint stringLength)
{
    //int appendSize = stringLength*2 +2;
    static char appendedString[30];
    int k = 0u;
    
    for (uint8_t i = 0u; i < 2; i++)
    {
        int j = 0u;
        do {
            appendedString[k] = string[j];
            j++;
            k++;
        } while (string[j] != '\0');
        appendedString[k++] = ' ';
    }
    
    return appendedString;
}
