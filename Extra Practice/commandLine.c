#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define OPTIONS "atleast num1, num2"

int main( int argc, char *argv[] ) {
    int i;
    for( i = 0; i < argc; i++ ) {
        printf("Argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}

//void dispErr(char* , char*);
//
//int main( int argc, char *argv[] ) {
//    int i, sum = 0;
//    /*int num1, num2;*/
//    printf ("Number of arguments %d\n", argc);
//    for( i = 0; i < argc; i++ ) {
//        printf("Argv[%d] = %s\n", i, argv[i]);
//    }
//    if (argc < 3){
//        dispErr(OPTIONS, argv[0] );
//        printf("Enter at least 3 parameters\n");
//        exit(EXIT_FAILURE);
//    }
//    /* c=getchar(); */
//    for( i = 0; i < argc; i++ ) {
//        sum += atoi(argv[i]);
//    }
//
//    printf("----------------\n");
//    printf("Result = %d\n", sum);
//    return 0;
//}
//void dispErr(char* a1, char* b1){
//    fprintf(stderr, "option parameters: %s and first parameter %s", a1, b1);
//}

/* run in the terminal then use  echo $? */
//int main( int argc, char *argv[] ) {
//    int sum = 0;
//    int i;
//    for( i = 0; i < argc; i++ ) {
//        sum += atoi(argv[i]);
//    }
//    return sum;
//}
