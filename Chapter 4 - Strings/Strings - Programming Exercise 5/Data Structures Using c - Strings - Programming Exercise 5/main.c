//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 5
//
// Write a program in C that Replaces a given character with another character in a string.
//
//  Created by Stephen Allison on 12/04/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void replaceCharInString(char *string, char removeChar, char replaceChar);

int main() {

    char testString[] = "The quick brown fox jumps over the lazy dog\n";
    puts(testString);
    replaceCharInString(testString, 'o', '5');
    puts(testString);
    
    
    return 0;
}

void replaceCharInString(char *string, char removeChar, char replaceChar)
{
    int i = 0u;
    do {
        if (string[i] == removeChar)
        {
            string[i] = replaceChar;
        }
        i++;
    } while (string[i] != '\0' );
}
