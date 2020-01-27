//
//  main.c
//  Data Structures Using C - strings - Programming Exercise 4
//
//  Write a program in C that removes leading and trailing spaces from a string.
//
//  Created by Stephen Allison on 27/03/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void removeLeadingSpaces(char *string);
void removeTrailingSpaces(char *string);

int main(int argc, const char * argv[])
{
    char testString[] = "this string is an example  \nfor removing leading spaces   \nhelloworld!";
    printf("string Length: %lu.\n", strlen(testString));
    puts(testString);
    removeTrailingSpaces(testString);
//    removeLeadingSpaces(testString);
    puts(testString);
    printf("string Length: %lu.\n", strlen(testString));
    removeTrailingSpaces(testString);
    return 0;
}

void removeTrailingSpaces(char *string)
{
    int count = 0;
    int spaceCount = 0u;
    
    do {
        if (string[count] == '\n')
        {
            if (string[count - 1] == ' ') {
                
                int i = count;
                do {
                    spaceCount++;
                    i--;
                    printf("spaceCount: %d\n", spaceCount);
                } while (string[i -1] == ' ');
                
                for (uint8_t j = (count - spaceCount); j <= (strlen(string)+1); j++)
                {
                    string[j] = string[j + spaceCount];
                }
                spaceCount = 0;
            }
        }
        count++;
    } while (string[count] != '\0');
}

void removeLeadingSpaces(char *string)
{
    int count = 0;
    int spaceCount = 0;
    do {
        
        if (string[count] == '\n')
        {
            if (string[count + 1]== ' ')
            {
                int i = count;
                do {
                    spaceCount++;
                    i++;
                } while (string[i + 1] == ' ');
                
                for (uint8_t j = (count + 1); j <= (strlen(string)+1); j++)
                {
                    string[j] = string[j + spaceCount];
                }
                spaceCount = 0;
            }
        }
        count++;
    } while (string[count] != '\0');
}
