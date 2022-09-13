/*
program to understand pointers to structures
*/

#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[20];
    int rollno;
    int marks;
};

int main(){
    struct student stu = {"Mary", 25, 68};
    struct student *ptr = &stu;
    printf("Name - %s\t", ptr->name);
    printf("Rollno - %d\t", ptr->rollno);
    printf("Marks - %d\n", ptr->marks);

    return 0;
}