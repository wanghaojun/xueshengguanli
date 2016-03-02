#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include<string.h>



typedef struct student
{
    long ID;
    char Name[20];
    float score[6];
    float aver,sum;
} STU;
//结构体的定义




void Userinterface();
void Inputrecord(STU *student,int *studentnumber,int *scorenumber);
void averagecourse(STU *student,int *studentnumber,int *scorenumber);
void averagestudent(STU *student,int *studentnumber,int *scorenumber);
void Frombigtosmall(STU *student,int *studentnumber,int *subjectnumber);
void Fromsmalltobig(STU *student,int *studentnumber,int *subjectnumber);
void anxuehao(STU *student,int *studentnumber,int *scorenumber);
void anzidian(STU *student,int *studentnumber,int *scorenumber);
void xuehaochaxun(STU *student,int *studentnumber,int *scorenumber);
void xingmingchaxun(STU *student,int *studentnumber,int *scorenumber);
void fenlei(STU *student,int *studentnumber,int *scorenumber);
void Printf(STU *student,int *studentnumber,int *subjectnumber);
void writetofile(STU *student,int *studentnumber,int *subjectnumber);
void readfromfile(STU *student,int *studentnumber,int *subjectnumber);
void returnUserFace()
{
    system("pause");
    system("cls");
    Userinterface();
}//返回函数
//函数声明部分

void Userinterface()
{
    printf("1.Input record\n");
    printf("2.Caculate total and average score of every course\n");
    printf("3.Caculate total and average score of every student\n");
    printf("4.Sort in descending order by total score of every student\n");
    printf("5.Sort in ascending order by total score of every student\n");
    printf("6.Sort in ascending order by number\n");
    printf("7.Sort in dictionary order by name\n");
    printf("8.Search by number\n");
    printf("9.Search by name\n");
    printf("10.Statistic analysis for every course\n");
    printf("11.List record\n");
    printf("12.Write to file\n");
    printf("13.Read form a file\n");
    printf("0.Exit\n");
    printf("Please enter your choice:");

}//用户界面函数

void Inputrecord(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int a,b;
    printf("Please input student number:\n");
    scanf("%d",studentnumber);
    printf("Please input score number:\n");
    scanf("%d",scorenumber);
    for (a=0; a<*studentnumber; a++)
    {
        printf("Please input student's ID,name and score:\n");
        scanf("%ld%s",&student[a].ID,student[a].Name);
        for (b=0; b<*scorenumber; b++)
        {
            scanf("%f",&student[a].score[b]);
        }
    }
    system("cls");
    returnUserFace();
}//输入函数
void averagecourse(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int i,j;
    double  aver,sum=0;
    for (i=0; i<*scorenumber; i++)
    {
        sum=0;
        for (j=0; j<*studentnumber; j++)
        {
            sum=student[j].score[i]+sum;
        }
        aver=sum/((*studentnumber)*1.0);
        printf("The sum score of subject%d:%.2lf",i+1,sum);
        printf("  The average score of subject%d:%.2lf\n",i+1,aver);
    }

    returnUserFace();
}//计算课程的总分和平均分
void averagestudent(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int i,j;
    double  aver;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*scorenumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
        aver=student[j].sum/((*scorenumber)*1.0);
        printf("The sum score of %s:%.2f",student[j].Name,student[j].sum);
        printf("  The average score of %s:%.2lf\n",student[j].Name,aver);
    }

    returnUserFace();
}//计算学生的总分和平均分

