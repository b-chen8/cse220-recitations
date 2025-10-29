#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "r8.h"

// TODO: Implement
// Add a new student to the linked list
// Return: head of the list
Student *add_student(Student **head, char *name, float grade)
{
    Student *new_student = (Student *)malloc(sizeof(Student));
    if(new_student == NULL){
      return NULL;
    }

    new_student->name = malloc(sizeof(name) + 1);
    if(new_student->name == NULL){
      free(new_student);
      return NULL;
    }
    
    strcpy(new_student->name, name);
    new_student->grade = grade;
    
    new_student->next_student = *head;
    *head = new_student;

    return new_student;
}

// TODO: Implement
// Display all students in the linked list
void show_students(Student *head)
{
    if(head == NULL){
        printf("No modes\n");
        return;
    }
    Student *cur *head;
    while(cur != NULL){
        printf("Name: %s, Grade: %f\n", current->name, current->grade);
        cur = cur->next_student;
    }
    printf("\n");
}

// TODO: Implement
// Remove a student from the linked list by name
// Return: the removed node
Student *remove_student(Student **head, char *name)
{
    if(*head ==NULL){
        return NULL;
    }
    
    Student *cur = *head;
    Student *prev = NULL;

    while(cur != NULL && strcmp(cur_>name, name) != 0){
        prev = cur;
        cur = cur->next_student;
    }
    
    if(cur == NULL){
        return NULL;
    }

    
}
// TODO: Implement
// Search for a student by name
// Return: the node that match the name
Student *search_student(Student *head, char *name)
{
}
// TODO: Implement
// Update a student's grade
// Return: The updated student node
Student *update_student(Student *head, char *name, float new_grade)
{
}
