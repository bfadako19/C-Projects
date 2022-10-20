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
   /*this function changes the value at the address of the global variable j*/
    double storeDataAddress(void){
    //declare a pointer to a double
    //the * is needed when declaring a pointer
    double *ptr;
    //get the address of global variable j and store it in the pointer
    //must use the & when accessing an address of a variable
    //the * is not needed when storing an address in a pointer
    ptr = &j;
    //change the value in the global variable j via the pointer
    //the * is need when accessing a value in a pointer
    *ptr += *ptr;

    //return the value stored at the pointer
    //the * is needed when accessing a value in an address in a pointer
    return(*ptr);
    }
    /*this function returns the size of a double stored in a pointer*/
    int getDoubleBytes(void){
    //declare a pointer to a double
    //the * is needed when declaring a pointer
    double *ptr;
    //get the address of global variable j and store it in the pointer
    //must use the & when accessing an address of a variable
    //the * is not needed when storing an address in a pointer
    ptr = &j;
    //change the value in the global variable j via the pointer
    //the * is need when accessing a value in a pointer
    *ptr += *ptr;

    //return the size of the value stored at the pointer
    //the * is needed when accessing a value in an address in a pointer
    return(sizeof(*ptr));

    }
    /*this function returns the size of the pointer to a double*/
    int getPointertoDoubleBytes(void){
    //declare a pointer to a double
    //the * is needed when declaring a pointer
    double *ptr;
    //get the address of global variable j and store it in the pointer
    //must use the & when accessing an address of a variable
    //the * is not needed when storing an address in a pointer
    ptr = &j;
    //change the value in the global variable j via the pointer
    //the * is need when accessing a value in a pointer
    *ptr += *ptr;

    //return the size of the pointer to a double
    //the * is not needed when accessing a pointer
    return(sizeof(ptr));
    }
   /*this function prints the address to a pointer to a double that stores null*/
    void pointerToNull(void){
    //declare a pointer to a double
    //the * is needed when declaring a pointer
    double *ptr;
    //store a value of null at the address int the pointer to a double
    //the * is not needed when storing an address in a pointer
    //NULL is an address where no data exists
    ptr = NULL;
    //get the address of the gloabl static variable j and store it in the pointer
    //must use the & operator when accessing an address of a variable
    //the * is not need when storing an address in a pointer
    ptr =  &j;
    //check if the pointer isn't NULL
    //The * is not needed when accessing the address of the pointer
    if(ptr){
      printf("The pointer is not null %p\n",ptr);
    }else{
      printf("The pointer is null %p\n",ptr);
    }
    }