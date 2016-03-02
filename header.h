#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>

typedef struct date
{
    int year;
    int mouth;
    int day;
}DATE;
typedef struct student
{
    char studentID[10];
    char studentName[20];
    char studentSex;
    int score[6];
    DATE birthday;
    float aver;
}STUDENT;
void User interface;
{
    printf("1.Input record");

}












#endif // HEADER_H_INCLUDED
