#include <stdio.h>

struct Book {
    char* author;
    int ISBN;
};

void printBookInfo () {
    struct Book myBook;
    myBook.author = "The Gratest author";
    myBook.ISBN = 12353;
    printf("%s\n", myBook.author);
}

struct Movie {
    char* name;
    int year;
    int rating;
} myMovie;

void printNamedStrcut() {
    myMovie.name = "Matix";
    printf("%s\n", myMovie.name);
}

typedef struct {
    int startTime;
    int endTime;
} Game;

void printGameinfo () {
    Game game1;
    game1.startTime = 123;
    game1.endTime = 456;
    printf("%d\n", game1.endTime);
}

typedef struct  {
    int hoursePower;
    int CC;
    int cylinder;
} Engine;

typedef struct {
    int doors;
    int drivetrain;
    int passengers;
//    Engine engine;
    Engine *engine;
} Car;

int main2 ( void ) {
    printBookInfo();
    printGameinfo();
    printNamedStrcut();
    
    printf("**********************************\n");
    
    Engine v8;
    Engine *pEngine = &v8;
    
    v8.hoursePower = 650;
    v8.cylinder = 8;
    pEngine->CC = 6200;
    
    printf("%d %d %d\n", v8.hoursePower, v8.cylinder, v8.CC);

    printf("**********************************\n");
    
    Car corvette;
    
//    corvette.engine = v8;
    corvette.engine = &v8;
    corvette.engine->hoursePower = 650;
    
    return 0;
}
