#ifndef helper_h
#define helper_h

#include <stdio.h>
#include <stdlib.h>

void populateRegistrationTable();

int addData();

int getStudentId();

void registerStudent();

void dropStudent();

void menu();

int searchStudentId(int idToSearch);

int searchCourseCodeId(char courseCodeToSearch[8]);

void setValueInRegistrationTable(int studentIndex, int courseCodeIndex,
		int valueToSet);

void printRegistrationTable();

void initializeRegistrationTable();

void deleteAllocatedMemory();

#endif
