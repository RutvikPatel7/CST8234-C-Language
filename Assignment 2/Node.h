/*
 * Node.h
 *
 *  Created on: Nov. 5, 2019
 *      Author: rutvik
 */

#ifndef Node_h
#define Node_h

#include <stdio.h>
/* Add student struct and Node struct */

/*
 Prints all student names in the following format
 LastName, firstName
 */
typedef struct student {
	char f_name[20];
	char l_name[20];
} student_t;

typedef struct node {
	student_t *currentstudent;
	struct node *next;
} node_t;

void print_list(node_t *head);

/*
 Adds a new node to the end of the list
 */
void addToEnd(node_t **head, student_t *student);

/*
 Adds a new node to the beginning of the list
 */
void addToStart(node_t **head, student_t *student);

/*
 Remove the first node in the list
 */

void removeFromStart(node_t **head);
/*
 Removes the last node in the list
 */
void removeLast(node_t **head);

/*
 Removes a node by index
 */
void remove_by_index(node_t **head, int n);

#endif /* Node_h */
