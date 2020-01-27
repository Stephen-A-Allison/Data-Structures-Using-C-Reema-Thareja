//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 7
//
//  Write a program to count the total number of occurrances of a given character in the string.
//
//  Created by Stephen Allison on 30/04/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int occurranceCount(char *string, char character);

int main( ) {

    char testString[] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG'S BACK 1234567890.";
    puts(testString);
    
    printf("Please enter the character you are searching for from within the string?\n");
    char findChar = getchar();
    
    printf("the total number of occurrances of %c is %d.\n", findChar, occurranceCount(testString, findChar));
    
    
}

int occurranceCount(char *string, char character)
{
    int occurranceCount = 0;
    int i = 0u;
    
    do{
        
        if (string[i] == character)
        {
            occurranceCount++;
        }
        
        i++;
        
    }while(string[i] != '\0');
    
    
    return occurranceCount;
}
