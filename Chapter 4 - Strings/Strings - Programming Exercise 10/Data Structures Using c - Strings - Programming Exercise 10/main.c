//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 10
//
//  Write a program to find the last instance of occurrance of a sub-string within a string.
//
//  Created by Stephen Allison on 11/05/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int lastWordOccurrancesInText(char *text, char *word);

int main() {

    char findWord[] = "the";
    char testString[] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG'S BACK the 1234567890.\n";
    puts(testString);

    uint lastOccurrance = lastWordOccurrancesInText(testString, findWord);
    
    printf("the last instance of occurrances for the word \"%s\", begins at element %d within the string.\n", findWord, lastOccurrance);
}

int lastWordOccurrancesInText(char *text, char *word)
{
    uint8_t lastOccurranceCount = 0u;
    uint returnCount = 0u;
    uint8_t i = 0u;
    uint8_t k = 0u;
    unsigned long int wordLength = strlen(word);
    unsigned long int textLength = strlen(text);
    
    if(wordLength < textLength)
    {
        do{
            if (word[0] == text[i])
            {
                for (uint8_t j = 0u; j <= wordLength; j++)
                {
                    if (word[j] == text[i + j])
                    {
                        k++;
                        if (k == wordLength)
                        {
                            returnCount++;
                            lastOccurranceCount = i;
                            
                        }
                    }else
                    {
                        k = 0u;
                        break;
                    }
                }
            }
            
            i++;
        }while(text[i] != '\0');
    }
    
    return lastOccurranceCount;
}
