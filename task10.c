#include<stdio.h>

struct student_info
{
    char name[50];
    int rollno;
    int t_mks;
    int arr_mks[100];
    char branch[100];
};
int main(){
    int n, i, j, k;
    printf("Enter no. of students to add:");
    scanf("%d", &n);


    struct student_info stud_in[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Enter Name of Student:");
        scanf("%s", stud_in[i].name);

        printf("Enter roll no.:");
        scanf("%d", &stud_in[i].rollno);

        printf("Enter branch:");
        scanf("%s", stud_in[i].branch);
    
        printf("Enter marks:");
        scanf("%d%d%d%d%d", &stud_in[0].arr_mks, &stud_in[1].arr_mks, &stud_in[2].arr_mks, &stud_in[3].arr_mks, &stud_in[4].arr_mks);
        stud_in[i].t_mks = stud_in[0].arr_mks + stud_in[1].arr_mks + stud_in[2].arr_mks + stud_in[3].arr_mks + stud_in[4].arr_mks;
        

    }

    printf("Roll No. \tName \tBranch \tTotal Marks");
    for (k = 0; k < n; k++)
    {
        printf("%d \t%s \t%s \t%d", stud_in[k].rollno, stud_in[k].name, stud_in[k].branch, stud_in[k].t_mks);
    }


    return 0;
}
