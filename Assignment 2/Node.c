/*
 * Node.c
 *
 *  Created on: Nov. 5, 2019
 *      Author: rutvik
 */

#include "Node.h"
#include <stdio.h>

void print_list(node_t *head) {

	node_t *current = head;
	while (current != NULL) {
		printf("%s %s\n", current->currentstudent->f_name,
				current->currentstudent->l_name);
		current = current->next;
	}
}

void addToEnd(node_t **head, student_t *student) {

	node_t *current = *head;

	while (current->next != NULL) {
		current = current->next;
	}

	current->next = (node_t*) malloc(sizeof(node_t));
	current->next->currentstudent = student;
	current->next->next = NULL;

}

void addToStart(node_t **head, student_t *student) {
	node_t *new_node;
	new_node = malloc(sizeof(node_t));
	new_node->currentstudent = student;
	new_node->next = *head;
	*head = new_node;
}

void removeFromStart(node_t **head) {

	node_t *next_node = NULL;

	if (*head != NULL) {

		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

}

void removeLast(node_t **head) {

	node_t *current = *head;

	/* if there is only one item in the list, remove it */
	if (current->next == NULL) {
		free(*head);
		return;
	}

	/* get to the second to last node in the list */
	while (current->next->next != NULL) {
		current = current->next;
	}

	/*points to the second to last item of the list,  so let’s
	 remove current->next */

	current->next = NULL;
	free(current->next);

}

void remove_by_index(node_t **head, int n) {

	int i = 0;
	node_t *current = *head;
	node_t *temp_node = NULL;

	for (i = 0; i < n - 1; i++) {
		if (current->next == NULL) {
			return;
		}
		current = current->next;
	}

	temp_node = current->next;
	current->next = temp_node->next;
	free(temp_node);

}
