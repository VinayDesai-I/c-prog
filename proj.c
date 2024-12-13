#include<stdio.h>
#include<string.h>

struct stu_info
{
    long int rollno;
    char name[16];
    char branch[10];
    char bgrp[5];
    char addr[100];
}temp5;

int main(){

    int n, i, k, x, y;
    
    printf("Enter The Number of Students to Add:");
    scanf("%d", &n);

    struct stu_info s[n];

    for (i = 0; i < n; i++)
    {
        // full name
        printf("\nEnter Full Name of Student:");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        // roll number
        printf("Enter Student Roll Number:");
        scanf("%d", &s[i].rollno);

        // branch
        printf("Enter Student Branch:");
        scanf("%s", &s[i].branch);

        // blood group
        printf("Enter Student Blood Group:");
        scanf("%s", &s[i].bgrp);

        // address
        printf("\nEnter Address of Student:");
        getchar();
        fgets(s[i].addr, sizeof(s[i].addr), stdin);
        s[i].addr[strcspn(s[i].addr, "\n")] = '\0';



        // marks
        /*s[i].t_mks = 0;
        for (k = 0; k < 5; k++)
        {
            printf("Enter Marks of %d Subject:", k+1);
            scanf("%d", &s[i].sub_mks[k]);
            s[i].t_mks += s[i].sub_mks[k];
        }*/

    }

    printf("Roll No. \tFull Name \tBranch \t\tTotal Marks\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%ld \t%s \t%s \t\t%d\n", s[i].rollno, s[i].name, s[i].branch, s[i].t_mks);
    }


    for (x = 1; x < n; x++)
    {
        for (y = 0; y < n - x; y++)
        {
            if (s[y].t_mks > s[y + 1].t_mks)
            {
                temp5 = s[y];
                s[y] = s[y + 1];
                s[y + 1] = temp5;
                /*temp = s[y].t_mks;
                strcpy(tn, s[y].name);
                strcpy(tn1, s[y].branch);
                temp1 = s[y].rollno;

                s[y].t_mks = s[y +1].t_mks;
                strcpy(s[y].name, s[y + 1].name);
                strcpy(s[y].branch, s[y + 1].branch);
                s[y].rollno = s[y + 1].rollno;

                s[y + 1].t_mks = temp;
                strcpy(s[y + 1].name, tn);
                strcpy(s[y + 1].branch, tn1);
                s[y + 1].rollno = temp1;*/
            }
        }
    }

    printf("\nRoll No \tName \t\tBranch \tTotal Marks");

    for (i = 0; i < n; i++)
    {
        printf("\n%ld \t%s \t\t%s \t%d", s[i].rollno, s[i].name, s[i].branch, s[i].t_mks);
    }

    return 0;
}
