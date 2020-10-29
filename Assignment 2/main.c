/*
 * main.c
 *
 *  Created on: Nov. 10, 2019
 *      Author: rutvik
 */
#include "Node.h";
#include<stdio.h>

int main(int argc, char **argv) {
	int i;

	node_t *head = NULL;

	printf("first, you will enter 3 students name that will be added to the start of the list\n");

	for (i = 1; i < 4; i++) {

		student_t *student = (student_t*) malloc(sizeof(student_t));

		printf("Please enter first name for student %d:", i);
		scanf("%s", student->f_name);

		printf("please enter last name for the student %d:", i);
		scanf("%s", student->l_name);

		addToStart(&head, student);
	}

	/* print first name and last name from start*/
	print_list(head);

	/* Add 3 student to end of list*/
	printf("Then, you will enter 3 students name that will be added to the end of the list\n");

	for (i = 1; i < 4; i++) {

		student_t *student = (student_t*) malloc(sizeof(student_t));

		printf("Please enter first name for student %d:", i);
		scanf("%s", student->f_name);

		printf("please enter last name for the student %d:", i);
		scanf("%s", student->l_name);

		addToEnd(&head, student);

	}

	/* print another 3 students from last*/

	print_list(head);

	printf("Then, you will remove the first 3 students in the list\n");

	for (i = 1; i < 4; i++) {
		removeFromStart(&head);
	}

	print_list(head);

	printf("Then, you will remove the last 3 students in the list\n");

	for (i = 1; i < 4; i++) {
		removeLast(&head);
	}

	printf("By now, your list should be empty, so you will enter 3 more students\n");

	for (i = 1; i < 4; i++) {

		student_t *student = (student_t*) malloc(sizeof(student_t));

		printf("Please enter first name for student %d:", i);
		scanf("%s", student->f_name);

		printf("please enter last name for the student %d:", i);
		scanf("%s", student->l_name);

		addToEnd(&head, student);
	}
	print_list(head);

	printf("Then, you will delete the second students in the list only\n");
	int n = 1;

	remove_by_index(&head, n);

	print_list(head);

	printf("program ended with exit code:");
	exit(0);
}
