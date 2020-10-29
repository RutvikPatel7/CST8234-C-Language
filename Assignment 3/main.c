/*
 * main.c
 *
 *  Created on: Nov. 19, 2019
 *      Author: rutvik
 */
#include<stdio.h>
#include<stdlib.h>

void displayStudent();
void displayCourse();
void addStudent();
void addCourse();

FILE *student;
FILE *course;
char arr[50];
char id[50];
char fname[50];
char lname[50];
char coursename[50];
char courseid[50];

int main(int argc, char **argv) {

	student = fopen("Students.txt", "a+");
	course = fopen("Courses.txt", "a+");
	{
	int choice;
	printf("1- Display Students\n");
	printf("2- Display Courses\n");
	printf("3- Add a student\n");
	printf("4- Add a Course\n");
	printf("5- Quit\n");
	printf("> ");

	scanf("%d", &choice);

	switch (choice) {

	case 1:
		displayStudent();
		break;
	case 2:
		displayCourse();
		break;
	case 3:
		addStudent();
		break;
	case 4:
		addCourse();
		break;
	case 5:
		printf("program ended with exit code:");
		exit(0);

		break;
	default:
		printf("Please enter valid input");
	}
	}
	return 0;
}
void displayStudent() {

	if (student == NULL) {
		printf("Error opening file");
		exit(1);
	}

	while (!feof(student)) {

		fgets(arr, 50, (FILE*)student);
		printf("%s", arr );

	}
	fclose(student);
}

void displayCourse() {

	if (course == NULL) {
		printf("Error opening file");
		exit(1);
	}

	while (!feof(course)) {

		fgets(arr, 50, (FILE*)course);
		printf("%s", arr);


	}
	fclose(course);
}

void addStudent() {

	   if(student == NULL)
	   {
	      printf("Error!");
	      exit(1);
	   }
	   printf("Please Enter Student ID: ");
	   scanf("%s",&id);

	   printf("Please Enter Student First Name: ");
	   scanf("%s",&fname);


	   printf("Please Enter Student Last Name: ");
	   scanf("%s",&lname);


	   fprintf(student,"\n%s",fname);
	   fprintf(student," %s ",lname);
	   fprintf(student,"%s",id);

	   fclose(student);

}

void addCourse() {

	   if(student == NULL)
		   {
		      printf("Error!");
		      exit(1);
		   }
		   printf("Please Enter Course ID: ");
		   scanf("%s",&courseid);

		   printf("Please Enter Course Name: ");
		   scanf("%s",&coursename);


		   fprintf(course,"\n%s ",courseid);
		   fprintf(course,"%s",coursename);

		   fclose(course);
}
