#include <stdio.h>
#include <string.h>

struct stu_info
{
    long int rollno;
    char name[20];
    char branch[10];
    char bgrp[10];
    char addr[100];
}temp;

struct stu_info s[450];
int stuno = 0;

void studentinfo();
void studentrollinfo();

int main()
{


    int ch;

    printf("\t\tWelcome To Student Information System (SIS)");

    do
    {
        printf("\n\n1 for Entering Student Information\n2 for Displaying Paritcular Student Information\n3 for Exit\nEnter Your Choice:");
        scanf("%d", &ch);
        getchar();

        if (ch == 3)
        {
            break;
        }

        switch (ch)
        {
        case 1:
        {
            studentinfo();
            break;
        }

        case 2:
        {
            studentrollinfo();
            break;
        }

        default:
        {
            printf("Invalid Option!");
            break;
        }
        }

    } while (ch != 3);

    return 0;
}

void studentinfo()
{
    int n, i, x, y;

    printf("Enter The Number of Students to Add:");
    scanf("%d", &n);
    getchar();

    for (int j = 0, i = stuno; j < n; i++, j++)
    {
        // full name
        printf("\nEnter Full Name of Student:");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        char *nlineremove = s[i].name;
        while (*nlineremove != '\0')
        {
            if (*nlineremove == '\n')
            {
                *nlineremove = '\0';
                break;
            }
            nlineremove++;
        }

        // roll number
        printf("Enter Student Roll Number:");
        scanf("%ld", &s[i].rollno);

        // branch
        printf("Enter Student Branch:");
        scanf("%s", &s[i].branch);

        // blood group
        printf("Enter Student Blood Group:");
        scanf("%s", &s[i].bgrp);

        // address
        printf("Enter Address of Student:");
        getchar();
        fgets(s[i].addr, sizeof(s[i].addr), stdin);
        char *nlineremove1 = s[i].addr;
        while (*nlineremove1 != '\0')
        {
            if (*nlineremove1 == '\n')
            {
                *nlineremove1 = '\0';
                break;
            }
            nlineremove1++;
        }

        // no. of students track
        stuno = stuno + 1;
    }
    for (x = 1; x < stuno; x++)
    {
        for (y = 0; y < stuno - x; y++)
        {
            if (s[y].rollno > s[y + 1].rollno)
            {
                temp = s[y];
                s[y] = s[y + 1];
                s[y + 1] = temp;
            }
        }
    }

    printf("\nRoll Number  Name                 Branch  Blood-Group  Address");

    for (i = 0; i < stuno; i++)
    {
        printf("\n%-11ld  %-20s %-6s  %-11s  %s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);
    }
}

void studentrollinfo()
{
    long int rno;
    int i, ntf = 1;

    printf("Enter Student Roll Number:");
    scanf("%ld", &rno);

    for (i = 0; i < stuno; i++)
    {
        if (rno == s[i].rollno)
        {
            printf("\nRoll Number  Name                 Branch  Blood-Group  Address");
            printf("\n%-11ld  %-20s %-6s  %-11s  %s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);   
            ntf = 0;
        }
    }
    if (ntf)
    {
        printf("Not Found!");
    }

}
