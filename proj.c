#include<stdio.h>
#include<string.h>

struct stu_info
{
    long int rollno;
    char name[20];
    char branch[10];
    char bgrp[5];
    char addr[100];
}temp;

int main(){

    int n, i, k, x, y;
    
    printf("Enter The Number of Students to Add:");
    scanf("%d", &n);
    getchar();

    struct stu_info s[n];

    for (i = 0; i < n; i++)
    {
        // full name
        printf("\nEnter Full Name of Student:");
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
        printf("Enter Address of Student:");
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

    /*printf("Roll No. \tFull Name \tBranch \t\tTotal Marks\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%ld \t%s \t%s \t\t%d\n", s[i].rollno, s[i].name, s[i].branch, s[i].t_mks);
    }*/


    for (x = 1; x < n; x++)
    {
        for (y = 0; y < n - x; y++)
        {
            if (s[y].rollno > s[y + 1].rollno)
            {
                temp = s[y];
                s[y] = s[y + 1];
                s[y + 1] = temp;
            }
        }
    }

    printf("\nRoll No. \tName \t\t\tBranch \tBlood Group \tAddress");

    for (i = 0; i < n; i++)
    {
        if (s[i].rollno < 2000000)
        {
            printf("\n%ld \t%s \t\t%s \t%s \t%s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);
        }
        else if (s[i].rollno < 3000000)
        {
            printf("\n");
            printf("\n%ld \t%s \t%s \t%s \t%s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);
        }
        else if (s[i].rollno < 4000000)
        {
            printf("\n");
            printf("\n%ld \t%s \t\t%s \t%s \t%s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);
        }
        else if (s[i].rollno < 5000000)
        {
            printf("\n");
            printf("\n%ld \t%s \t\t%s \t%s \t%s", s[i].rollno, s[i].name, s[i].branch, s[i].bgrp, s[i].addr);
        }
        
        
    }

    return 0;
}
