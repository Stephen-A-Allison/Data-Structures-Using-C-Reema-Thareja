//
//  main.c
//  Data Structures Using c - Strings - Programming Exercise 9
//
//  Write a program to count the total number of occurrences of a word in the text.
//
//  Created by Stephen Allison on 04/05/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int wordOccurrancesInText(char *text, char *word);

int main() {
    char findWord[] = "THE";
    char testString[] = "THE QUICK BROWN FOX JUMPED OVER THE LAZY DOG'S BACK the 1234567890.\n";
    puts(testString);
    
    uint wordCount = wordOccurrancesInText(testString, findWord);
    
    printf("the total number of occurrances of the word %s within the string is %d.\n", findWord, wordCount);
}

int wordOccurrancesInText(char *text, char *word)
{
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

    return returnCount;
}
