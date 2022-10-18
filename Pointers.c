//include preprocessor directive
#include "./headers/Pointers.h"

/*Each variable and function gets stored in memory (in the stack). The location in memory
 to where it's stored is referred to as its address. Unlike other variables that store values of 
 a certain type (like int, float, etc) a pointer is a variable that stores an address. An integer
 variable stores an integer value. An integer pointer stores the address of an integer variable.
 We can have pointers to characters, integers, doubles, etc. We can even have pointers to functions.
 Pointers get stored in the heap*/

/*this function prints the address of itself*/
 void printAddress(void){
    // %p format specifier used in the format string is a placeholder for an address
    printf("The printAddress function is stored at %p\n",printAddress);    
 }
/*this function returns the address of the global variable i*/
 int *getAddress(void){
    //declare a pointer to an integer
    //the * is needed when declaring a pointer
    int *ptr;
    //get the address of global variable i and store it in the pointer
    //must use the & when accessing an address of a variable
    //the * is not needed when storing an address in a pointer
    ptr = &i;

    //return pointer
    //the * is not needed when using an address in a pointer
    return(ptr);
 }
 /*this function returns the value stored at address of the global variable i*/
 int getDataAtAddress(void){
    //declare a pointer to an integer
    //the * is needed when declaring a pointer
    int *ptr;
    //get the address of global variable i and store it in the pointer
    //must use the & when accessing an address of a variable
    //the * is not needed when storing an address in a pointer
    ptr = &i;

    //return the value stored at the pointer
    //the * is needed when accessing a value in an address in a pointer
    return(*ptr);

 }