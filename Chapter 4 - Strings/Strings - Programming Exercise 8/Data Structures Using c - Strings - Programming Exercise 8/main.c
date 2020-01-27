//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 8
//
//  Write a program to accept a text. Count and display the number of times the word. 'the' appears in the text.
//
//  Created by Stephen Allison on 30/04/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int occurranceCount(char *string, char *outputString);

int main( ) {
    
    char outputString[100] = "";
    char testString[] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG'S BACK the 1234567890.\n";
    puts(testString);
    
    int occurranceTHE = occurranceCount(testString, outputString);
    printf("the total number of occurrances of the word 'THE' within the string is %d.\n", occurranceTHE);
    puts(outputString);
    
}

int occurranceCount(char *string, char *outputString)
{
    int Count = 0;
    int i = 0u;
    int j = 0u;
    
    do {
        
        if ( ((string[i] == 'T') && (string[i+1] == 'H') && (string[i+2] == 'E')) | ((string[i] == 't') && (string[i+1] == 'h') && (string[i+2] == 'e')) )
        {
            if ( ((i == 0)&(string[i+3] == ' ')) || ((string[i-1] == ' ')&(string[i+3] == ' ')) )
            {
                Count++;
                for (j = i; string[j] != ' '; j++)
                {
                    outputString[j] = string[j];
                }
            }
        }
        outputString[j++] = ' ';
        i++;
    } while (string[i] != '\0');
    
    return Count;
}
