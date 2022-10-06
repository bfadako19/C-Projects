// include header file
#include "./headers/BasicIO.h"

// write the code for the functions declare in the header file
// this function will use printf and puts output data to stdout(terminal)
void output (void){
    //printf formats and outputs a series of characters and values to stdout. It does not
    // append a new line character to the end of its output
    printf("Your first name is %s\n",FIRST_NAME);
    printf("Your last name is %s\n",LAST_NAME);
    printf("Your weight is %f and your age is %d\n",WEIGHT,AGE);

    // puts outputs a string (char *) to stdout. It does not append a new line character to the
    // end of its output
    puts(FIRST_NAME);
    puts(LAST_NAME);
}

// this function will use scanf to intput data from stdin(keyboard)
void input(void){
    // declare variables to store input data
    int age;
    float weight;
    char name[] = "";

    // input an integer
    printf("Enter your age: ");
    // scanf reads the value from stdin per the type specified in the format specifier and
    // stores it in address of the specified variable
    scanf("%d", &age);
    printf("Entered age is: %d",age);

    // input a float
    printf("\nEnter your weight: ");
    scanf("%f", &weight);
    printf("Entered weight is: %.2f",weight);

    // input a string
    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("Entered name is: %s",name);
}