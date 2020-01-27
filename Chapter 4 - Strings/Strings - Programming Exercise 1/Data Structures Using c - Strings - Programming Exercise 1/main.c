//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 1
//
//  Write a program in which a string is passed as an argument to a function.

//  Created by Stephen Allison on 20/03/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>

void printString(char *string);

int main() {
    
    char firstString[] = "Hello World!";
    char secondString[] = "Goodbye World!";
    
    printString(firstString);
    printString(secondString);
    
    return 0;
}

void printString(char *string)

{
    puts(string);
}
