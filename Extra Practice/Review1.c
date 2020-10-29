#include <stdio.h>
#include <stdlib.h>

//int* creatStackInt ( void );
//int* creatHeapInt ( void );
//void doNothingFunc( void );

int pointersAndFriends ( void ) {
    
//    // pointers
//    int value = 5;
//    int* address;
//    address = &value;
//
//    printf("the value is %d\n", value);
//    printf("the value address is %p\n", &value);
//    printf("the address is %p\n", address);
//    printf("the value in the address is %d\n", *address);
//
//    printf("************************************\n");
//
//    value = value + 10;
//
//    printf("the value now is %d\n", value);
//    printf("the value in the address now is %d\n", *address);
//
//    int **adressOfTheAddress = &address;
//    printf("the address of the address is %p\n", adressOfTheAddress);
//
//    printf("************************************\n");
//
//    // arrays
//    char stringArray[] = "this is an array string";
//    char *pointerString  = "this is a pointer string";
//
//    printf("%s\n", stringArray);
//    printf("%s\n", pointerString);
//
//    printf("************************************\n");
//
//    //memory management allocations
//
//    int intOnTheStack = 12345;
//    int *intOnTheHeap = malloc(sizeof(int));
//    *intOnTheHeap = 67890;
//
//    printf("intOnTheStack = %d\n", intOnTheStack);
//    printf("intOnTheHeap = %d\n", *intOnTheHeap);
//
//    printf("************************************\n");
//
//    //memory management arrays
//
//    int *heapArray = malloc(sizeof(int) * 3);
//    heapArray[0] = 123;
//    heapArray[1] = 234;
//    heapArray[2] = 345;
//
//    printf("Array Elements = [");
//    int index = 0;
//    for (index = 0; index < 3; index++) {
//        printf("%d", heapArray[index]);
//        if (index < 2) {
//            printf(", ");
//        }
//    }
//    printf("]\n");
//
//    printf("\n");
//
//    int *addressOf2 = &heapArray[2];
//    printf("heapArray[2] value = %d\n", *addressOf2);
//    printf("heapArray[2] pointer address = %p\n", addressOf2);
//    printf("\n");
//
//    int *addressOf3 = &heapArray[2] + 1;
//    printf("heapArray[3] value = %d\n", *addressOf3);
//    printf("heapArray[3] pointer address = %p\n", addressOf3);
//    printf("\n");
//
//    heapArray = realloc(heapArray, sizeof(int) * 10);
//    printf("reallocated data\n");
//    printf("\n");
//
//    heapArray[3] = 456;
//    addressOf2 = &heapArray[2];
//    printf("heapArray[2] value = %d\n", *addressOf2);
//    printf("heapArray[2] pointer address = %p\n", addressOf2);
//    printf("\n");
//
//    addressOf3 = &heapArray[2] + 1;
//    printf("heapArray[3] value = %d\n", *addressOf3);
//    printf("heapArray[3] pointer address = %p\n", addressOf3);
//    printf("\n");
//
//    printf("heapArray[3] value = %d\n", heapArray[3]);
//    printf("heapArray[3] address = %p\n", &heapArray[3]);
//    printf("\n");
//
//    printf("************************************\n");
//
//    //memory management pitfalls
//    int *stackInt = creatStackInt();
//    doNothingFunc();
//    printf("stack int value = %d, address = %p\n", *stackInt, stackInt);
//
//    int *heapInt = creatHeapInt();
//    doNothingFunc();
//    printf("heap int value = %d, address = %p\n", *heapInt, heapInt);
//
//    int *firstNewHeapInt = malloc(sizeof(int));
//    *firstNewHeapInt = 567;
//    printf("first new heap int value = %d, address = %p\n", *firstNewHeapInt, firstNewHeapInt);
//
//    free(heapInt);
//
//    int *secondNewHeapInt = malloc(sizeof(int));
//    *secondNewHeapInt = 8888;
//
//    printf("second new heap int value = %d, address = %p\n", *secondNewHeapInt, secondNewHeapInt);
//    printf("original heap int value = %d, address = %p\n", *heapInt, heapInt);
//
//    printf("************************************\n");
    return 0;
}

//int* creatStackInt () {
//    int stackInt = 1234567;
//    printf("stackInt address = %p\n", &stackInt);
//    return &stackInt;
//}
//
//int* creatHeapInt () {
//    int *heapInt = malloc(sizeof(int));
//    *heapInt = 3456789;
//    return heapInt;
//}
//
//void doNothingFunc() {
//    int localVar = 500;
//    localVar = localVar + 2;
//    printf("localVar address = %p\n", &localVar);
//    return;
//}
