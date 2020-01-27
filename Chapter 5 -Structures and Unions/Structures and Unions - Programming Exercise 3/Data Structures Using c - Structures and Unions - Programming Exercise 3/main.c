//
//  main.c
//  Data Structures Using c - Structures and Unions - Programming Exercise 3
//
//  Moddify Question 2 to print each student's average marks and the class average (that includes averages of all the student's marks)
//
//  Created by Stephen Allison on 26/06/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STUDENT_COUNT 5U

typedef struct
{
    char firstName[20];
    char middleName[20];
    char lastName[20];
    
}Name;

typedef struct
{
    char English;
    char Mathematics;
    char ComputerScience;
    
}Marks;

typedef struct
{
    uint8_t Day;
    uint8_t Month;
    uint8_t Year;
}DOB;

typedef struct
{
    char student[10];
    uint8_t Roll_Number;
    Name name;
    char Sex;
    DOB Date_of_Birth;
    Marks grades;
    uint8_t marks[3];
    
}student[STUDENT_COUNT];

int main(int argc, const char * argv[]) {
    
    
    student pupils = {0};
    float sum_average = 0.0f;
    
    for(uint8_t i = 0u; i < STUDENT_COUNT; i++)
    {
        printf("\nPlease enter the first name of the student %d...", i+1);
        scanf("%s", pupils[i].name.firstName);
        printf("\nPlease enter the middle name of the student %d...", i+1);
        scanf("%s", pupils[i].name.middleName);
        printf("\nPlease enter the last name of the student %d...", i+1);
        scanf("%s" ,pupils[i].name.lastName);
        
        pupils[i].marks[0] = rand() % 100u;
        pupils[i].marks[1] = rand() % 100u;
        pupils[i].marks[2] = rand() % 100u;
        
        
    }
    
    for(uint8_t i = 0u; i < STUDENT_COUNT; i++)
    {
        float average = (pupils[i].marks[0] + pupils[i].marks[1] + pupils[i].marks[2])/3;
        printf("\nStudent %s %s %s scored %f\n", pupils[i].name.firstName, pupils[i].name.middleName, pupils[i].name.lastName, average);
        sum_average += average;
    }
    
    printf("The class average is %f\n", sum_average/STUDENT_COUNT);
    
    
    return 0;
}