void Frombigtosmall(STU *student,int *studentnumber,int *subjectnumber)
{
    STU t;
    int i,j;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*subjectnumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    for (i=0; i<*studentnumber; i++)
    {
        for (j=i; j<*studentnumber; j++)
        {
            if (student[j].sum<student[i].sum)
            {
                t=student[j];
                student[j]=student[i];
                student[i]=t;
            }
        }
    }
}//按总分从小到大
void Fromsmalltobig(STU *student,int *studentnumber,int *subjectnumber)
{
    STU t;
    int i,j;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*subjectnumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    for (i=0; i<*studentnumber; i++)
    {
        for (j=i; j<*studentnumber; j++)
        {
            if (student[j].sum>student[i].sum)
            {
                t=student[i];
                student[i]=student[j];
                student[j]=t;
            }
        }
    }
}//按总分从小到大
void anxuehao(STU *student,int *studentnumber,int *scorenumber)
{
    STU t;
    int i,j;
    for (i=0; i<*studentnumber; i++)
    {
        for (j=i; j<*studentnumber; j++)
        {
            if (student[i].ID>student[j].ID)
            {
                t=student[i];
                student[i]=student[j];
                student[j]=t;
            }
        }
    }
}
void anzidian(STU *student,int *studentnumber,int *scorenumber)
{
    int i,j;
    STU t;
    for (i=0; i<*studentnumber; i++)
    {
        for (j=i+1; j<*studentnumber; j++)
        {
            if (strcmp(student[i].Name,student[j].Name)>0)
            {
                t=student[i];
                student[i]=student[j];
                student[j]=t;
            }
        }
    }
}
void xuehaochaxun(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int i,j;
    long a;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*scorenumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    printf("请输入需要查询的学号 结束时请输入0");

    while (scanf("%ld",&a),a!=0)
    {
        for (i=0; i<*studentnumber; i++)
        {
            if (a==student[i].ID)
            {
                printf("%ld %s ",student[i].ID,student[i].Name);
                for (j=0; j<*scorenumber; j++)
                {
                    printf("%.2f ",student[i].score[j]);
                }
                printf("%.2f",student[i].sum);
                break;
            }
        }
        if (i==*studentnumber)
        {
            printf("没有找到您需要的信息\n");
        }

    }
    returnUserFace();
}//学号查找
void xingmingchaxun(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int i,j;
    char n[20];
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*scorenumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    printf("请输入需要查询的名字\n");
    getchar();
    gets(n);

    for (i=0; i<*studentnumber; i++)
    {
        if (strcmp(n,student[i].Name)==0)
        {
            printf("%ld %-20s ",student[i].ID,student[i].Name);
            for (j=0; j<*scorenumber; j++)
            {
                printf("%8.2f ",student[i].score[j]);
            }
            printf("%8.2f",student[i].sum);
            break;
        }
    }
    if (i==*studentnumber)
    {
        printf("没有找到您需要的信息\n");
    }
    getchar();
    returnUserFace();
}//姓名查找
void fenlei(STU *student,int *studentnumber,int *scorenumber)
{
    system("cls");
    int a1,a2,a3,a4,a5;
    int i,j;
    float b1,b2,b3,b4,b5;
    for (j=0; j<*scorenumber; j++)
    {
        a1=0;
        a2=0;
        a3=0;
        a4=0;
        a5=0;
        for (i=0; i<*studentnumber; i++)
        {
            if (student[i].score[j]>=90)
                a1++;
            else if (student[i].score[j]>=80)
                a2++;
            else if (student[i].score[j]>=70)
                a3++;
            else if (student[i].score[j]>=60)
                a4++;
            else
                a5++;
        }
        b1=(a1*1.0)/(*studentnumber*1.0);
        b2=(a2*1.0)/(*studentnumber*1.0);
        b3=(a3*1.0)/(*studentnumber*1.0);
        b4=(a4*1.0)/(*studentnumber*1.0);
        b5=(a5*1.0)/(*studentnumber*1.0);
        printf("subject%d\n",j+1);
        printf("优秀：%d %.2lf%%\n",a1,b1*100);
        printf("良好：%d %.2lf%%\n",a2,b2*100);
        printf("中等：%d %.2lf%%\n",a3,b3*100);
        printf("及格：%d %.2lf%%\n",a4,b4*100);
        printf("不及格：%d %.2lf%%\n",a5,b5*100);
    }
    getchar();
    returnUserFace();
}
void writetofile(STU *student,int *studentnumber,int *subjectnumber)
{
    system("cls");
    FILE *fp;
    int i,j;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*subjectnumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    if ((fp=fopen("student.txt","w"))==NULL)
    {

        printf("Failure to open student.txt!\n");
        exit(0);
    }
    else
    {
        fprintf(fp,"%-d  %d ",*studentnumber,*subjectnumber);
        fputc(10,fp);
        for (i=0; i<*studentnumber; i++)
        {
            fprintf(fp,"%-ld %-20s ",student[i].ID,student[i].Name);
            for (j=0; j<*subjectnumber; j++)
            {
                fprintf(fp,"%-8.2f ",student[i].score[j]);
            }
            fprintf(fp,"%-8.2f",student[i].sum);
            fputc(10,fp);
        }
        printf("写入成功\n");
    }
    fclose(fp);
    getchar();
    returnUserFace();
}
void readfromfile(STU *student,int *studentnumber,int *subjectnumber)
{
    system("cls");
    int i,j;
    FILE *fp;
    if ((fp=fopen("student.txt","r"))==NULL)
    {

        printf("Failure to open student.txt!\n");
        exit(0);
    }
    fscanf(fp,"%d%d",studentnumber,subjectnumber);
    for (i=0; i<*studentnumber; i++)
    {
        fscanf(fp,"%ld %s",&student[i].ID,student[i].Name);
        for (j=0; j<*subjectnumber; j++)
        {
            fscanf(fp,"%f",&student[i].score[j]);
        }
        fscanf(fp,"%f",&student[i].sum);
    }

    for (i=0; i<*studentnumber; i++)
    {
        printf("%ld %-20s ",student[i].ID,student[i].Name);
        for (j=0; j<*subjectnumber; j++)
        {
            printf("%-8.2f ",student[i].score[j]);
        }
        printf("%-8.2f",student[i].sum);
        putchar(10);
    }
    returnUserFace();
}
void Printf(STU *student,int *studentnumber,int *subjectnumber)
{
    system("cls");
    int i,j;
    for (j=0; j<*studentnumber; j++)
    {
        student[j].sum=0;
        for (i=0; i<*subjectnumber; i++)
        {
            student[j].sum=student[j].score[i]+student[j].sum;
        }
    }
    for (i=0; i<*studentnumber; i++)
    {
        printf("%ld %-20s ",student[i].ID,student[i].Name);
        for (j=0; j<*subjectnumber; j++)
        {
            printf("%-8.2f ",student[i].score[j]);
        }
        printf("%-8.2f",student[i].sum);
        putchar(10);
    }
    returnUserFace();
}//输出函数






#endif // HEADER_H_INCLUDED
