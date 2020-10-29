#include <stdio.h>
#include <stdlib.h>
void initializeCourses(char *courseName[], int courseNum);
void calculateGrade(int *gradeList, int courseNum);

int main()
{
    int courseNum, option;
    int exit = 1;
    
    printf("Enter number of courses ");
    scanf("%d", &courseNum);
    
    int *gradeList = (int *)malloc(courseNum * sizeof(int));
    char *courseName[courseNum];
    for(int i = 0; i < courseNum; i++){
        courseName[i] = (char *)malloc(sizeof(char));
    }
    
    initializeCourses(courseName, courseNum);
    
    while(exit != 0){
        printf("--------------Main Menu--------------\n");
        printf("1. Calculate grade average\n");
        printf("2. dispaly grades for all courses \n");
        printf("Select an option: \n");
        scanf("%d", &option);
        if(option == 1){
            printf("Your course and grades are: \n");
            for(int i = 0; i < courseNum; i++){       
                printf("    %s : %d\n", courseName[i], gradeList[i]);
            }
        }
        
        if(option == 2){
            calculateGrade(gradeList, courseNum);
        }
        if(option == 0){
            exit = 0;
        }
    }
    return 0;
}

 void calculateGrade(int *gradeList, int courseNum){
     int numGrades;
     int grades;
     int total = 0;
     for (int i = 0; i < courseNum; i++){
        printf("Enter number of assignment for course %d ", i+1);
        scanf("%d", &numGrades);
        for (int j = 0; j < numGrades; j++){
            printf("    Enter grade of assignment %d ", i+1);
            scanf("%d", &grades);
            total += grades;
        }
        *gradeList = total/numGrades;
        total = 0;
        gradeList++;
     }
 }    

void initializeCourses(char *courseName[], int courseNum){
    for (int i = 0; i < courseNum; i++){
        printf("Enter name of course %d: ", i+1);
        scanf("%s", courseName[i]);
    }
}
    