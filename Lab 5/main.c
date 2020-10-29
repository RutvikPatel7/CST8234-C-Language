/*
 * main.c
 *
 *  Created on: Nov. 12, 2019
 *      Author: rutvik
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

	FILE *point1 = fopen("FileRead.txt", "r");
	FILE *point2 = fopen("FileOut.txt", "w");

	char arr[50];

	if (point1 == NULL) {
		printf("Error opening file");
		exit(1);
	}

	while (!feof(point1)) {

		fscanf(point1, "%s", arr);
		printf("I read from FileRead.txt -> %s ", arr);
		printf("\n");
		fprintf(point2,"I read from FileRead.txt -> %s ", arr);
		fprintf(point2,"\n", arr);
	}
	fclose(point1);
	fclose(point2);
}
