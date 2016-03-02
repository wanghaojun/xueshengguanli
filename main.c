#include <stdio.h>
#include <stdlib.h>
#include"headers.h"

int main()
{
    int i,studentnumber,scorenumber;
    STU student[30];
    Userinterface();

    while (scanf("%d",&i),i)

    {

        switch (i)
        {
        case 1:
            Inputrecord(student,&studentnumber,&scorenumber);
            break;
        case 2:
            averagecourse(student,&studentnumber,&scorenumber);
            break;
        case 3:
            averagestudent(student,&studentnumber,&scorenumber);
            break;
        case 4:
            Frombigtosmall(student,&studentnumber,&scorenumber);
            Printf(student,&studentnumber,&scorenumber);
            break;
        case 5:
            Fromsmalltobig(student,&studentnumber,&scorenumber);
            Printf(student,&studentnumber,&scorenumber);
            break;
        case 6:
            anxuehao(student,&studentnumber,&scorenumber);
            Printf(student,&studentnumber,&scorenumber);
            break;
        case 7:
            anzidian(student,&studentnumber,&scorenumber);
            Printf(student,&studentnumber,&scorenumber);
            break;
        case 8:
            xuehaochaxun(student,&studentnumber,&scorenumber);
            break;
        case 9:
            xingmingchaxun(student,&studentnumber,&scorenumber);
            break;
        case 10:
            fenlei(student,&studentnumber,&scorenumber);
            break;
        case 11:
            Printf(student,&studentnumber,&scorenumber);
            break;
        case 12:
            writetofile(student,&studentnumber,&scorenumber);
            break;
        case 13:
            readfromfile(student,&studentnumber,&scorenumber);
            break;
        case 0:
            break;
        }


    }
    return 0;
}
