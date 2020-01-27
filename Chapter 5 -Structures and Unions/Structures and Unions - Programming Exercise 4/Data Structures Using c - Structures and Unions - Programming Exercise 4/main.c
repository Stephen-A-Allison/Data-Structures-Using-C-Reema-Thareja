//
//  main.c
//  Data Structures Using c - Structures and Unions - Programming Exercise 4
//
//  Make an array of students as illustrated in Question 1 and write a program to display the
//  details of student with the given Date of Birth
//
//  Created by Stephen Allison on 17/07/2019.
//  Copyright © 2019 Stephen Allison. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT (uint8_t)2u

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
    uint16_t Year;
}DOB;

typedef struct
{
    char student[10];
    uint8_t Roll_Number;
    Name name;
    char Sex;
    DOB Date_of_Birth;
    Marks grades;
    
}student[STUDENT_COUNT];

int main(int argc, const char * argv[]) {

    student pupils = {0};
    
    pupils[0].Roll_Number = 1u;
    memcpy(pupils[0].name.firstName, "Stephen", sizeof(pupils[0].name.firstName));
    memcpy(pupils[0].name.middleName, "Anthony", sizeof(pupils[0].name.middleName));
    memcpy(pupils[0].name.lastName, "Allison", sizeof(pupils[0].name.lastName));
    pupils[0].Sex = 'M';
    pupils[0].Date_of_Birth.Day = 27u;
    pupils[0].Date_of_Birth.Month = 01u;
    pupils[0].Date_of_Birth.Year = 1989u;
    pupils[0].grades.ComputerScience = 'A';
    pupils[0].grades.Mathematics = 'B';
    pupils[0].grades.English = 'C';
    
    printf("pupils[0].name.firstName: %s\n", pupils[0].name.firstName);
    
    return 0;
}
