#include "helper.h"

int *students;
char **courses;
int **registrationTable;
int totalRows;
int numOfStudents, numOfCourses;

void populateRegistrationTable() {

	registrationTable = (int**) malloc(totalRows * sizeof(int*));

	int rowCounter;
	for (rowCounter = 0; rowCounter < totalRows; rowCounter++)
		registrationTable[rowCounter] = (int*) malloc(3 * sizeof(int));

	initializeRegistrationTable();

	int counter = 0;
	int studentIndex = 0;

	for (rowCounter = 0; rowCounter < totalRows; rowCounter++) {

		if (counter != numOfCourses) {
			registrationTable[rowCounter][0] = studentIndex;
			registrationTable[rowCounter][1] = counter;
			counter++;
		} else {
			studentIndex++;
			counter = 0;
			rowCounter--;
		}
	}
}

int addData() {

	int counter;

	printf("Enter number of students to add: ");
	scanf("%d", &numOfStudents);
	students = (int*) malloc(numOfStudents * sizeof(int));

	for (counter = 0; counter < numOfStudents; counter++) {
		printf("%d) Enter student id: ", (counter + 1));
		scanf("%d", &students[counter]);

		if (students[counter] < 10000 || students[counter] > 99999) {

			printf("Student id should be of 5 digits. Please try again.\n");
			return 0;

		}
	}
	printf("\n");
	printf("Enter number of courses offered: ");
	scanf("%d", &numOfCourses);
	courses = (char**) malloc(numOfCourses * sizeof(char*));

	for (counter = 0; counter < numOfCourses; counter++)
		courses[counter] = (char*) malloc(8 * sizeof(char*));

	for (counter = 0; counter < numOfCourses; counter++) {
		printf("%d) Enter course code: ", (counter + 1));
		scanf("%s", &(*courses[counter]));
	}
	printf("\n");

	totalRows = numOfStudents * numOfCourses;
	populateRegistrationTable();

	return 1;

}

int getStudentId() {

	int studentId;
	printf("Enter student id: ");
	scanf("%d", &studentId);
	return studentId;

}

void registerStudent() {

	int studentId = getStudentId();

	char courseCode[8];
	printf("Enter course code: ");

	scanf("%s", &courseCode);

	int studentIndex = searchStudentId(studentId);
	int courseCodeIndex = searchCourseCodeId(courseCode);

	if (studentIndex == -1 || courseCodeIndex == -1)
		return;

	setValueInRegistrationTable(studentIndex, courseCodeIndex, 1);

}
void dropStudent() {

	int studentId = getStudentId();
	char courseCode[8];
	printf("Enter course code: ");
	scanf("%s", &courseCode);

	int studentIndex = searchStudentId(studentId);
	int courseCodeIndex = searchCourseCodeId(courseCode);

	if (studentIndex == -1 || courseCodeIndex == -1)
		return;

	setValueInRegistrationTable(studentIndex, courseCodeIndex, 0);
}
void menu() {

	int userInput;
	printf("Choose appropriate number\n");
	printf("1) Register a student in a course\n");
	printf("2) Drop a student from a course\n");
	printf("3) See registration table\n");
	printf("4) Quit\nInput: ");

	scanf("%d", &userInput);

	switch (userInput) {
	case 1:
		registerStudent();
		break;
	case 2:
		dropStudent();
		break;
	case 3:
		printRegistrationTable();
		break;
	case 4:
		return;
		break;
	}
	printf("\n");
	menu();

}

int searchStudentId(int idToSearch) {

	int counter;
	int studentIndex = -1;
	for (counter = 0; counter < numOfStudents; counter++) {

		if (students[counter] == idToSearch) {
			studentIndex = counter;
			break;
		}

	}
	if (studentIndex == -1) {
		printf("No match with given student id.");
		return -1;
	} else {
		return studentIndex;
	}
}

void deleteAllocatedMemory() {

	free(students);
	free(courses);
	free(registrationTable);

}

int searchCourseCodeId(char courseCodeToSearch[8]) {
	int counter;
	int courseIndex = -1;
	for (counter = 0; counter < numOfCourses; counter++) {

		if (!strcmp(courseCodeToSearch, courses[counter])) {
			courseIndex = counter;
			break;
		}

	}
	if (courseIndex == -1) {
		printf("No match with given course code.");
		return -1;
	} else {
		return courseIndex;
	}

	return courseIndex;
}

void setValueInRegistrationTable(int studentIndex, int courseCodeIndex,
		int valueToSet) {

	int counter;
	for (counter = 0; counter < totalRows; counter++) {

		if (registrationTable[counter][0] == studentIndex
				&& registrationTable[counter][1] == courseCodeIndex) {
			registrationTable[counter][2] = valueToSet;
			break;
		}
	}
}

void printRegistrationTable() {

	printf(
			"\t\tRegistration Table\n\nStudent Id\tCourse Code\tRegistration Status\n\n");

	int rowCounter;
	int counter = 0;
	int studentIndex = 0;

	for (rowCounter = 0; rowCounter < totalRows; rowCounter++) {

		if (counter != numOfCourses) {

			if (registrationTable[rowCounter][2])
				printf("  %d\t\t %s\t\tYes\n\n", students[studentIndex],
						courses[counter]);
			else
				printf("  %d\t\t %s\t\tNo\n\n", students[studentIndex],
						courses[counter]);

			counter++;
		} else {
			studentIndex++;
			counter = 0;
			rowCounter--;
		}
	}

}

void initializeRegistrationTable() {

	int i;
	for (i = 0; i < totalRows; i++) {
		int j = 0;
		for (; j < 3; j++) {
			registrationTable[i][j] = 0;
		}
	}
}

int main() {

	if (addData())
		menu();
	else {
		main();
	}

	deleteAllocatedMemory();
	return 1;

}

