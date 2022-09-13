/*
program to understand how a pointer to structure is returned from a function
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    char name[20];
    int rollno;
    int marks;
};

void display(struct student *);
struct student change(struct student stu);
struct student *func();
struct student *ptr;

int main(){
    struct student *stuptr;
    stuptr = func();
    display(stuptr);
    free(stuptr);
}

struct student change(struct student stu){
    stu.marks = stu.marks + 5;
    stu.rollno = stu.rollno - 10;
    return stu;
}

struct student *func(){
    ptr = (struct student *)malloc(sizeof(struct student));
    strcpy(ptr->name, "Joseph");
    ptr->rollno = 15;
    ptr->marks = 98;

    return ptr;
}

void display(struct student *stuptr){
    printf("Name - %s\t", stuptr->name);
    printf("Rollno - %d\t", stuptr->rollno);
    printf("Marks - %d\n", stuptr->marks);
}