#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
This application will create two process

The parent will be reading temperature from the child and report it to the user
The child will act as a sensor that keeps producing a temperature every second
 
*/
int main(int argc, const char * argv[]) {
    /*Creates an array to store the pipe descriptors*/
    int pipefd[2];
    pipe(pipefd);
    
    /* variables for convenience and better readability */
    int fdRead;
    int fdWrite;
    
    /* creat a second process, the child */
    int pid = fork();
    
    if (pid != 0) {
        
         /*
          Firstly lets setup the IPC correctly in parent
          We are closing the writing end in the parent
          then save the reading descriptor in a variable for convenience of use
          */

        close(pipefd[1]);
        fdRead = pipefd[0];
        
        /* the buffer using for reading */
        double *buffer = malloc(sizeof(double));
        
        while (1) {
            /* read a temperature reading from the pipe and print it */
            read(fdRead, buffer, sizeof(double));
            printf("temperature is: %0.2lf\n", *buffer);
        }
        
    } else {
        /*
         Firstly lets setup the IPC correctly in child
         We are closing the reading end in the child
         then save the writing descriptor in a variable for convenience of use
         */
        close(pipefd[0]);
        fdWrite = pipefd[1];
        
        /*the following is for generating a fake temperature reading */
        const double delta = 0.1;
        double temperature = 20.1;
        
        /* the buffer will be used to write to the pipe */
        double *buffer = malloc(sizeof(double));
        *buffer = temperature;
        
        /*infinite loop to simulate the sensor reading, which will be produced every 1 second*/
        while (1) {
            /* writing to the pipe */
            write(fdWrite, buffer, sizeof(double));
            /* calcualting the next fake value*/
            temperature += delta;
            /* saving the new temperature reading in the buffer */
            *buffer = temperature;
            /* waiting for a second before writing again*/
            sleep(1);
        }
    }
    return 0;
}
