/*
 * Lab4.c
 *
 *  Created on: Oct. 26, 2019
 *      Author: Rutvik & Alpesh
 */

#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char courseCode[7];
	char courseName[10];

} course;

struct Student {
	char firstName[20];
	char lastName[20];
	int studentID;
	course *course;

};

struct Student *arrayOfStudents;
course *arrayOfCourses;

/* 	Function declaration */

void addData();
void printData();

int main() {

	int numStudent = 0;
	printf("How many students do you wish to enter=");
	scanf("%d", &numStudent);

	arrayOfStudents = malloc(numStudent * sizeof(struct Student));
	arrayOfCourses = malloc(numStudent * sizeof(course));

	int i;

	for (i = 1; i <= numStudent; i++) {
		addData(i);
	}

	printData(numStudent);

	return 0;
}

void addData(int i) {
	arrayOfStudents[i - 1].course = &arrayOfCourses[i - 1];
	printf("Enter student #%d first Name:", i);
	scanf("%s", arrayOfStudents[i - 1].firstName);

	printf("Enter Student Last Name:");
	scanf("%s", arrayOfStudents[i - 1].lastName);

	printf("Enter student ID:");
	scanf("%d", &arrayOfStudents[i - 1].studentID);

	printf("Enter course code:");
	scanf("%s", arrayOfStudents[i - 1].course->courseCode);

	printf("Enter course name:");
	scanf("%s", arrayOfStudents[i - 1].course->courseName);

	printf("\n");

}

void printData(int numStudent) {

	int i = 0;
	for (i = 1; i <= numStudent; i++) {
		printf("Student Name: %s %s", arrayOfStudents[i - 1].firstName,
				arrayOfStudents[i - 1].lastName);
		printf("\nStudent ID: %d", arrayOfStudents[i - 1].studentID);
		printf("\nCourse code: %s", arrayOfStudents[i - 1].course->courseCode);
		printf("\nCourse Name: %s", arrayOfStudents[i - 1].course->courseName);
		printf("\n");
		printf("\n");

	}
}
